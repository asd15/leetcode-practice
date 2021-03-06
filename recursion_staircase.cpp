//staircase problem: number of ways to reach a number from 0
//recursion problem
//i/p: 4, o/p: 7

#include<iostream>
using namespace std;

int staircase(int n){
    if(n==0 || n==1) return 1;

    if(n<0) return 0;

    return staircase(n-1) + staircase(n-2) + staircase(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<staircase(n)<<endl;
    return 0;
}