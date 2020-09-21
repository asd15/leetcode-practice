//find length of char array using recursion

#include<iostream>
using namespace std;

int chararraylength(char a[]){
    if(a[0] == '\0') return 0;

    int smalllen = chararraylength(a+1);
    int len = smalllen + 1;
    return len;
}

int main(){
    char a[] = "abc";
    cout<<chararraylength(a);
    return 0;
}