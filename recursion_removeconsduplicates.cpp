//remove consecutive duplicates of char array using recursion

#include<iostream>
using namespace std;

void removeduplicates(char a[]){
    if(a[0] == '\0') return;

    if(a[0] != a[1]){
        removeduplicates(a + 1);
    } else{
         for(int i=0; a[i] != '\0'; i++){
            a[i] = a[i+1];
        }
        removeduplicates(a);
    }
}

int main(){
    char a[] = "aabbbcddeef";
    removeduplicates(a);
    cout<<a;
    return 0;
}