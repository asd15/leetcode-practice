//find last index of x in an array using recursion
#include<iostream>
using namespace std;

//method 1
int lastindex(int a[], int n, int x){
    if(n == 0) return -1;

    if(a[n-1] == x) return n-1;

    return lastindex(a, n-1, x);
}

//method 2
int lastindex2(int a[], int n, int x, int i){
    if(i == n) return -1;

    int indexinremn = lastindex2(a, n, x, i+1);
    if(indexinremn == -1){
        if(a[i] == x){
            return i;
        } else return -1;
    } else{
        return indexinremn;
    }
}

int main(){
    int a[] = {4, 7, 8, 5, 7, 1, 8};
    cout<< lastindex2(a, 7, 8, 0);
    return 0;
}