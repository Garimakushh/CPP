#include<iostream>
using namespace std;
int main(){
    int array[]={3,15,16,17,1,4,90};
    //enter the key or num u want to search
    // int num=18;
    int num=16;
    //value of index will be given by ans 
    int ans=-1;
    for(int i=0;i<7;i++){
        if(array[i]==num){
            ans=i;
            //to not travel through whole array after getting the ans
            break;
        }
    }
    cout<<ans<<endl;


    return 0;
}