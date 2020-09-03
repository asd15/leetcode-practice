//count num of digits using recursion
//ip: 1959 op: 4
#include<iostream>
using namespace std;

int countdigits(int n){
    if(n == 0) return 0;

    int each_digit = countdigits(n/10);

    int ans = each_digit + 1;
    return ans;
}

int main(){
    cout<<countdigits(1993937);
    return 0;
}