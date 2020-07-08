//majority element is the one which appears more than n/2 times.

#include<iostream>
#include<vector>
using namespace std;

class Leetcode{

    //method1: sorting

    //method2: Moore Voting
    public:
    int majority_element(vector<int> elms){
        int cand = elms[0];
        int count = 1;
        int n = elms.size();

        for(int i=0; i<n; i++){
            if(elms[i] == cand){
                count++;
            } else{
                count--;

                if(count==0){
                    cand = elms[i];
                    count = 1;
                }
            }
        }

        //to check if majority elem does not exist.
        int count2 = 0;
        for(int i=0; i<n; i++){
            if(elms[i] == cand){
                count2++;
            }
        }
        if(count2 > n/2){
            return cand;
        }else
        {
            return -1;
        }
    }
};

int main(){
    vector<int> vect;
    vect.push_back(3);
    vect.push_back(2);
    vect.push_back(3);
    Leetcode l;
    cout << l.majority_element(vect);
}