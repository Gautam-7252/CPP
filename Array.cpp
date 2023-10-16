#include<iostream>
using namespace std;

//Insert at end , at any position.
// int insertatend(int arr[],int len,int x,int capacity){
//     if(len<=capacity){
//         arr[len]=x;
//     }
//     return len=len+1;
// }

//Insert at the any position
// int insertatpos(int arr[],int length , int x , int pos){
//     for(int i=length-1;i>=pos;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[pos]=x;
// }
// int main(){
//     int array[10]={1,2,3,4,5,6,7,8};
//     int length=8;
//     int pos=2;
//     int x=10;
//     int capacity=sizeof(array)/sizeof(array[0]);;
//     insertatpos(array,length,x,pos);
//     length++;
//     cout<<length<<endl;
//     for(int i=0;i<length;i++){
//         cout<<array[i]<<"\t";
//     }
// }