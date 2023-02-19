// strngbad.cpp -- StringBad class methods
#include <iostream>
#include <cstring>
#include "strngbad.h"
using std::cin;
using std::cout;

//initializing static class member
int StringBad::num_strings = 0; 
//用来记录对象的个数,不能在类声明中初始化静态成员变量，因为声明描述了如何分配内存，但并不分配内存
//静态类成员是单独存储的，并不是对象的组成部分
//初始化语句指出了类型，并使用了作用域解析符，但并没有使用关键字static

//class methods
//constructor StringBad from C string
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);   //set size;
    str = new char[len + 1]; //allot storage
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";  //For Your Information
}

StringBad::StringBad()  //default constructor
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad() //destructor
{
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;  //释放掉动态申请的内存 
    //当StringBad对象过期时，str指针也将过期，但是其指向的内存仍被分配，除非使用delete将其释放
    //因此，必须使用析构函数，可以防止内存泄漏
}
std::ostream & operator <<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}
