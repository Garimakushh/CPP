#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sayDigit(int n,string arr[]){
    //base case
    if(n == 0){
        return ;
    }
    //processing
    int digit = n%10;
    n= n/10;

    //cout<<arr[digit]<<" ";    // to print in reverse order
    //recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";      //to print in given order


}
int main(){
    string arr[10] ={"Zero","one","two","three","four",
                     "five","six","seven","eight","nine"};
    int n;
    cin>> n;
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
    
}