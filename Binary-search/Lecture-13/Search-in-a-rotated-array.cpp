/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int search(vector<int>& nums, int target) {
int start = 0, end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if the target is at mid
        if (nums[mid] == target) {
            return mid;
        }

        // Determine which half is sorted
        if (nums[start] <= nums[mid]) {  // Left half is sorted
            // Check if the target is in the sorted left half
            if (nums[start] <= target && target < nums[mid]) {
                end = mid - 1;  // Search in the left half
            } else {
                start = mid + 1;  // Search in the right half
            }
        } else {  // Right half is sorted
            // Check if the target is in the sorted right half
            if (nums[mid] < target && target <= nums[end]) {
                start = mid + 1;  // Search in the right half
            } else {
                end = mid - 1;  // Search in the left half
            }
        }
    }

    return -1;  // Target not found
}
};
int main()
{
    
    return 0;
}