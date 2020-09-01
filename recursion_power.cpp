//power of n using recursion
#include<iostream>
using namespace std;

int pow(int n, int x){
    if(x == 0) return 1;
    if(x == 1) return n;

    int p = pow(n, x-1);

    int ans = n * p; 
    return ans;
}

int main(){
    cout<<pow(5, 3);
    return 0;
}