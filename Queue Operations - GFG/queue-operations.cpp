//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
       q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
       queue<int>pq;
       int freq=0;
       while(!q.empty())
       {
           if(q.front()==k){
           freq++;
           pq.push(k);
           q.pop();
           }
           else{
               pq.push(q.front());
           q.pop();
           }
       }
       while(!pq.empty())
       {
           q.push(pq.front());
           pq.pop();
       }
       return freq;
    }
    
};

//{ Driver Code Starts.
int main() {
    
		int testcase;
		cin>>testcase;
		
		while(testcase-- > 0){
		    // Declaring Queue
		    queue<int> q;
		    int n, k;
		    cin>>n;
		    
		    // Invoking object of Geeks class
		    Solution obj;
		    
		    for(int i = 0;i<n;i++){
		        cin >> k;
		        obj.insert(q, k);
		    }
		   
		    int m;
		    cin >> m;
		    for(int i = 0;i<m;i++){
		        cin >> k;
		        int f = obj.findFrequency(q, k);
		        if(f != 0){
		            cout<<f<<endl;
		        }
		        else{
		            cout<<"-1\n";
		        }
		    }
		}
	return 0;
}
// } Driver Code Ends