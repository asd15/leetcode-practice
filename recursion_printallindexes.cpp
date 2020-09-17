//print all indexes of a given element x using recursion

#include<iostream>
using namespace std;

void printallindex(int a[], int n, int x, int i){
    if(i == n) return;

    if(a[i] == x){
        cout<< i << endl;
    } 
    printallindex(a, n, x, i+1);
}

int main(){
    int a[] = {3,5,3,7,3,9,3};
    printallindex(a, 7, 3, 0);
    return 0;
}