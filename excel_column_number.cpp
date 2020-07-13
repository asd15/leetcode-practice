#include<iostream>
using namespace std;

class Leetcode{
    public:
    int excel_col_num(string col_str){
        int ans = 0;
        long long pow = 1;
        int n = col_str.size();

        for(int i=n-1; i>=0; i--){  //iterate from back
            ans = ans + (col_str[i]-64) * pow; //-64 coz A ascii value is 65, we want it to be 1
            pow = pow*26;
        }
        return ans;
    }

};
int main(){
    string s = "AAA";
    Leetcode l;
    cout << l.excel_col_num(s);
}