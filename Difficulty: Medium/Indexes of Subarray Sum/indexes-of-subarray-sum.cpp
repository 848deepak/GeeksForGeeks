//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int start = 0, current_sum = 0;
        
        for (int end = 0; end < arr.size(); end++) {
            current_sum += arr[end];
            
            // Shrink the window if the current sum exceeds the target
            while (current_sum > target && start <= end) {
                current_sum -= arr[start];
                start++;
            }
            
            // Check if the current sum matches the target
            if (current_sum == target) {
                return {start + 1, end + 1}; // 1-based indices
            }
        }
        
        return {-1}; // No valid subarray found
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends