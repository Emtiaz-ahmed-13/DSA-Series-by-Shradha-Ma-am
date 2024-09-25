//APPROACH-01
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();  // Size of the input array
        vector<int> answer(n, 1);  // Initialize answer array with 1s

        for(int i = 0; i < n; i++) {
            int product = 1;  // Initialize product to 1 for every index i

            for(int j = 0; j < n; j++) {
                // If the index j is not equal to i, multiply product with nums[j]
                if(i != j) {
                    product *= nums[j];
                }
            }
            // Store the product in the answer array for the index i
            answer[i] = product;
        }

        return answer;  // Return the resulting array
    }
};


//APPROACH-02
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        vector<int> prefix(n, 1);  // Prefix array
        vector<int> suffix(n, 1);  // Suffix array

        // Step 1: Calculate prefix product
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Step 2: Calculate suffix product
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Step 3: Calculate the result (answer) array by multiplying prefix and suffix
        for (int i = 0; i < n; i++) {
            answer[i] = prefix[i] * suffix[i];
        }

        return answer;
    }
};

//APPROACH-03

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);  // Initialize answer array with 1s

        // Step 1: Calculate prefix product and store it directly in answer array
    
        for (int i = 1; i < n; i++) {
            answer[i] =ans[i-1]*nums[i-1];

        }

        // Step 2: Calculate suffix product and multiply it with answer array
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            suffix *= nums[i+1];   
            answer*= suffix;
        }

        return answer;  // Return the resulting array
    }
};
