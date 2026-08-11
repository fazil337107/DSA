#include<iostream>
#include<vector>
using namespace std;
int bsearch(vector<int>& vec,int target){
    int i=0,j=vec.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(vec[mid]==target) return mid;
        else if(vec[mid<target]) i=mid+1;
        else j=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Size of array:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int target;
    cout<<"Target value: ";
    cin>>target;
    int result=bsearch(vec,target);
	cout<<result;
}