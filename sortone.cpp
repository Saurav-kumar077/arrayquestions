#include<iostream>
using namespace std;
void sortone(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        while (arr[s]==0 && s<e)
        {
            s++;
        }
        while(arr[e]==1 && s<e ){
            e--;
        }
        if(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }   
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[6]={0,1,1,0,0,1};
    cout<<"Printig the original array"<<endl;
    printarray(arr,6);
    cout<<"Printing the sorted array"<<endl;
    sortone(arr,6);
    printarray(arr,6);
}