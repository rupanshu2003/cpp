#include<iostream>
using namespace std;
int main(){
    int num,sumEven=0;
    int sumOdd=0;
    cout<<"enter a number:";
    cin>>num;
    
    for(int i=1;i<=num;i++){
    if(i%2==0){
        sumEven+=i;
    }else{
        sumOdd+=i;   
    }
}
cout<<"sum of even numbers from 1 to n"<<sumEven;
cout<<"sum of odd numbers from 1 to n"<<sumOdd;
return 0;
}
