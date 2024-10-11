/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13      */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    // O(n) time complexity to count occurrences of 0, 1, and 2
    for (int num : nums) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }

    // Refill the vector based on the counts
    int idx = 0;
    for (int i = 0; i < count0; i++) nums[idx++] = 0;
    for (int i = 0; i < count1; i++) nums[idx++] = 1;
    for (int i = 0; i < count2; i++) nums[idx++] = 2;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    // Output the sorted array
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
