/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13      */
/**************************************************/
#include <iostream>
using namespace std;

void calculateSumAndProduct(int arr[], int n, int &sum, int &product) {
    sum = 0;
    product = 1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum, product;
    calculateSumAndProduct(arr, n, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
