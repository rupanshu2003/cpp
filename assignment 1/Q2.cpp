#include<iostream>
using namespace std;
int main(){
    float phy,chem,math,bio,evs,sum=0;
    cout<<"enter the marks of phy,chem,math,bio,evs:";
    cin>>phy>>chem>>math>>bio>>evs;

    sum=phy+chem+math+bio+evs;
    cout<<"sum is"<<sum;
    float percentage=((sum/500)*100);
    cout<<"percentage is" <<percentage;
    return 0;
}
