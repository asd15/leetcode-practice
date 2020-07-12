#include<iostream>
#include<stack>
#include<vector>
#include<cstdlib>
using namespace std;

class Leetcode{
    public:
    int postfix_eval(vector<string> tokens){
        stack<int> st;

        for(int i=0; i<tokens.size(); i++){
        if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            if(tokens[i] == "+"){
                st.push(b+a);
            }
            else if(tokens[i] == "-"){
                st.push(b-a);
            }
            else if(tokens[i] == "*"){
                st.push(b*a);
            }
            else if(tokens[i] == "/"){
                st.push(b/a);
            }
        } else{
            st.push(atoi(tokens[i].c_str()));
        }
    }
    return st.top();
    }
};

int main(){
    vector<string> vect;
    vect.push_back("10");
    vect.push_back("6");
    vect.push_back("9");
    vect.push_back("3");
    vect.push_back("+");
    vect.push_back("-11");
    vect.push_back("*");
    vect.push_back("/");
    vect.push_back("*");
    vect.push_back("17");
    vect.push_back("+");
    vect.push_back("5");
    vect.push_back("+");

    Leetcode l;
    cout << l.postfix_eval(vect);
}