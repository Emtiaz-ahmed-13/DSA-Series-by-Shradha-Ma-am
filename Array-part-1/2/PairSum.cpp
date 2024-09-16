/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;


//time complexcity is O(n^2) bz there are two nested loops...
// vector<int>pairSum(vector<int>nums,int target){
//     vector<int>ans;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

vector<int>pairSum(vector<int>nums,int target){
    vector<int>ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum > target) j--;
        else if(pairsum < target) i++;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    int target=5;
    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}