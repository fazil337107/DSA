#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>& nums){
  int i=0,j=nums.size()-1;
  while(i<j){
    int mid=i+(j-i)/2;
    if(nums[mid]>nums[j]) i=mid+1;
    else j=mid;
  }
  return i;
}
int main(){
  vector<int> vec={4,5,1,2,3};
  cout<<pivot(vec);
}