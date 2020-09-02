//print numbers using recursion
#include<iostream>
using namespace std;

void print(int n){
    if(n == 0) return;

    print(n - 1);

    cout<<n<<endl;
}

void printrev(int n){
    if(n == 0) return;

    cout<<n<<endl;

    printrev(n-1);
}

int main(){
    print(5);
    printrev(5);
    return 0;
}