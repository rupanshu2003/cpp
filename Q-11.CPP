#include<iostream>
using namespace std;
int main(){
    int operand1,operand2,result;
    char operation;
    cout<<"enter operand1 and operand2:";
    cin>>operand1>>operand2;
    cout<<"enter the operator(+,-,*,/):";
    cin>>operation;

    switch(operation){
        case '+':
        result =operand1 + operand2;
        break;
        case '-':
        result =operand1 - operand2;
        break;
        case '*':
        result =operand1 * operand2;
        break;
        case '/':
        if(operand2 !=0 ){
            result=operand1 / operand2;
        }else{
            cout<<"error: division  by zero is not allowed";
        }
        break;
        default:
        cout<<"error: invalid operator";
        return 0;
    }



}
