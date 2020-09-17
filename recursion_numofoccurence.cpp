//find num of occurence of a element in an array using recursion

#include<iostream>
using namespace std;

void numofoccurence(int a[], int n, int x, int i, int &cnt){ //cnt is taken as reference(&) coz we will print cnt inside main
    if(i == n) return;

    if(a[i] == x){
        cnt++;
    }
    numofoccurence(a, n, x, i+1, cnt);
}

int main(){
    int cnt=0;
    int a[] = {3,5,3,7,3,9,3};
    numofoccurence(a, 7, 3, 0, cnt);
    cout<<cnt;
    return 0;
}