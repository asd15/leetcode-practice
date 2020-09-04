//add all digits using recursion
#include<iostream>
using namespace std;

int sumofdigits(int n){
    if(n == 0) return 0;

    int smallans = sumofdigits(n/10);

    int lastdigit= n%10;

    int ans = smallans + lastdigit;
    return ans;
}

int main(){
    cout<<sumofdigits(12345);
    return 0;
}