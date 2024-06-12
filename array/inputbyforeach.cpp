#include<iostream>
using namespace std;
int main(){
    char vowels[5];
    for(char &element:vowels){
        cin>>element;
    }
    for(int idx=0;idx<5;idx++){
       
        cout<<vowels[idx]<<" ";
    }

    return 0;
}