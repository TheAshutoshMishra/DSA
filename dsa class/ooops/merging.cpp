
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6, 8,7};

    vector<int> result;
    for (int i = 0; i < v1.size(); ++i) {
        result.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); ++i) {
        result.push_back(v2[i]);
    }

    
    cout << "Merged vector: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
// postfix evlauation
// infix to postfix conversion