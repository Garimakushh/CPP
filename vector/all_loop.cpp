#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //for loop
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
        
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
   
    //for each loop
    v.insert(v.begin()+2,9);
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
   
    //while loop
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    cout<<endl;

    


    return 0;
}