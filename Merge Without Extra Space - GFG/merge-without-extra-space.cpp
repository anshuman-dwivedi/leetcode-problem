//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
           int gap=n+m;
           while(gap>1)
           {
                 gap=gap/2+gap%2;
           int i=0,j=gap+i;
           while(i+gap<(n+m))
           {
           if(i<n && j<n)
           {
               if(arr1[i]>arr1[j])
               swap(arr1[i],arr1[j]);
           }
           else if(i<n && j>=n)
           {
            if(arr1[i]>arr2[j-n])
            swap(arr1[i],arr2[j-n]);
           }
           else if(i>=n && j>=n)
           {
               if(arr2[i-n] >arr2[j-n])
               swap(arr2[i-n],arr2[j-n]);
           }
           i++;
           j++;
           }
               
           }
           
        }
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends