/* PMI(Principal of Mathematical Induction)
Assume, F(n) is +ve for all n
1. Prove F(0) or F(1) is true -> base case
2. Induction Hypothesis, Assume F(k) is true
3. Induction Step, using step 2 prove F(k+1) is true */

//in every recursion problem we have to assume we are 
//appying PMI

#include<iostream>
using namespace std;

int fact(int n){
    //step 1: prove F(0) is true
    if(n == 0) return 1;

    //step 2: Assumtion recursisve case
    int f = fact(n - 1);

    //step 3: calculation
    int ans = n * f;

    return ans;
}

int main(){
    cout<< fact(5);
    return 0;
}