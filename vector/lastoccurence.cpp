#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<=5;i++){
        cin>>v[i];

    }
    cout<<"Enter X : ";
    int x;
    cin>>x;
     
    //checking from beginning 
    int occurence=-1;
    for(int i=0; i<v.size();i++){
        if(v[i]==x){
            occurence=i;

        }
    }

    //checking from end
    for(int i=v.size();i>=0;i--){
        if (v[i]==x){
            occurence= i;
        }

    }
    cout<<"occurence : "<<occurence<<endl;




    return 0;
}