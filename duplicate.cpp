#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    cin>>arr[n];

    for(int i=0;i<n; i++){
        cin>>arr[i];


    }
    cout<<"dupliacte elements are: ";
    bool found=false;
   
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                found=true;
                break;
            }
        }
    }
    if(found==false){
        cout<<"no duplicate elements";
    }
    return 0;
}