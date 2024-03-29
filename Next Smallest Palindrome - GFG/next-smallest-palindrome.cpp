//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	   bool flag=1;
	   for(int i=0;i<n/2;i++)
	   {
	      if(num[i]<num[n-i-1])
	      flag=1;
	      else if(num[i]>num[n-i-1])
	      flag=0;
	      num[n-1-i]=num[i];
	   }
	   vector<int>ans(n);
	   int p=0;
	   for(p=0;p<n;p++)
	   ans[p]=num[p];
	   int ind=n/2;
	   bool carry=flag;
	   while(carry && ind<n)
	   {
	       if(ans[ind]==9)
	       {
	         ans[ind]=0;
	         ans[n-ind-1]=0;
	       }
	       else{
	           ans[ind]++;
	           ans[n-ind-1]=ans[ind];
	           carry=0;
	       }
	       ind++;
	   }
	      if(carry){
          ans[0]=1;
          ans.push_back(1);
      }
	   return ans;
	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends