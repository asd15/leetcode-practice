//to check if string is palindrome or not, if not u can delete max one element from string and then
//check if palindrome or not.
#include<iostream>
using namespace std;

class Leetcode{
    public:
    bool palindrome(string s){
        int start = 0;
        int end = s.size() - 1;

        while(start <= end){
            if(s[start] != s[end]){
                if(check(s, start+1, end) || check(s, start, end-1)){
                    return true;
                }
            }
            start++;
            end--;
        }
        return true;
    }
};

int main(){

}