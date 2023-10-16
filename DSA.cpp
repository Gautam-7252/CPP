#include<iostream>
using namespace std;


//Rearrange zeros to the end of an array.

int main(){
    int arr[]={1,2,0,0,0,0,2,0,4,8,16,32};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n=len;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=0;
            i--;
            n--;
        }
        }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }

}