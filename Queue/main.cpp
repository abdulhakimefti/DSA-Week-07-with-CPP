#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;


int main(){

    Queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int chk;
        cin>>chk;
        q.push(chk);
    }
    while(!q.empty()){
        cout<<q.pop()<<" "<<endl;;
    }
    // if(q.empty()){
    //     cout<<q.Front()<<" "<<q.back()<<endl;
    // }
}