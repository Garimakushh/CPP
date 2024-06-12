#include<iostream>
using namespace std;
int main(){
    int array[]={3,6,18,19,5,7,8};
    int max=array[0];
    for(int i=1;i<7;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    cout<<max<<endl;

    return 0;

}