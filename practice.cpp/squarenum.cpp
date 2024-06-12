#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int result=1;
    for(int a=1;a<=b;a++){
        
        result*=b;
        cout<<result<<endl;
    }

    return 0;
}