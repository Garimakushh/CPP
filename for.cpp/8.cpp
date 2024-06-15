#include<iostream>
using namespace std;
int main (){
    //getting all odd except 1
    for(int i =0;i<=15;i+=2){
        cout<<i<<" ";
        if(i&1){

            continue;
        }
        i++;
    }

    return 0;
}
