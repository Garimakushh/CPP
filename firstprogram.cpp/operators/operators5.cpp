#include<iostream>
using namespace std;

int main(){

    int a=4;
    cout<<sizeof(a)<<endl; //4

    char name='a';
    cout<<sizeof(name)<<endl; //1

    bool flag;
    a==name? flag = true : flag=false;
    cout<<flag<<endl; //0

    cout<<(&a)<<endl; 


    return 0;
}