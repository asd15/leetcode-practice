//check if num is present in array using recursion
#include<iostream>
using namespace std;

//method 1
bool isPresent(int a[], int n, int x){
    if(n == 0) return false;

    if(a[0] == x) return true;

    return isPresent(a+1, n-1, x);
}

//method 2
bool isPresent2(int a[], int n, int x){
    if(n == 0) return false;

    if(a[n-1] == x) return true;

    return isPresent2(a, n-1, x);
}

//method 3
bool isPresent3(int a[], int n, int x, int i){
    if(i == n) return false;

    if(a[i] == x) return true;

    return isPresent3(a, n, x, i+1);
}

int main(){
    int a[] = {2,5,6,8,5};
    if(isPresent3(a, 5, 5, 0)) 
        cout<<"Found"; 
    else
        cout<<"not found";
    return 0;
}