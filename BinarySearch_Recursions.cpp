//Binary Search;
/*#include<iostream>
using namespace std;
int binarySearch(int arr[],int s,int e,int target){
  if(s>e) return -1;
  int mid=(s+e)/2;
  if(arr[mid]==target) return mid;
  else if (arr[mid]<target) return binarySearch(arr,mid+1,e,target);
  else return binarySearch(arr,s,mid-1,target);
}
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  cout<<binarySearch(arr,0,8,7);
}*/

//First Occurence
// #include<iostream>
// using namespace std;
// int firstOccurence(int arr[],int s,int e,int target){
//     if(s>e) return -1;
//     int mid=(s+e)/2;
//     int ans;
//     if(arr[mid]==target){
//         int left=firstOccurence(arr,s,mid-1,target);
//         if(left!=-1) return left;
//         else return mid;
//     }
//     else if(arr[mid]>target){
//         return firstOccurence(arr,s,mid-1,target);
//     }
//     else return firstOccurence(arr,mid+1,e,target);
// }
// int main(){
//     int arr[]={1,1,1,2,2,3,4,5,6,7,8,9};
//     cout<<firstOccurence(arr,0,10,2);
// }
//Last Occurence
#include<iostream>
using namespace std;
int lastOccurence(int arr[],int s,int e,int target){
    if(s>e) return -1;
    int mid=(s+e)/2;
    int ans;
    if(arr[mid]==target){
        int right=lastOccurence(arr,mid+1,e,target);
        if(right!=-1) return right;
        else return mid;
    }
    else if(arr[mid]>target){
        return lastOccurence(arr,s,mid-1,target);
    }
    else return lastOccurence(arr,mid+1,e,target);
}
int main(){
    int arr[]={1,1,1,2,2,3,4,5,6,7,8,9};
    cout<<lastOccurence(arr,0,10,2);
}