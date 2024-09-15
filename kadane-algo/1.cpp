/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;
// ===============maximum subarray sum
//time complexity=O(n^2) bz there are two nested loops...
// int main()
// {
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     int max_sum=INT_MIN;
//     for(int start=0;start<n;start++){
//         int currentSum=0;
//         for(int end=start;end<n;end++){
//             currentSum+=arr[end];
//             max_sum=max(max_sum,currentSum);
//         }

//     }
//     cout<<"MAX sub array Sum= " <<max_sum <<endl;

// }

//intuition ....

// +ve + -ve = +ve 

// subarray te negative value add korar sey return zero kora better....

// currentSum , maxsum 
// kadanes algo says that we will run a single loops  and add them to the currentsum variable...we will break the loops when the currentSUm is less than zero. then reset the currentsum to zero.

// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int currentSum = 0, maxSum = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         currentSum += arr[i]; 
//         maxSum = max(maxSum, currentSum);

//         if (currentSum < 0) {
//             currentSum = 0;
//         }
//     }

//     cout << "MAX subarray Sum = " << maxSum << endl; 
// }
