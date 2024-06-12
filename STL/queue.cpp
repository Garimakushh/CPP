#include<iostream>
#include<queue>
using namespace std;
int main(){
    //define queue
    queue<string> q;
    //add elements
    q.push("Garima");
    q.push("Kushwaha");
    q.push("CSE");
    //size
    cout<<"Size of q: "<<q.size()<<endl;
    //print first element
    cout<<"First element: "<<q.front()<<endl;
    //pop elements
    q.pop();
    cout<<"First element after pop: "<<q.front()<<endl;
    cout<<"Size of q: "<<q.size()<<endl;
    //check empty or not
    cout<<"Empty or not: "<<q.empty()<<endl;
}