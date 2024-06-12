#include<iostream>
using namespace std;
int main (){
    int array[]={1,5,9,3,6};
    int size=sizeof (array)/sizeof (array[1]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];

    }
    cout<<sum<<endl;


    return 0;

}