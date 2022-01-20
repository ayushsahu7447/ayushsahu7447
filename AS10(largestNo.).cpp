#include<iostream>
using namespace std;

int main()
{
    float a , b , c;
    cout<<"enter three no. a b c are === ";
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<"a, b, c are ==== "<< a <<"  "<< b <<"  "<< c << endl ;

    if (a>=b && a>=c){
        if (b>=c)
            cout<<a <<"  "<< b << "  " << c;
        else
            cout<<a <<"  "<< c << "  " << b;
    }

    else if (b>=a && b>=c){
        if (a>=c)
            cout<<b <<"  "<< a << "  " << c;
        else
            cout<<b <<"  "<< c << "  " << a;
    }
    else if (c>=a && c>=b ){
        if (a>=b)
            cout<<c <<"  "<< a << "  " << b;
        else
            cout<<c <<"  "<< b << "  " << a;
    }
    else
        return 0;
}
