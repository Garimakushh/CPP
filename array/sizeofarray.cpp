#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    cout<<sizeof (array)<<endl;
    cout<<sizeof(array)/sizeof array[0]<<endl;//length of array

    //not initialising array -will print some garbage values
    int array1 [4];
    cout<<array1[0]<<endl;
    cout<<array1[1]<<endl;
    cout<<array1[2]<<endl;
    cout<<array1[3]<<endl;



    return 0;

}