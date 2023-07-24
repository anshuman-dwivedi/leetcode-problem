class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rs=matrix.size();
        int cs=matrix[0].size();
        int l=0,h=rs*cs-1;
        while(l<=h)
        {
            int mid=(h+l)/2;
            if(matrix[mid/cs][mid%cs]==target)
            {
             return true;   
}
            else if(matrix[mid/cs][mid%cs]>target)
            {
             h=mid-1 ;  
}
            else
                l=mid+1;
}
        return false;
    }
};