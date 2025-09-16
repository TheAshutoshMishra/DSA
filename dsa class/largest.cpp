// #include <iostream>
// using namespace std;

//     int main() {
//         int n;
//         cout<<"Enter the size of array"<<endl;
//         cin>>n;
//         int arr[n];
//          for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//         int max = arr[0];
//         for(int i=0;i<n;i++){
//             if(arr[i]>max){
//                 max = arr[i];

//             }
//             // cout<<"assigning value to array"<<arr[i]<<"\n";
//         }
//         cout<<"laregest value is"<< max<<endl;
//         return 0;
//     }
#include <iostream>
using namespace std;

    int main() {
        int n;
        cout<<"Enter the size of array"<<endl;
        cin>>n;
        int arr[n];
         for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        int max = arr[0];
        int min = arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];

            }
            // cout<<"assigning value to array"<<arr[i]<<"\n";
            if(arr[i]<max){
                min = arr[i];

            }
        }
        cout<<"laregest value is"<< max<<endl;
        cout<<"minimum value is"<< min<<endl;
        return 0;
    }