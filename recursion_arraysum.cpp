//find sum of array using recurion
#include<iostream>
using namespace std;

//method 1
int arraysum(int a[], int n){
    if( n == 0) return 0;

    int ans = a[0] + arraysum(a+1, n-1);

    return ans;
}

//method 2
int arraysum2(int a[], int n){
    if( n == 0) return 0;

    int ans = a[n-1] + arraysum(a, n-1);

    return ans;
}

int main(){
    int a[] = {2,5,1,6,3};
    cout<<arraysum2(a, 5);
    return 0;
}