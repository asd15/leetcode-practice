//count num of zeros in n using recursion
#include<iostream>
using namespace std;

int countzero(int n){
    if(n == 0) return 0;

    int smallans = countzero(n/10);

    if(n%10 == 0){
        smallans = smallans + 1;
    }
    return smallans;
}

int main(){
    cout<<countzero(1020);
    return 0;
}