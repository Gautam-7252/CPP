#include <iostream>
using namespace std;

int main(){
    int m=5;
    int n=5;
    int array[m][n] = {{1, 2, 3, 4, 5}, {16, 17, 18, 19, 6}, {15, 24, 25, 20, 7}, {14, 23, 22, 21, 8}, {13, 12, 11, 10, 9}};
    int row_start=0;
    int column_start=0;

    while(row_start < m && column_start<n){
        //row-start
        for(int i=column_start;i<n;++i){
            cout<<array[row_start][i]<<" ";
        }
        row_start++;

        //column-end
        for(int i=row_start;i<m;++i){
            cout<<array[i][n-1]<<" ";
        }
        n--;

        //row-end
        if(row_start<m){
        for(int i=n-1;i>=column_start;--i){
            cout<<array[m-1][i]<<" ";
        }
        m--;
        }

        //column-start
        if(column_start<n){
        for(int i=m-1;i>=row_start;--i){
            cout<<array[i][column_start]<<" ";
        }
        column_start++;
        }

    }
}