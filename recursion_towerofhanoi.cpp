//tower of hanoi

#include<iostream>
using namespace std;

int towerofhanoi(int n){
    if(n==0) return 0;

    return towerofhanoi(n-1) + 1 + towerofhanoi(n-1);
}

void printSteps(int n, char s, char d, char h){
    if(n == 0) return;

    printSteps(n-1, s, h, d);
    cout<<"Moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    printSteps(n-1, h,  d, s);
}

int main(){
    int n;
    cin>>n;
    cout<<towerofhanoi(n)<<endl;
    printSteps(n, 'A', 'C', 'B');

    return 0;
}