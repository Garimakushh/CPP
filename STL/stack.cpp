#include<iostream>
#include<stack>
using namespace std;
int main(){
    //define stack
    stack<string> s;
    //add elements
    s.push("Garima");
    s.push("Kushwaha");
    s.push("CSE");
    //top element
    cout<<"Top element: "<<s.top()<<endl;
    //find size of stack
    int n = s.size();
    cout<<"size :"<<n<<endl;
    //remove elements
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    //check empty or not
    cout<<"Empty or not: "<<s.empty()<<endl;
}