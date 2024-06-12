#include<iostream>
using namespace std;
int main(){
    int num1=6;
    int num2=3;

    cout<<(num1==num2)<<endl; //false
    cout<<(num1>=num2)<<endl; //true
    cout<<(num1!=num2)<<endl; //true


    num1+=3;
    cout<<num1<<endl; //6+3 = 9
    num2-=2;
    cout<<num2<<endl; //3-2 = 1

    return 0;
}