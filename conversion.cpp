#include<bits/stdc++.h>
using namespace std;
int DectoBin(int n){
    vector<int> ans;
    while(n!=0){
        ans.push_back(n%2);
        n=n/2;
    }
    int res=0;
    for(int i=ans.size()-1;i>=0;i--){
        res=res*10+ans[i];
    }
    return res;
}
int BintoDec(int num){
    int i=0;
    int len=(to_string(num)).length();
    int res=0;
    while(len!=0){
        int bit=num%10;
        res=res+bit*pow(2,i);
        i++;
        num/=10;
        len--;
    }
    return res;
}
int add(int a,int b){
    vector<int> vec;
    int res=0;
    int lena=(to_string(a)).length();
    int lenb=(to_string(b)).length();
    int carry=0;
    while(a>0 || b>0){
        int bit1,bit2;
        if(a!=0)
        bit1=a%10;
        else bit1=0;
        if(b!=0)
        bit2=b%10;
        else bit2=0;
        if(carry+bit1+bit2>=2){
            vec.push_back((carry+bit1+bit2)/3);
            carry=1;
        }
        else{
            vec.push_back((carry+bit1+bit2));
            carry=0;
        }
        a=a/10;
        b=b/10;
    }
    vec.push_back(carry);
    for(int i=vec.size()-1;i>=0;i--){
        res=res*10+vec[i];
    }
    return res;
}
int main(){
    int num=101;
    cout<<add(101,1101);
}