/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13   */
/**************************************************/
// Check if it's possible to paint all boards within the given maxAllowedTime
bool isPossible(vector<int>& arr, int n, int m, int maxAllowedTime) {
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
        
        // If the number of painters exceeds M, it's not possible
        if (painters > m) return false;
    }
    return true;
}

// Binary search for the minimum time to paint all boards
int minTimeToPaint(vector<int>& arr, int n, int m) {
    int sum = 0, maxval = INT_MIN;
    
    // Calculate the sum of all boards and the maximum board length
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }
    
    // Binary search range: between the largest board and total sum
    int st = maxval, end = sum, ans = -1;
    
    while (st <= end) {
        int mid = st + (end - st) / 2;

        // If it's possible to paint all boards within `mid` time
        if (isPossible(arr, n, m, mid)) {
            ans = mid;    // Store the possible answer
            end = mid - 1;  // Try for a smaller time
        } else {
            st = mid + 1;  // Increase time to find feasible solution
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};  // Example input
    int n = 4;  // Number of boards
    int m = 2;  // Number of painters

    cout << "Minimum time to paint all boards: " << minTimeToPaint(arr, n, m) << endl;
    
    return 0;
}