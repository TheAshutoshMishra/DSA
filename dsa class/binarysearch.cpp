#include<iostream>
using namespace std;
  
    int binarySearch(int *arr, int n, int key){
        int st = 0 , end = n-1;
        while(st <= end){
            int mid = (st+end)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                st = mid+1;
               
            }
            else{
                 end = mid-1;
            }
        
    }
        return -1;
}
    int main(){
        int arr[] = {1,2,3,4,5,6,7,8,9};
        int n = sizeof(arr)/sizeof(int);
        cout<<binarySearch(arr,n,5)<<endl;
        return 0;
    }
