/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //nums
        for(int j=0;j<n-i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}