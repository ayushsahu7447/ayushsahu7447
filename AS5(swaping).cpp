//[The contents of the first variable is copied into the temp variable. Then,
//the contents of second variable is copied to the first variable.]

#include<iostream>
using namespace std;

int main()
{
    int a=9 , b=5 , temp;

    cout<< "before a=" << a <<" b=" << b << endl;

    temp=a;
    a=b;
    b=temp;

    cout<< "after a=" << a << " b=" << b;
    return 0;
}
