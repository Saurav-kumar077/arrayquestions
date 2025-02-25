#include <iostream>
using namespace std;
void tripletsum(int arr[],int n){
    bool found=false;
    int s=10;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<< "Pair" " "<< arr[i] << arr[j] << arr[k] <<endl;
                    found=true;

                }
            }
            if(!found){
                cout<<"No triplet sum exist"<<endl;
            }
        
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i] <<endl;
    }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    cout<<"Printing the orignal array "<<endl;
    printarray(arr,8);
    cout <<"Printing the triplet sum "  <<endl;
    tripletsum(arr,8);  
}
