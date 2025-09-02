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
    cout<<"array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}