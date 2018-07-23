//
// Created by Steven on 2018/7/23.
//


#include<iostream>
#include<vector>
using std::string;
using std::vector;
struct Sales_data {
    // 成员函数
    std::string isbn() const {  return this->bookNo; }
    // 成员函数声明
    Sales_data& combine ( const Sales_data& );
    double avg_price() const;
    // 数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
// Sales_data 非成员函数声明
Sales_data add(const Sales_data&,const Sales_data& );
std::ostream &print(std::ostream&,const Sales_data& );
std::istream &read(std::istream, Sales_data& );

double Sales_data::avg_price() const {
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}
Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main()
{
    Sales_data a1;
    a1.bookNo="1111";
    std::cout<<a1.isbn();
}
