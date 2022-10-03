#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    Stack<int> st;
    Stack<int> mn;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
        if (min >= a)
        {
            min = a;
            mn.push(a);
        }
    }
    while (!(st.empty()))
    {
        int k = st.pop();
        cout << mn.Top() << " ";
        if (k == mn.Top())
        {
            mn.pop();
        }
    }
    cout << endl;
}