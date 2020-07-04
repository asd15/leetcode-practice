#include<iostream>
using namespace std;
class Length{
    public:
    int lenghtoflastword(string s){
        int count = 0;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i] != ' '){
                count++;
                i++;
            } else
            {
                while (i<n && s[i] == ' ')
                {
                    i++;
                }
                if(i==n)
                {
                    return count;
                } else 
                {
                    count = 0;
                }
            }
        }
        return count;
    }
};  
int main(){
   Length l;
   cout << l.lenghtoflastword("hello world");
}