//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mean(int N , int A[]) {
        int totalSum = 0;

        // Summing all the marks in the array
        for (int i = 0; i < N; ++i) {
            totalSum += A[i];
        }

        // Calculate the mean
        double mean = static_cast<double>(totalSum) / N;

        // Apply floor to the mean if it's a decimal value
        int floorMean = floor(mean);

        return floorMean;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.mean(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends