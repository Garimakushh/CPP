 #include<iostream>
 using namespace std;
 int main(){
    int array[] = {1,2,3,4};
    int size= sizeof(array)/sizeof(array[0]);
    //for loop

    for(int idx=0;idx<size;idx++){
        cout<<array[idx]<<endl;
        }
    // for each loop
    for(int element:array){
        cout<<element<<endl;
    }
    //for while loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }



    return 0;
 }
