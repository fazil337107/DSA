#include<iostream>
#include<vector>
using namespace std;
int peakelement(vector<int>& nums){
    int i=0,j=nums.size()-1;
    while(i<j){
        int mid=(i+j)/2;
        if(nums[mid]<nums[mid+1]){
            i=mid+1;
        }
        else j=mid;
    }
    return i;
}
int main(){
    vector<int> vec={1,2,3,4,2,1};
    cout<<peakelement(vec);
}