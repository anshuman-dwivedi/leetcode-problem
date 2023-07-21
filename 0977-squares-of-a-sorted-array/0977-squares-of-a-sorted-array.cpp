class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
    
        int n=arr.size();
        int low=0,high=n-1;
        vector<int>res(n,0);
        for(int i=n-1;i>=0;i--)
        {
            if(abs(arr[low])>abs(arr[high]))
            {
            res[i]=arr[low]*arr[low];
                low++;
}
            else{
                res[i]=arr[high]*arr[high];
            high--;
}
        
    }
   return res;     
    }

};