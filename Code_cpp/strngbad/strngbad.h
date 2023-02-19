//strngbad.h -- flawed string class definition 
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
#include <iostream>
class StringBad
{
    private:
        char * str; //pointer to string,避免了实现声明字符串的长度，在构造函数调用时再为字符串本身分配内存空间
        int len;    //length of string
        static int num_strings; //number of objects,静态数据成员，所有创建的对象共用这一个"num_strings"
    public:
        StringBad(const char * s);  //constructor
        StringBad();    //default constructor
        ~StringBad();   //destructor

    //friend function
        friend std::ostream & operator << (std::ostream & os, const StringBad & st);
};

#endif
