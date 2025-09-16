// // // #include <iostream>
// // // using namespace std;
// // // #include <vector>
// // // int main() {
// // //     // string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

// // // // // Loop through strings
// // // // for (int i = 0; i < 5; i++) {
// // // // //   cout << cars[i] << "\n";
// // // // cout << i << " = " << cars[i] << "\n";
// // // // }
// // // // int myNumbers[5] = {10, 20, 30, 40, 50};

// // // // // Loop through integers
// // // // for (int num : myNumbers) {
// // // //   cout << num << "\n";
// // // // }

// // // vector<string> cars = {"Volvo", "BMW", "Ford"};

// // // // Adding another element to the vector
// // // cars.push_back("Tesla");
// // // return 0;
// // // }
// // #include <iostream>
// // #include <vector> // Including the vector library
// // using namespace std;

// // int main() {
// //   // A vector with 3 elements
// //   vector<string> cars = {"Volvo", "BMW", "Ford"};
  
// //   // Adding another element to the vector
// //   cars.push_back("Tesla");
  
// //   for (string car : cars) {
// //     cout << car << "\n";
// //   }
// //   return 0;
// // }
// #include <iostream>
// // #include <vector> // Including the vector library
// using namespace std;

// int main() {
// //     int myNumbers[5] = {10, 20, 30, 40, 50};
// // cout << sizeof(myNumbers);
// int myNumbers[5] = {10, 20, 30, 40, 50};
// int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
// cout << getArrayLength;
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
//   int myNumbers[5] = {10, 20, 30, 40, 50};
//   int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
//   cout << getArrayLength;
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
  cout << myNumbers[i] << "\n";
}
  return 0;
}
