/*remove N adjacent duplicates in string
i/p: 2, MISSISSIPPI  o/p: M
1: push one elem in stack when empty
2: if new elem != top of stack, push
3: else, count++
3.1: if count = N, then pop
4: at end, pop all and reverse
*/
#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

class Leetcode{
    public:
    class Pair{
        public:
        char first;
        int second;
        Pair(char f, int s){
            first = f;
            second = s;
        }
    };

    string remove_adjacent_duplicates(int n, string s){
        stack<Pair> st;
        for(int i=0; i<s.size(); i++){
            if(st.empty() || s[i] != st.top().first){
                Pair p(s[i], 1); //creating pair to push
                st.push(p);
            } else{
                st.top().second++;
                int count = st.top().second;
                if(count == n){
                    st.pop();
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            int count = st.top().second;
            while(count--){
                ans.push_back(st.top().first);
            }
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    string s = "MISSISSIPPI";
    int n = 2;
    Leetcode l;
    cout<<l.remove_adjacent_duplicates(n, s);
}