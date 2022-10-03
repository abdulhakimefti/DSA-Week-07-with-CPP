#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int postfixEvalution(string ck)
{
    Stack<int> st;
    for (int i = 0; i <= ck.length(); i++)
    {
        if (ck[i] >= '0' && ck[i] <= '9')
        {
            st.push(ck[i] - '0');
        }
        else
        {
            int a = st.pop();
            int b = st.pop();
            switch (ck[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '^':
                st.push(pow(a, b));
                break;

            default:
                break;
            }
        }
    }
    return st.Top();
}

int main()
{
    cout<<postfixEvalution("435+*20+-")<<endl;
}
