#include <iostream>
#include "MYSTACK.h"
using namespace std;

int globalId = 100;

class person
{
    string name;
    int id;
    float salary;

public:
    person()
    {
        name = "";
        id = -1;
        salary = 1.0;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        id = globalId;
        globalId++;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};

int main()
{
    Stack<person> st;
    person a("Abdul Hakim", 654.44);
    person b("Efti", 654.44);
    person c("MD", 654.44);
    st.push(a);
    st.push(b);
    st.push(c);

    cout<<st.size()<<endl;
     while(!st.empty()){
    person printObj;
    printObj = st.pop();
    printObj.print();
  }
}
