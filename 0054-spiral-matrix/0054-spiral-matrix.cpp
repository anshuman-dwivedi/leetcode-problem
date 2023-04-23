class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int>result;
        int r=matrix.size();
        int c=matrix[0].size();
    int sr=0,er=r-1,sc=0,ec=c-1;
    while(sr<=er && sc<=ec)
    {
        for(int i=sc;i<=ec;i++)
        {
            result.push_back(matrix[sr][i]);
        }
        for(int i=sr+1;i<=er;i++)
        {
            result.push_back(matrix[i][ec]);
        }
        for(int i=ec-1;i>=sc;i--)
        {
            if(sr==er)
            break;
            result.push_back(matrix[er][i]);
        }
        for(int i=er-1;i>=sr+1;i--)
        {
         if(sc==ec)
         break;
         result.push_back(matrix[i][sc]);
        }
        sr++;
        er--;
        sc++;
        ec--;
        
    }
    return result;   
    }
};