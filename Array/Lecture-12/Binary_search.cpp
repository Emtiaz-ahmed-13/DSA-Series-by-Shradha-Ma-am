/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
int binarySearchIterative(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if target is at mid
        if (arr[mid] == target)
            return mid;
        
        // Target is smaller than mid
        if (arr[mid] > target)
            high = mid - 1;
        // Target is larger than mid
        else
            low = mid + 1;
    }
    return -1;  // Target not found
}



int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;  // Base case: target not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;  // Target found

    if (arr[mid] > target)
        return binarySearchRecursive(arr, low, mid - 1, target);  // Search left half

    return binarySearchRecursive(arr, mid + 1, high, target);  // Search right half
}