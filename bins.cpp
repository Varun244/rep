#include<iostream>
using namespace std;
int binsearch(int arr[],int k,int n){
        int low=0,high=n-1,mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>k)
            high=mid-1;
            else if(arr[mid]<k)
            low=mid+1;
            else
            return mid;
        }
        return -1;
    }
int main(){
    int arr[]={3,4,7,9,10};
    cout<<binsearch(arr,8,5);
}