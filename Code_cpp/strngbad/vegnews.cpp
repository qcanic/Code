// vegnews.cpp -- using new and  delete with classes
// compile with strngbad.cpp
#include <iostream>
#include "strngbad.h"
#include <cstdlib>
using namespace std;

void callme1(StringBad &);  //pass by reference
void callme2(StringBad);    //pass by value

int main(void)
{
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stack at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";   
    }
    //使用如上代码段的原因是析构函数在定义对象的代码段结束时被调用
    cout << "End of main()\n";
    system("pause");
    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "String passed by reference: \n";
    cout << " \"" <<  rsb << "\"\n";
}

void callme2(StringBad sb)
{
    cout << "String passed by value: \n";
    cout << " \"" << sb << "\"\n";
}