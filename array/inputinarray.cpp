#include<iostream>
using namespace std;
int main(){
    char vowels[5];

    for(int idx=0;idx<5;idx++){
        cin>>vowels[idx];
        //cout<<vowels[idx]<<" ";
    }

    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }

    return 0;

}