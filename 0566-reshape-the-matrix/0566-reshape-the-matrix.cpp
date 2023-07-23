class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
           int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>result(r,vector<int>(c,0));
        if(m*n !=r*c)
            return mat;
        int k=0;
        int p=0,q=0;
        for(int i=0;i<m*n;i++)
        {
          result[i/c][i%c]=mat[i/n][i%n];
}
        return result;
    }
};