/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

// {1,2,2,1,1}
// MJ >n/2 times that's calll mejority element

// bruce force-->
// count all the value and check if count >n/2
// time complexcity is O(n^2)



int MajorityElement(vector<int> nums) {
    int n = nums.size();
    for (int val : nums) {
        int freq = 0;
        for (int element : nums) {
            if (element == val) freq++;
        }
        if (freq > n / 2) {
            return val;  
        }
    }
    
    
    return -1;  
}

int main() {
    vector<int> nums = {1, 1, 2, 1, 3, 1, 1};
    int ans = MajorityElement(nums);
    
    cout << "Majority Element: " << ans << endl;

    return 0;
}
