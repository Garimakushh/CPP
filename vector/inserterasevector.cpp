#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){

        int element;
        cin>>element;
        v.push_back(element);

    }
    //to erase element
    v.erase(v.end()-3);
    //to insert element
    v.insert(v.begin()+2,5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    
      
    }
    
    cout<<endl;
   
    
    
    

    return 0;
}