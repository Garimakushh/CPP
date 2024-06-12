#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int k){
    //base case
    if(s>e) return false;
    int mid = s +(e-s)/2;
    if(arr[mid]==k) return true;
    //recursive part
    if(arr[mid]<k){
       return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }

}
int main(){
    int arr[5] ={1,3,5,7,9};
    int k = 16;
    int size= 5;
    cout<<"Present or not: "<<binarySearch(arr,0,4,k);

    return 0;
}
