#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"age of ram : ";
    
    cin>>x;
    cout<<"age of shyam : ";
    
    cin>>y;
    cout<<"age of ajay : ";
    cin>>z;
if(x<y){
    if(x<z)
    cout<<"ram is yougest";
    else cout<<"ajay is youngest";
}

else{
    if(y<z) cout<<"shyam is youngest";
    else cout<<"ajay is youngest";
}

}