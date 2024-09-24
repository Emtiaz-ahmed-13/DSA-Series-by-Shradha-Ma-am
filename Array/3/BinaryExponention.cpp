/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/

double myPow(double x, int n) {
    long binForm=n;
    if(binForm<0){
        binForm=-binForm;
        x=1/x;
    }
    double ans=1;
    while( binForm >0){
        if(binForm%2==1){
            ans*=x;
        }
        x*=x;
        binForm/=2;
    }
    return ans;
}

int main(){
    double x=2;
    int n=10;
    cout<<myPow(x,n)<<endl;
    return 0;
}
