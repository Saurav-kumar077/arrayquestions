#include <iostream>
using namespace std;
int uniqueelement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
       ans= ans^arr[i];
    }
    return ans;
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] <<endl;

    }

}
int main(){
    int arr[7]={3,7,2,2,7,3,4};
    cout<<"Printing the original array"<<endl;
    printarray(arr,7);
    cout<<"Printing the unique element of the array"<<endl;
    int found=uniqueelement(arr,7);
    cout<<found<<endl;
    
}