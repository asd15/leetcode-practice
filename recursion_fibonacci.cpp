//fibonacci number using recursion
#include<iostream>
using namespace std;

int fibo(int n){
    //base case, 0th fibo num
    if(n == 0) return 0;
    if(n == 1) return 1;

    int f1 = fibo(n-1);
    int f2 = fibo(n-2);

    int ans = f1 + f2;
    return ans;
}

int main(){
    cout<<fibo(5);
    return 0;
}