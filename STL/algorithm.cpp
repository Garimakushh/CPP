#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(8);
    //binary search
    cout<<"Find element: "<<binary_search(arr.begin(),arr.end(),5)<<endl;
    cout<<"Find element: "<<binary_search(arr.begin(),arr.end(),12)<<endl;
    //find iterator of this ele (lower bound & upper bound)
    
    cout<<"Lower bound: "<<lower_bound(arr.begin(),arr.end(),3)-arr.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(arr.begin(),arr.end(),3)-arr.begin()<<endl;
    //find min max
    int a=3;
    int b=5;
    cout<<"Max-> "<<max(a,b)<<endl;
    cout<<"Min-> "<<min(a,b)<<endl;
    //swaping
    swap(a,b);
    cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;
    //reverse string
    string s = "kushwaha";
    reverse(s.begin(),s.end());
    cout<<"After reverse: ";
    for(auto i:s){
        cout<<i<<" ";
    }
    //rotate
    cout<<endl<<"Before rotation: "<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
    rotate(arr.begin(),arr.begin()+2,arr.end());
    cout<<endl<<"After rotation: ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    //sort
    cout<<endl<<"After sorting: ";
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
}