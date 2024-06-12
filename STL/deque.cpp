#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    //adding elements
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    //iterate
    for(int i:d){cout<<i<<" ";}

    //remove from front
    d.pop_front();
    cout<<" "<<endl;
    for(int i:d){cout<<i<<" ";}

    //remove from last
    d.pop_back();
     cout<<" "<<endl;
    for(int i:d){cout<<i<<" ";}
    //element at index
    d.push_front(1);
    d.push_back(3);
    cout<<"Element at: "<<d.at(1)<<endl;
    cout<<"Element at front: "<<d.front()<<endl;
    cout<<"Element at last: "<<d.back()<<endl;
    //check it empty or not
    cout<<"Empty deque: "<<d.empty()<<endl;

    //size
    cout<<"size: "<<d.size()<<endl;
    //erase all or delete some portion
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: ";
    for(int i:d){cout<<i<<" ";}



}