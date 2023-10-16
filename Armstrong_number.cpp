#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=153;
int b=a;
int digit = 0;
int arm = 0;
while(a>0){
    digit = a%10;
    arm=arm+(digit*digit*digit);
    a=a/10;
}
if(b==arm){
    cout<<"Given Number is Armstrong Number." <<endl;
}
else{
    cout<<"Not Armstrong"<<endl;
}
}
