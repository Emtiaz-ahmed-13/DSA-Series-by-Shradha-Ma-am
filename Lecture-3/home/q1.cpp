#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cout << "Enter a number: ";
    // cin >> n; 

    // for (int i = 1; i <= n; i++) {
    //     if (i % 3 == 0) { 
    //         cout << i << " "; 
    //     }
    // }

    // cout << endl; 

    int n;
    cout << "Enter a number: ";
    cin >> n; 

    long long factorial = 1; 
    for (int i = 1; i <= n; i++) {
        factorial *= i; 
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;


    }
    return 0;
}
