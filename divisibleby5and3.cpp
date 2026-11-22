#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number : ";
    cin>>x;
     if(x%5==0 && x%3==0){
        cout<<"Number is divisible by both 5 and 3"<<endl;}
     
    else if(x%5==0){
        cout<<"divisible by 5 not by 3"<<endl;
        
    }
      else if(x%3==0){
        cout<<"divisible by 3 not by 5"<<endl;
        
    }
    
        else cout<<"number is neither divisible by 5 nor by 3 ";
 
}