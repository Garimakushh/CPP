#include<iostream>
using namespace std;
int main(){

    int marks;
    cin>>marks;

    if(marks>33){
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }

    marks>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;

    return 0;
}