#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size == 0 || size == 1) return true;
    if(arr[1]<arr[0]) return false;
    else{
      bool rempart = isSorted(arr+1,size-1);
      return rempart;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    bool ans = isSorted(arr,size);

    if(ans){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    return 0;

}