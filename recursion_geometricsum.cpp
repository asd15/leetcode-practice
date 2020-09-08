//Geometric sum using recursion
//ip: n=3  op:1.875
// 1/2^0 + 1/2^1 + 1/2^2 + 1/2^3 = 1.875

#include<iostream>
#include<math.h>
using namespace std;

double geosum(int n){
    if(n == 0) return 1;

    double smallans = geosum(n-1);

    double ans = smallans + 1.0/pow(2,n); //using 1.0 to get the result in double not int
    
    return ans;
}

int main(){
    cout<<geosum(3);
    return 0;
}