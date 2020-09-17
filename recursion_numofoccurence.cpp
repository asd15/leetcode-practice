//find num of occurence of a element in an array using recursion

#include<iostream>
using namespace std;

//method 1
void numofoccurence(int a[], int n, int x, int i, int &cnt){ //cnt is taken as reference(&) coz we will print cnt inside main
    if(i == n) return;

    if(a[i] == x){
        cnt++;
    }
    numofoccurence(a, n, x, i+1, cnt);
}

//method 2
int numofoccurence2(int a[], int n, int x, int i){
    if(i == n) return 0;

    if(a[i] == x){
        return 1 + numofoccurence2(a, n, x, i+1);
    } else{
        return 0 + numofoccurence2(a, n, x, i+1);
    }
}

int main(){
    int cnt=0;
    int a[] = {3,5,3,7,3,9,3};
    cout<<numofoccurence2(a, 7, 3, 0);
    //cout<<cnt;
    return 0;
}