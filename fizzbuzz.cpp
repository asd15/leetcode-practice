#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Leetcode{
    public:
    vector<string> fizzbuzz(int n){
        vector<string> ans;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                ans.push_back("fizzbuzz");
            } else if(i%3==0){
                ans.push_back("fizz");
            } else if(i%5 == 0){
                ans.push_back("buzz");
            } else{
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};

int main(){
    Leetcode l;
    vector<string> vect = l.fizzbuzz(15);
    for(int i=0; i<15; i++){
        cout << vect.at(i) << ' ';
    }
}