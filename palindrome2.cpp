//to check if string is palindrome or not, if not, u can delete max one element from string and then
//check if palindrome or not.
#include<iostream>
using namespace std;

class Leetcode{
    public:
    //this func will take string after deleting one elem from start 
    //or string after deleting one elem from end
    //so it will not be entire string, it will be wen 
    //one elem from strt is not equal to one elem from end
    bool check(string s, int start, int end){
        while (start <= end)
        {
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    bool palindrome(string s){
        int start = 0;
        int end = s.size() - 1;

        while(start <= end){
            if(s[start] != s[end]){

                //case 1:
                //delete start check for s[start+1 ... e+1]
                //or
                //case 2:
                //delete end check for s[start ... end-1]
                if(check(s, start+1, end) || check(s, start, end-1)){
                    //return true when either case returns string as palindrome
                    return true;
                } else{
                    //return false when after deleting one char we
                    //are not getting pallindrom.
                    return false;
                }
            }
            start++;
            end--;
        }
        return true;
    }
};

int main(){
    string s = "abca";
    Leetcode l;
    cout << l.palindrome(s);
}