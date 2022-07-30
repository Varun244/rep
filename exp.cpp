#include<bits/stdc++.h>
using namespace std;
string pref(string exp){
    vector<char> vec;
    stack<char> st;
    for(int i=exp.size()-1;i>=0;i--){
        if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/' || exp[i]=='^' || exp[i]==')'){
        st.push(exp[i]);
        }
        else if(exp[i]=='('){
            while(st.top()!=')'){
                vec.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else
        vec.push_back(exp[i]);
    }
    if(!st.empty()){
        while(!st.empty()){
        vec.push_back(st.top());
        st.pop();
        }
    }
    string res="";
    for(int i=vec.size()-1;i>=0;i--){
        res+=vec[i];
    }
    return res;
}

int calc(string str){
    stack<int> st;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(str[i]){
            case '+':
            st.push(op1+op2);
            break;
            case '-':
            st.push(op1-op2);
            break;
            case '*':
            st.push(op1*op2);
            break;
            case '^':
            st.push(pow(op1,op2));
            break;
            case '/':
            st.push(op1/op2);
            break;
            }
        }
    } 
    return st.top();
}
int main(){
    string exp;
    cout<<"Enter the expression:";
    cin>>exp;
    cout<<"Result is "<<calc(pref(exp));
    return 0;
}