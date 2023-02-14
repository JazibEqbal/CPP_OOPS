#include<iostream>
#include"Date.h";
using namespace std;

Date::Date():dd(1),mm(1),yy(00){}
Date::Date(int day,int month,int year):
dd(day),mm(month),yy(year){}
void Date::display(){
    cout<<dd<<" "<<mm<<" "<<yy<<endl;
}