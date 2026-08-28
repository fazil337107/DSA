#include<iostream>
using namespace std;
void merge(int* arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid+1-s;
    int len2=e-mid;

    int* first=new int[len1];
    int* second=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++) first[i]=arr[k++];
    k=mid+1;
    for(int i=0;i<len2;i++) second[i]=arr[k++];

    int a=0,b=0;
    k=s;
    while(a<len1 && b<len2){
        if(first[a]<second[b]) arr[k++]=first[a++];
        else arr[k++]=second[b++];
    }
    while(a<len1) arr[k++]=first[a++];
    while(b<len2) arr[k++]=second[b++];
    
}
void mergesort(int *arr,int s,int e){
    if(s>=e) return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}