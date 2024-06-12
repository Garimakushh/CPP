#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //findig capacity
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    //size of vector
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 1st index: "<<v.at(1)<<endl;

    cout<<"first element: "<<v.front()<<endl;

    cout<<"last element: "<<v.back()<<endl;
    //pop
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl;
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    //clear
    cout<<"Before clear -> size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear -> size: "<<v.size()<<endl;
    
}