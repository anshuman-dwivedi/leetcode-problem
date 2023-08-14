//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
       int xore=0;
       for(int i=0;i<nums.size();i++)
       {
           xore^=nums[i];
       }
       int set_bit=xore & (~xore)+1;
       int x=0,y=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]&set_bit)
           x=x^nums[i];
           else
           y^=nums[i];
       }
       vector<int>res(2);
       if(x<y)
       {
           res[0]=x;
           res[1]=y;
       }
       else{
           res[0]=y;
           res[1]=x;
       }
       return res;
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
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends