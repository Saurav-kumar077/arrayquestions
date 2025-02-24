#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<endl;

    }
}
int main(){
    int arr[5]={1,2,2,3,4};
    cout<<"Printing the original array"<<endl;
    printarray(arr,5);
    cout<<"Printing the duplicate array:-"<<endl;
    int found=duplicate(arr,5);
    cout<<"The duplicate element in the array is "<< found <<endl;
    

    return 0;
}
