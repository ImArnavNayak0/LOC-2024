#include <iostream>
using namespace std;

int main() {
    int s1, s2;
    cout << "Enter the size of the first array: ";
    cin >> s1;
    cout << "Enter the size of the second array: ";
    cin >> s2;
    int arr1[s1];
    int arr2[s2];
    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < s1; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << "Enter elements for the second array:" << endl;
    for (int i = 0; i < s2; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr2[i];
    }
    int mergedSize = s1 + s2;
    int mergedArr[mergedSize];
    for (int i = 0; i < s1; ++i) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < s2; ++i) {
        mergedArr[s1 + i] = arr2[i];
    }
    cout << "Merged Array in Reverse Order: ";
    for (int i = mergedSize - 1; i >= 0; --i) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
