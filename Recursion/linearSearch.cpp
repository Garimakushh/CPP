#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"Size of array is: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
bool linearSearch(int arr[],int size,int key){
    print(arr,size);
    if(size==0) return false;
    if(arr[0] == key) return true;
    else{
        int remPart = linearSearch(arr+1,size-1,key);
        return remPart;
    }
}

int main(){
    int arr[5] = {2,3,4,5,9};
    int size = 5;
    bool ans = linearSearch(arr,size,4);
    cout<<"Element is present: "<<ans<<endl;
    

    return 0;
}