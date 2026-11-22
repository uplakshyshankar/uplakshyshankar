#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter price of object : ";
    cin>>y;
    cout<<"enter sold price of object : ";
    cin>>x;
    if(x<y){
        cout<<"loss"<<endl;
        cout<<"loss of : ";
        cout<<y-x;
    }
    if(x==y){
        cout<<"nor loss neither profit"<<endl;
        
    }
    if(x>y){
        cout<<"profit"<<endl;
        cout<<"profit of : "<<x-y;
    }

}