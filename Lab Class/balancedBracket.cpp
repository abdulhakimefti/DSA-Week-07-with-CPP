#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

bool balancedBracket(string bracket){
    bool isBalanced=true;
    Stack<char> st;
    for(int i=0;i<bracket.length();i++){
        if(bracket[i]=='('||bracket[i]=='{'||bracket[i]=='['){
            st.push(bracket[i]);
        }
        else if(bracket[i]==')'){
            if(st.Top()=='('){
                st.pop();
            }
            else{
                isBalanced=false;
                break;
            }
        }
         else if(bracket[i]=='}'){
            if(st.Top()=='{'){
                st.pop();
            }
            else{
                isBalanced=false;
                break;
            }
        }
         else if(bracket[i]==']'){
            if(st.Top()=='['){
                st.pop();
            }
            else{
                isBalanced=false;
                break;
            }
        }
    }
    return isBalanced;
}

int main(){

    string brac;
    cin>>brac;
    bool isBalanced = balancedBracket(brac);
    if(isBalanced==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}