/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13      */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int MaxAllowedPages) {//O(n)
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > MaxAllowedPages) return false;

        if (pages + arr[i] <= MaxAllowedPages) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];

            
        }
    }
    return students>m? false : true;

}

int allocateBooks(vector<int>& arr, int n, int m) {//O(logN+n)
    if (m > n) return -1;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int st = maxPages; // Start from the maximum element, not 0
    int end = sum;     // End is the sum of all pages

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1; // Try for a smaller max limit
        } else {
            st = mid + 1; // Increase the max allowed pages
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4}; // Pages in books
    int n = 4, m = 2;               // n = number of books, m = number of students

    cout << allocateBooks(arr, n, m) << endl; // Output the result
    return 0;
}
