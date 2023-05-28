
#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5;
    float percentage,total;

    cout<<"enter marks of five subjects:";
    cin>>m1>>m2>>m3>>m4>>m5;
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    cout<<"percentage is:"<<percentage;
    
    if(percentage>=90){
        cout<<"Grade A";
    }
    else if(percentage>=80){
        cout<<"Grade B";
    }
    else if(percentage>=60){
        cout<<"Grade C";
    }
    else {
        cout<<"Grade D";
    }
    return 0;


}
