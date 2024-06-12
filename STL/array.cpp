#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> nums = {1,2,3,4,5};
    int size = nums.size();
    cout<<"Elements are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at second index: "<<nums.at(2)<<endl;
    cout<<"Empty or not: "<<nums.empty()<<endl;
    cout<<"First element: "<<nums.front()<<endl;
    cout<<"Last element: "<<nums.back()<<endl;
}