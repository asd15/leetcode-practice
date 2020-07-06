#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Leetcode{
    public:
    string longest_common_prefix(vector<string> strs){
        string ans="";
        if(strs.size() == 0) return ans;

        //method1

        string smallest = *min_element(strs.begin(), strs.end()); //finding smallest in all
        for(int i=0; i<smallest.size(); i++){
            for(int j=0; j<strs.size(); j++){
                if(smallest[i] != strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(smallest[i]);
        }
        return ans;

        //method2

        /* string smallest = strs[0]; //assuming first str is smallest
        for(int i=0; i<smallest.size(); i++){
            for(int j=1; i<strs.size(); j++){
                if(i>=strs[j].size() || smallest[i]!=strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(smallest[i]);
        }
        return ans; */
    }
};

int main(){
    vector<string> vect;
    vect.push_back("geeksforgeeks");
    vect.push_back("geeks");
    vect.push_back("geek");
    Leetcode l;
    cout << l.longest_common_prefix(vect);
}