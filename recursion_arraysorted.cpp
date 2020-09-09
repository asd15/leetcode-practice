//check if array is sorted using recursion
#include<iostream>
using namespace std;

//method 1
bool arraysorted(int a[], int n){
    if(n == 0 || n == 1) return true;
    
    if(a[0] > a[1])
        return false;

    return arraysorted(a+1, n-1);
}

//method 2
bool arraysorted2(int a[], int n){
    if(n == 0 || n == 1) return true;

    if(a[n-1] > a[n]) 
        return false;
    return arraysorted2(a-1, n-1);
}

//method 3
bool arraysorted3(int a[], int n){
    if(n == 0 || n == 1) return true;

    bool isSmallerSorted = arraysorted3(a+1, n-1);
    if(!isSmallerSorted)
        return false;
    if(a[0] > a[1])
        return false;
    else
        return true;
}

int main(){
    int a[] = {1,2,4,2,5};
    if(arraysorted3(a, 5))
        cout<<"sorted";
    else
        cout<<"not sorted";
    
    return 0;
}