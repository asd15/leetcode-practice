//modified binary search: search in a rotated sorted array
//return index of x
//assumption: no duplicates

#include<iostream>
#include<vector>
using namespace std;

int searchRoated(vector<int> &nums, int x){
    int start = 0;
    int end = nums.size() - 1;
    

    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] == x){
            return mid;
        }
        else if(nums[mid] >= nums[start]){
            if(x >= nums[start] && x <= nums[mid]){
                end = mid - 1;
            } 
            else{
                start = mid +1;
            }
        }
        else if(nums[mid] <= nums[end]){
            if(x <= nums[end] && x >= nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    
    cout<<searchRoated(nums, 0);
}