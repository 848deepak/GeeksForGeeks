//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function template for C++
class Solution {
    // function to return sum of 1, 2, ... n
  public:
    long long seriesSum(int n) {
        // calculate sum using formula sum = (n * (n + 1)) / 2
        long long sum = ((long long)n * (long long)(n + 1)) / 2;

        // return the sum
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        long long res = obj.seriesSum(n);

        cout << res << endl;
    }
}

// } Driver Code Ends