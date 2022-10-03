#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int prefixEvalution(string chck)
{
    Stack<int> st;
    for (int i = chck.length() - 1; i >= 0; i--)
    {

        if (chck[i] >= '0' && chck[i] <= '9')
        { // chck[i] 0 ---> 9 operand
            st.push(chck[i] - '0');
        }
        else
        { // chck[i] ----> operator
            int a = st.pop();
            int b = st.pop();
            switch (chck[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
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

int precisionCalc(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '-' || c == '+')
    {
        return 1;
    }
    else
        return -1;
}

string infixToPrefix(string chk)
{
    reverse(chk.begin(), chk.end());
    Stack<char> st;
    string result;
    for (int i = 0; i < chk.length(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        { // chck[i] 0 ---> 9 operand
            result += chk[i];
        }
        else if (chk[i] == ')')
        {
            st.push(chk[i]);
        }
        else if (chk[i] == '(')
        {
            while (!st.empty() && st.Top() == ')')
            {
                result += st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else{
            while(st.empty()&& (st.Top())>=precisionCalc(chk[i])){
                result+=st.pop();
            }
            st.push(chk[i]);
        }
    }
    while(!st.empty()){
        result+=st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}

int main()
{   
    string infix = "(7+ (4+5))-(2+0)";

    string prefix ;
    // prefix = infixToPrefix(infix);
    cout<<prefix<<endl;
    cout << prefixEvalution("-+7*45+20") << endl;
}