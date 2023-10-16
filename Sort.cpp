#include<iostream>
using namespace std;

// int main(){
//     int arr[]={10,20,50,40,30,60,70};
//     int len = sizeof(arr)/sizeof(arr[0]);

//SELECTION SORT - SELECT each elements and compare it by iterating it.
    
//     for(int i=0;i<len;i++){
//         int min=i;
//         //Find the Minimum
//        for(int j=i;j<len;j++){
        
//         if (arr[j]<arr[min]){
//             min = j;
//             int temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
//        }
//     }

//     for(int m=0;m<len;m++){
//         cout<<arr[m]<<endl;
//     }
// }

//BUBBLE SORT - select BUBBLE and then compare between the elements in the buddle and perform it throughout the array.

// for (int i=0;i<len-1;i++){
//     for(int j=0;j<len-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }
//  for(int m=0;m<len;m++){
//         cout<<arr[m]<<endl;
//     }

//INSERTION SORT - 
// int key,j;
// for (int i=1;i<len;i++){
//     key = arr[i];
//     j=i-1;
//     while(j>=0 && arr[j]>key){
//         arr[i]=arr[j];
//         arr[j]=key;
//     }
// }
// for(int m=0;m<len;m++){
//         cout<<arr[m]<<endl;
//     }
// }

//MERGE-SORT
// void mergesort(int[],int,int); 
// void merge(int[],int,int,int);
// int main(){
//     int array[]= {8, 4, 5, 1, 3, 9, 0, 2, 7, 6};
//     int len = sizeof(array)/sizeof(array[0]);
//     mergesort(array,0,len-1);
//     for(int l=0;l<len;l++){
//         cout<<array[l]<<"\t";
//     }
// }

// void mergesort(int a[],int left,int right){
// int mid;
// if(left<right){
//   mid = (left + right)/2;
// mergesort(a,left,mid);
// mergesort(a,mid+1,right);
// merge(a,left,mid,right);
// }}

// void merge(int arr[],int left,int mid,int right){
//     int i,j,k;
//     int n1=mid-left+1;
//     int n2=right-mid;
//     //Creating temporary arrays to store the left and right subarrays
//     int L[n1],R[n2];

//     for(i=0;i<n1;i++){
//         L[i]=arr[left+i];
//     }
//     for(j=0;j<n2;j++){
//         R[j]=arr[mid+1+j];
//     }
//     i=0;
//     j=0;
//     k=left;
   
//     while(i<n1 && j<n2){
//         if(L[i]<=R[j]){
//             arr[k]=L[i];
//             i++;
//         }
//         else{
//             arr[k]=R[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<n1){
//         arr[k]=L[i];
//         i++;
//         k++;
//     }
//     while(j<n2){
//         arr[k]=R[j];
//         j++;
//         k++;
//     }

// }



