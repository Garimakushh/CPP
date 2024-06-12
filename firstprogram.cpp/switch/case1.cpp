#include<iostream>
using namespace std;
int main(){

    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"mon"<<endl;
        break;

        case 2:
        cout<<"tues"<<endl;
        break;

        case 3:
        cout<<"wed"<<endl;
        break;

        default:
        cout<<"default case"<<endl;
    }

    return 0;
}