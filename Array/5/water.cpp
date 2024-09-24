class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0; // Initialize maxArea to 0
        int left = 0;    // Left pointer
        int right = height.size() - 1; // Right pointer
        
        while (left < right) {
            // Calculate the width and height
            int width = right - left;
            int h = min(height[left], height[right]);
            // Calculate the area
            int area = width * h;
            // Update maxArea if current area is larger
            maxArea = max(maxArea, area);
            
            // Move the pointer for the shorter line
            if (height[left] < height[right]) {
                left++; // Move left pointer to the right
            } else {
                right--; // Move right pointer to the left
            }
        }
        
        return maxArea; // Return the maximum area found
    }
};
