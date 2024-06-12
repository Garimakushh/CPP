#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> mpp;
    mpp[1]="Garima";
    mpp[12]="Kushwaha";
    mpp[2]="CSE";
    //getting first int i.e key value
    for(auto i :mpp){
        cout<<"The keys: "<<i.first<<" ";
        cout<<"The value: "<<i.second<<endl;
    }
    cout<<"After insertion:"<<endl;
    mpp.insert({5,"kushh"});
    for(auto i:mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //count - for finding existence
    cout<<"The element is present or not: "<<mpp.count(5)<<endl;
    //erase ele
    cout<<"After erase: "<<endl;
    mpp.erase(5);
    for(auto i:mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //find - iterator of that element
    cout<<"Iterator of 2: "<<endl;
    auto it = mpp.find(2);
    for(auto i = it;i !=mpp.end();i++){
        cout<<(*i).first<<endl;
    }

}