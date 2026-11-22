#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the sides of tringles : ";
    
    cin>>x;
    
    cin>>y;
    
    cin>>z;
if((x+y)>z && (z+y)>x && (z+x)>y)
cout<<"these are sides of triangle";
else
cout<<"these are not sides of triangle";
}