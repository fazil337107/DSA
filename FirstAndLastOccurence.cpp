#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int>& nums, int target){
    int ans=-1;
    int i=0,j=nums.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]==target){
            ans=mid;
            j=mid-1;
        }
        else if(nums[mid]>target) j=mid-1;
        else i=mid+1;
    }
    return ans;
}
int lastoccurence(vector<int>& nums, int target){
    int ans=-1;
    int i=0,j=nums.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]==target){
            ans=mid;
            i=mid+1;
        }
        else if(nums[mid]>target) j=mid-1;
        else i=mid+1;
    }
    return ans;
}
int main(){
    vector<int> vec={1,1,2,2,2,2,4,5,6,9};
    int i=0,j=vec.size()-1;
    cout<<firstoccurence(vec,2)<<" "<<lastoccurence(vec,2);
}