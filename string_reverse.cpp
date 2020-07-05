#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Rev{
    public:
    void reverse(vector<char> s){
        //method1

        /* stack<char> st;
        for(int i=0; i<s.size(); i++){
           st.push(s[i]);
        }
        
        for(int i=0; i<s.size(); i++){
            s[i] = st.top();
            st.pop();
        } */

        //method2
        int start = 0;
        int end = s.size() - 1;

        while(start <= end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        for(int i=0; i<s.size(); i++){
            cout<<s[i];
        }
    }
};
int main(){
    vector<char> vect;
    vect.push_back('h');
    vect.push_back('e');
    vect.push_back('l');
    vect.push_back('l');
    vect.push_back('o');
    Rev r;
    r.reverse(vect);
}