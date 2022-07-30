#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements\n";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++){
        int j=i-1;
        int k=arr[i];
        while(arr[j]<k && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}