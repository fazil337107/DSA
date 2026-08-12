#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
  for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    for(;j>=0;j--){
      if(arr[j]>temp) arr[j+1]=arr[j];
      else break;
    }
    arr[j+1]=temp;
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return;
}
int main(){
  int arr[]={6,5,2,1,4,3};
  InsertionSort(arr,6);
}