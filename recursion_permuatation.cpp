//to print permutation of a string using recursion

#include<iostream>
using namespace std;

void printPermut(char a[], int i){
    if(a[i] == '\0'){
        cout<<a<<endl;
        return;
    }
    for(int j=i; a[j]!='\0';j++){
        swap(a[i], a[j]);
        printPermut(a, i+1);
        swap(a[i], a[j]);
    }
}

int main(){
    char a[] = "ABC";
    printPermut(a, 0);
    return 0;
}