//finding min elem in rotated sorted array
//and finding how many times sorted array is rotated

#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int> &nums){
    int s = 0;
    int e = nums.size() - 1;
    
    while(s<=e){
        int mid = s + (e - s)/2;
        int next = (mid + 1) % (e+1); //mod because if mid is end, then mid(end) + 1 will garbage so % will take it to start
        int prev = (mid - 1 + e+1) % (e+1);

        if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]){
            cout<<"num of times sorted array rotated: "<< mid<<endl; //num of elems before min elem in rotated sorted array OR index of min elem
            return nums[mid];
        }
        else if(nums[mid] <= nums[e]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int numOfTimesRotated(int min){  
    int numoftimes = 0;

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
    
    cout<<"min elem: "<<findMin(nums);
}