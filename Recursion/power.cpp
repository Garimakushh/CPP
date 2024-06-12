#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n == 0) return 1;
    //recursive relation(2 to the power how much)
    int smprblm = power(n-1);
    int bigrprblm = 2 * smprblm;
    return bigrprblm;
    //return 2*power(n-1);

}
int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans;
    return 0;

}