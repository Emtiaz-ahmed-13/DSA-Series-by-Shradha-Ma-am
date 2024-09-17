/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;  // If target is not found, return -1
}

int main() {
    int arr[] = {4, 5, 2, 6, 7};  
    int sz = 5;  
    int target = 6;  

    int result = linearSearch(arr, sz, target);  

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
