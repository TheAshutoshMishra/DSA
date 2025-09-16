// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n / 2; i++)
//         swap(arr[i], arr[n - i - 1]);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }
#include <iostream>
using namespace std;
 void printArr(int *arr, int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
    printArr(arr,n);
    return 0;
}