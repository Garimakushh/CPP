#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(6);
    //in set elements stored only at once
    cout<<"The set is: "<<endl;
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<"After erase: "<<endl;
    //delete first ele
    s.erase(s.begin());

    for(auto i:s){
        cout<<i<<endl;
    }
    //delete second ele
    cout<<"After deleting one more: "<<endl;
    set<int> ::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    //count element is there in set or not
    cout<<"-5 is present in set or not: "<<s.count(-5)<<endl;

    //find the ele in set
    s.find(5);
    set<int>:: iterator itr =s.find(5);
    cout<<"value present at it: "<<*itr<<endl;
    //make that it ele as reference and then print set(remaining)
    
    for(auto it = itr; it!=s.end();it++){
      cout<<*it<<" ";
    }

}