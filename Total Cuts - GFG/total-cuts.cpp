//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
    vector<int> r(N, INT_MAX);
        vector<int> l(N, INT_MAX);
        int temp = A[N-1], ans =0;
        
        for(int i=N-1; i>0; i--){
             r[i] = min(A[i], temp);
             temp = r[i];
        }
      temp = A[0];
         for(int i=0; i<N; i++){
             l[i] = max(A[i], temp);
             temp = l[i];
        }
        
        for(int i=0; i<N-1; i++){
             if(l[i] + r[i+1] >=K) ans++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends