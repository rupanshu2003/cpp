#include<iostream>
using namespace std;
 int main(){
    int fact=1,num,i;
    cout<<"enter a number:";
    cin>>num;
    for(int i=1;i<=num;i++){
    fact=fact*i;
    }
    cout<<"factorial of a given number"<<fact;
    return 0;
 }
