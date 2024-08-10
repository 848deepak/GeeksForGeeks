//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		          int odd_sum = 0;
        int even_sum = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 0)
                even_sum += i;
            else
                odd_sum += i;
        }

        return {odd_sum, even_sum};
    

		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
// } Driver Code Ends