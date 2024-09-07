/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

double sum(double a, double b){
    double s= a+b;
    return s;
}

//=================mins off two numbers==================
int minOfTwo(int a, int b){ //parameters
    if(a<b){
        return a;
    }
    else{
        return b;
    }
    }


//===================sums of n=====================

int  sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
//====================factorialN=====================

int factorialN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
//=================== sum of a and b===================

int sum(int a,int b){
    a=a+10;
    b=b+10;;
    return a+b;
}

//=================== sumOfDigiits ===================

int sumOfDigiits(int num){
    int digSum=0;
    while(num>0){
        int lastDig=num%10;
        num/=10;
        digSum+=lastDig;
    }
    return digSum;
}

//================== calculate nCr ===================

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}


int main()
{
    cout<<"min= "<<minOfTwo(5,3)<<endl; //arguments

    cout<<"sum of n= "<<sumN(5)<<endl;

    cout<<"factorial of n= "<<factorialN(5)<<endl;
    // int a=5,b=4;
    // cout<<"sum= "<<sum(a,b)<<endl;
    // cout << a <<endl;

    cout<<"sum of digits= "<<sumOfDigiits(2356)<<endl;
    int n=6,r=3;
    cout <<"nCr= "<<nCr(n,r)<<endl;
    



    return 0;
}