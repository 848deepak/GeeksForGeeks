//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int, int> freq; // To count the occurrences of each element
        vector<int> result;           // To store duplicate elements

        // Step 1: Count the frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        // Step 2: Add elements with frequency > 1 to the result vector
        for (auto& pair : freq) {
            if (pair.second > 1) {
                result.push_back(pair.first);
            }
        }

        // Step 3: Sort the result in ascending order
        sort(result.begin(), result.end());
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.findDuplicates(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no duplicates are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends