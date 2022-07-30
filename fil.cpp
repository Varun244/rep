#include<iostream>
#include <bits/stdc++.h>

using namespace std;
long long int minValue(int a[], int b[], int n){
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        int sum=0;
    for(int i=0;i<=n-1;i++){
        sum+=(a[i]*b[i]);
    }
    return sum;
    }
// int check(vector<long long> A, vector<long long> B, int N) {
//         int sizea=sizeof(A)/sizeof(A[0]);
//         int sizeb=sizeof(B)/sizeof(B[0]);
//         sort(A, A + sizea);
//         sort(B, B + sizeb);
//         int flag=0;
//         for(int i=0;i<=N-1;i++){
//             if(A[i]!=B[i]){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0)
//         return 1;
//         else
//         return 0;
//     }
int main(){
    int n=3;
    vector <vector<int>>M;
    for(int i=0;i<=n-1;i++){
        vector<int> temp;
        for(int j=0;j<=n-1;j++){
            int ele;
            cin>>ele;
            temp.push_back(ele);
        }
        M.push_back(temp);
    }
    vector<int> N;
    N.push_back(M[1]);
    // string df=to_string(M[0]);
    cout<<M[0][2];
    // for(int i=0;i<=n-1;i++){
    //     cout<<arr[i]<<endl;
    // }
    return 0;
}