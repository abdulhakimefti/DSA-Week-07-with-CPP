#include <bits/stdc++.h>
#include "MYQUEUE.h"
#include "MYSTACK.h"
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    Queue<int> q;
    Stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        q.push(l);
    }
    int j = 0;
    while (j < k)
    {
        st.push(q.pop());

    }
    while(!st.empty()){
        q.push(st.pop());
    }
    while(!q.empty()){
        cout<<q.pop()<<" ";
    }
    cout<<endl;
}