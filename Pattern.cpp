#include<iostream>
using namespace std;

// TRAINGLE
// int main() {
//     int n=4;
//     for (int i=0;i<=n;i++){
//         for( int j=0; j<i;j++){
//             std::cout<<"* ";
//         }
//      std::cout<<"\n"  ;
//     }
// }

//REVERSE TRIANGLE
// int main(){
//     int n=4;
//     for(int i=0;i<=n;i++){
//         for(int j=i;j<n;j++){
//             std::cout<<"* ";

//         }
//         std::cout<<"\n";
//     }
// }

//PYRAMID TRIANGLE (ODD)
// int main(){
//     int n=3;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             std::cout<<" ";
//         }
//         for(int j=0;j<2*i-1;j++){
//             std::cout<<"*";
//         }
//         std::cout<<"\n";
//     }
// }
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(j<=n-i){
//                 std::cout<<" ";
//             }
//             else if (j>=n+i)
//             {
//                 std::cout<<" ";
//             }
            
//             else{
//                 std::cout<<"*";
//             }
//         }
//         std::cout<<"\n";
//     }
// }

//PYRAMID TRIANGLE (EVEN)
// int main(){
//     int n=3;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             std::cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             std::cout<<"* ";
//         }
//         std::cout<<"\n";
//     }
// }

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 std::cout<<" ";
//             }
//             else{
//                 std::cout<<"* ";
//             }
//         }
//         std::cout<<"\n";
//     }
// }

//RIGHT-ANGLED TRIANGLE 
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             std::cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             std::cout<<"*";
//         }
//         std::cout<<"\n";
//     }
// }

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=i){
//                 std::cout<<"* ";
//             }
//             else{
//                 std::cout<<" ";
//             }
//         }
//         std::cout<<"\n";
//     }
// }


//DIAMOND (FOR ODD)
// int main(){
//     int n=5;
//     for(int i=1;i<=2*n-1;i++){
//         for(int j=1;j<=2*n-1;j++){
            
//             if(j<=n-i || j>=n+i ){ //For upper spaces
//                 cout<<" ";
//             }
//             else if(i>n && (j<=i-n || j>=(2*n)-(i-n))){ //For lower spaces
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
             
//         }
         
//         cout<<"\n";
//     }
// }

//DIAMOND (FOR EVEN)
// int main(){
//     int n=7;
//     for(int i=1;i<=2*n-1;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i || (i>n && j<=i-n)){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"* ";
//             }
//     }
//     cout<<"\n";
//     }
// }

//X WITH MIDLINE SHAPE 
// int main(){
//     int n=7;
//     for(int i=1;i<=2*n-1;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(j==i){
//                 cout<<"*";
//             }
//             else if(j==n){
//                 cout<<"*";
//             }
//             else if(j==2*n-i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//     }
//     cout<<"\n";
//     }
// }

//X SHAPE
// int main(){
//     int n=7;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             if(j==i ||j==n-i+1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//             }
//             cout<<"\n";
//         }
// }

//G SHAPE
int main(){
    int n=5;
    int mid=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || (j==n && i>mid) ){
                cout<<"* ";
            }
            else if(i==mid+1 && j>mid){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}