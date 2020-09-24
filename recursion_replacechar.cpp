//replace a with x in a char array using recursion

#include<iostream>
using namespace std;

void replacechar(char a[]){
    if(a[0] == '\0') return;

    if(a[0] == 'a'){
        a[0] = 'x';
    }
    cout<<a[0];
    replacechar(a+1);
}

int main(){
    char a[] = "abacad";
    replacechar(a);
    return 0;
}