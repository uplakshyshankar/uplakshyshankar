#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the lenght of rectangle : ";
    cin>>x;
    cout<<"enter the breadth of rectangle : ";
    cin>>y;
    int a,b;
    a = x*y;
    b = x+y;
    cout<<"area of rectangle : "<<a<<endl;
    cout<<"perimeter of rectangle : "<<b<<endl;
    if(a>b)
    cout<<"area is greater than perimeter";
    else
    cout<<"perimeter is greater than area";

}