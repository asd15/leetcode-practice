//find index(first) of element in an array using recursion
#include<iostream>
using namespace std;

int findIndex(int a[], int n, int x, int i){
    if(i == n) return 0;

    if(a[i] == x){
        return i;
    }

    return findIndex(a, n, x, i+1);
}

int main(){
    int a[] = {1,6,7,5,4};
    cout<<findIndex(a, 5, 7, 0);
}