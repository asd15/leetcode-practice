//modified binary search tree
//finding first and last occurance of
//element x in a sorted array using binary search

#include<iostream>
#include<vector>
using namespace std;

int findFirst(vector<int> &nums, int x){
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;   //same as (start+end)/2, to avoid integer overflow
        if(nums[mid] == x){
            ans = mid;
            end = mid - 1;
        }
        else if(nums[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int findLast(vector<int> &nums, int x){
    int start = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;   //same as (start+end)/2, to avoid integer overflow
        if(nums[mid] == x){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid] < x){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int x){
    vector<int> v(2, -1);  //vector of size 2 with -1 initialized
    int first = findFirst(nums, x);
    if(first == -1){
        return v;
    }
    int last = findLast(nums, x);

    v[0] = first;
    v[1] = last;

    return v;
}


int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    vector<int> ans = searchRange(v, 5);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}