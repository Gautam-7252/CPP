#include<iostream>
using namespace std;

int main(){
     
    int n=7;
    int a = 0, b = 1, c, i;
    if (n == 0)
        cout<<a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout<<b;
}
