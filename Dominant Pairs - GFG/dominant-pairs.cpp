//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
   sort(arr.begin(),arr.begin()+n/2);
   sort(arr.begin()+n/2,arr.end());
   int l=0,h=n/2;
   int pairs=0;
   while(l<n/2 && h<n)
   {
     if(arr[l]>=arr[h]*5)
     {
         pairs+=n/2-l;
         h++;
     }
     else
     l++;
   }
   return pairs;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends