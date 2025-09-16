#include <iostream>
using namespace std;
    int linearsearch(int *arr,int n,int key){
        for(int i = 0;i<n; i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }

    int main() {
        int arr[] = {2,4,0,1,9};
        int n = sizeof(arr) / sizeof(int);
        cout<<linearsearch(arr,n,12);
        return 0;
    }

        
        