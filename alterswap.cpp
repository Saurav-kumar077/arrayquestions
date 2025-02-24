#include<iostream>
using namespace std;
void alterswap(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        for(int i=0;i<n;i+=2){
            swap(arr[i+1],arr[i]);
            s++;
            e--;
        }
    }

}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[6]={2,4,6,7,9,3};
    cout<<"Array before swapping"<<endl;
    printarray(arr,6);
    cout<<"Array after altername swapping"<<endl;
    alterswap(arr,6);
    printarray(arr,6);

    return 0;
}