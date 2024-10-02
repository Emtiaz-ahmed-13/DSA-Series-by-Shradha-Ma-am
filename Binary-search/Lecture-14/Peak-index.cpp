/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int start = 0, end = A.size() - 1;
        
        while (start < end) {
            int mid = start + (end - start) / 2;
            
            // Check if mid is the peak
            if (A[mid] > A[mid + 1]) {
                // Peak is in the left part including mid
                end = mid;
            } else {
                // Peak is in the right part
                start = mid + 1;
            }
        }
        
        // Start will point to the peak index
        return start;
    }
};
int main()
{
    
    return 0;
}