//convert string to integer using recursion

#include<iostream>
using namespace std;

int convert(char a[], int n){
    if(n == 0) return 0;

    int smallAns = convert(a, n-1);

    int lastdig = a[n-1] - '0';

    int ans = smallAns*10 + lastdig;
    return ans;
}

int main(){
    char a[] = "12345";
    cout<<convert(a, 5);
    return 0;
}