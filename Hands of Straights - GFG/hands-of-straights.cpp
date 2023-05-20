//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int g, vector<int> &hand) {
      if(N%g!=0)
      return false;
      map<int,int>m;
      for(int i=0;i<N;i++)
      {
       m[hand[i]]++;   
      }
      while(!m.empty())
      {
          auto itr=m.begin();
          int temp=itr->first;
          int k=g;
          while(k--)
          {
              if(!m[temp])
              return false;
              else{
                 m[temp] --;
                 if(m[temp]==0)
                 m.erase(temp);
              }
              temp++;
          }
      }
      return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends