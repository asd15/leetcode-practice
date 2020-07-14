#include<iostream>
using namespace std;

class Leetcode{
    public:
    bool palindrome(string s){
        int n = s.size();
        int start = 0;
        int end = n-1;

        while (start <= end)
        {
            while(start < end && !isalnum(s[start])) start++;
            while(start < end && !isalnum(s[end])) end--;
            if (toupper(s[start]) != toupper(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main(){
    string s = "A man, a plan, a canal: Panama";
    Leetcode l;
    cout << l.palindrome(s);
}