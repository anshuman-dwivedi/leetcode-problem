class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
   int n = t.size();
		vector<int>f(n,0),curr(n,0);
		for(int i = 0; i < n; i++) 
			f[i]=t[n-1][i];
		for(int i = n-2; i >= 0; i--) {
			for(int j = i; j >= 0; j--) {
				int d= t[i][j] + f[j];
				int dg = t[i][j] +f[j+1];
				curr[j] = min(d, dg);
			}
            f=curr;
		}
		return f[0];
        }
};