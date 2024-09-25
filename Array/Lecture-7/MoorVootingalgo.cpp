/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;
int MajorityElement(vector<int> nums) {
    int freq=0,ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0) ans=nums[i];

        if(nums[i]==ans) freq++;

        else freq--;
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 1, 2, 1, 3, 1, 1};
    int ans = MajorityElement(nums);
    
    cout << "Majority Element: " << ans << endl;

    return 0;
}
