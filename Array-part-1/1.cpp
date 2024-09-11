/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int marks[5]={99,88,77,66,55};
    // marks[0]=101;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // cout << marks[-1] <<endl;

    //loops :0 to size-1

    // int size=5;
    //  int sz= sizeof(marks)/sizeof(int);
    //  cout<<sz<<endl;
    
    // for(int i=0;i<size;i++){
    //     cout<<marks[i] <<endl;
    // }
//===================smallest=========================
    int nums[]={100,335,55,33,5};
    int size=5;
    int smallest=INT_MAX;
    int largest=INT_MIN;

    for (int i = 0; i < size; i++) {
        // // Check and update smallest
        // if (nums[i] < smallest) {
        //     smallest = nums[i];
        // }
        // // Check and update largest
        // if (nums[i] > largest) {

        // }

        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;




    

    return 0;
}