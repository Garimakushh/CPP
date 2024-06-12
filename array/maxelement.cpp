#include<iostream>
using namespace std;
int main(){
    int array[]={3,4,8,6,};
    int max=array[0];
    for(int i=1;i<4;i++){
        if(array[i]>max){
            max=array[i];
        }
         
    }
    cout<<max<<endl;
    


    return 0;
}