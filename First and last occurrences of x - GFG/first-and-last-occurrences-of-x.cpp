//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     int first_pos(int low , int high , int nums[] , int target)
    {
        int result = -1;    
        while(low <= high)
        {
            int mid = low + (high - low)/2;  
            if(nums[mid] == target)
            { 
                result = mid;  
                high = mid - 1;        }
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return result;
    }
    int last_pos(int start , int end , int nums[] , int target)
    {
        int result = -1; 
        while(start <= end) 
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                result = mid;  
                start = mid + 1;    
            }
            else if(nums[mid] >= target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return result;
    }
    vector<int> find(int arr[], int n , int x )
    {
        int start = 0 , end = n - 1;
        vector<int>ans(2);
        ans[0] = first_pos(start , end , arr ,x);
        ans[1] = last_pos(start , end , arr, x);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends