/*remove 2 adjacent duplicates in string
i/p: MISSISSIPPI  o/p: M
1: push one elem in stack
2: if new elem != top of stack, push
3: else, pop and move forward
4: at end, pop all and reverse
*/
#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
class Leetcode{
    public:
    string remove_adjacent_duplicate(string s){
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty() || s[i] != st.top()){
                st.push(s[i]);
            } else{
                st.pop();
            }
        }
        string ans = "";
        while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans; 
    }
};

int main(){
    string s = "MISSISSIPPI";
    Leetcode l;
    cout << l.remove_adjacent_duplicate(s);
}