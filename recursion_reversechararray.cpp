//print and reverse character array using recursion

#include<iostream>
using namespace std;

void printchar(char a[]){
    if(a[0] == '\0') return;

    cout<< a[0];

    printchar(a+1);
}

void reversechar(char a[]){
    if(a[0] == '\0') return;

    reversechar(a+1);

    cout<< a[0];
}

int main(){
    char a[] = "abc";
    printchar(a);
    cout<<endl;
    reversechar(a);
    return 0;
}