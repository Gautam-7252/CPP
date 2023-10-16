//LINEAR SEARCHING
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[]={10,20,50,40,30,60,70};
    int len = sizeof(arr)/sizeof(arr[0]);

int key=60;

// for (int i=0;i<len;i++){
//     if(arr[i]==key){
//         index=i;
//     }
// }
// if (index==0){
//     cout<<"NOT FOUND!"<<endl;
// }
// else{
//     cout<<index<<endl;
// }
// }

//BINARY SEARCH
// int s= 0;
// int e= len;
// for(int i=0;i<len;i++) {
//     int mid= s+e/2;
//     if(arr[mid]==key){
//         cout<<"INDEX :";
//        cout<<mid+1<<endl;
//        break;
//     }
//     else if(key<arr[mid]){
//         e=mid+1;
//     }
//     else if(key>arr[mid]){
//         s=mid-1;
//     }
// }
}