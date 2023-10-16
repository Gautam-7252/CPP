#include<iostream>
#include<math.h>
using namespace std;

//Find the largest three integers in the array.
int main(){
    int first =0;
    int second = 0;
    int third = 0;
    int array[]={1,11,3,4,5,6,7};
    int length=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<length;i++){
        if(array[i]>first){
            third=second;
            second=first;
            first=array[i];
            }
        else if(array[i]>second && array[i] != first){
                third=second;
                second=array[i];
            }
        else if(array[i]>third && array[i] != second){
                third=array[i];
            }
        }
    cout<<third<<endl;
    cout<<second<<endl;
    cout<<first<<endl;
}
