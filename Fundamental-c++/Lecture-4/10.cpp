/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++){
        int num=1; // Move num initialization here
        for(int j=i+1;j>0;j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}