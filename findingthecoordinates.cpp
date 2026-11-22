#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter a x coordinate : ";
    cin>>x;
    cout<<"enter a y coordinate : ";
    cin>>y;
    if(x>=0 or y>=0)
    {if(x>0 and y>0)
        cout<<"1st coordinate";
else if(x==0 && y==0) cout<<"origin";
else if(x==0) cout<<"line lie on y axis";
else if(y==0) cout<<"line lie on x axis";
else if(x<0) cout<<"2nd coordinate";
else cout<<"4th coordinate";
    }
    else cout<<"3rd coordinate";
    

}