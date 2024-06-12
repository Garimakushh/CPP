#include<iostream>
#include<list>
using namespace std;
int main(){
    //define list
    list<int> l;
    //add elements
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    //iterate
    for(int i:l){cout<<i<<" ";}
    cout<<endl;
    //erase element
    cout<<"After erase: ";
    l.erase(l.begin());
    for(int i:l){cout<<i<<" ";}
    cout<<endl;
    //size of list
    cout<<"size(): "<<l.size()<<endl;
    //new list
    list<int> n(5,100);
    for(int i:n){cout<<i<<" ";}

}