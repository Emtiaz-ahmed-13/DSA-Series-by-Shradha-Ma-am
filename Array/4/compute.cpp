class Solution {
public:
    double myPow(double x, int n) {
      
        if (n == 0) return 1.0;       // Anything to the power of 0 is 1
        if (x == 0) return 0.0;       // 0 to any power is 0
        if (x == 1) return 1.0;       // 1 to any power is 1
        if (x == -1) {                // Special case for -1
            if (n % 2 == 0) return 1.0;
            else return -1.0;
        }
        
        
        long long binForm = n;  
        if (n < 0) {
            x = 1 / x;
            binForm = -binForm; 
        }
        
        double ans = 1.0;
        
        while (binForm > 0) {
            if (binForm % 2 == 1) { 
                ans *= x;
            }
            x *= x;  
            binForm /= 2;  
        }
        
        return ans;
    }
};
