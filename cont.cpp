#include<iostream>
using namespace std;

int main(){
    int n=10;
    for(int i=0;i<=n-1;i++){
        if(i%2==0){
            int k=i;
            k+=5;
            k*=2;
            cout<<k<<endl;
            continue;
        }
        cout<<i<<endl;
    }
}