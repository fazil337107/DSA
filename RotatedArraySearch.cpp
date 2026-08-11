#include<iostream>
#include<vector>
using namespace std;
int pivotElement(vector<int>& nums){
  int i=0,j=nums.size()-1;
  while(i<j){
    int mid=i+(j-i)/2;
    if(nums[mid]>nums[j]) i=mid+1;
    else j=mid;
  }
  return i;
}
int bsearch(vector<int>& nums,int target){
  int i=0,j=nums.size()-1,ans=-1;
  int pivot=pivotElement(nums);
  if(target<=nums[j] && target>=nums[pivot]){
    i=pivot;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]==target) ans=mid;
        if(nums[mid]>target) j=mid-1;
        else i=mid+1;
    }
  }
  else{
    j=pivot-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]==target) ans=mid;
        if(nums[mid]>target) j=mid-1;
        else i=mid+1;
    }
  }
  return ans;
}
int main(){
  vector<int> vec={4,5,6,1,2,3};
  int target=1;
  cout<<bsearch(vec,target);
}