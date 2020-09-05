//multiplication using + opr only (recursion)
//m * n = m * (n-1) + m
#include<iostream>
using namespace std;

int mult(int m, int n){
    if(n==0) return 0;

    int smallans = mult(m, n-1);

    int ans = smallans + m;

    return ans;
}

int main(){
    cout<<mult(5, 4);
    return 0;
}