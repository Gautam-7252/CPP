#include<bits/stdc++.h>

int fibbonaci(int x){
    if(x<=1){

        return x;
    }
    else{

    return fibbonaci(x-1)+fibbonaci(x-2);
    }
}
int main(){
    
    int y=7;
    int i=0;
    while(i<y){
        std::cout<<" "<< fibbonaci(i);
        i++;

    }
    return 0;
}

 