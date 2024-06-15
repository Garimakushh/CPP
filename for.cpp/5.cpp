#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the value of n"<<endl;
    cin>>n;

    /*for(int i =2;i<n;i++){

        if(n%i == 0){
            cout<<" Not prime";
        }
        else
        cout<<" Prime ";
    }

    cout<<endl;

    */

   bool isPrime = 1;
   for(int i=2; i<n; i++){

    if(n%i == 0){
        isPrime =0;
        break;
    }

   }

   if(isPrime ==0){
    cout<<"Not a prime number"<<endl;
   }
   else
   {
    cout<<" is a prime number"<<endl;
   }
   
    return 0;
}