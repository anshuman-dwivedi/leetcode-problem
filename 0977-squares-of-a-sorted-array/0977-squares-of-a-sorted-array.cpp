class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
    int n=arr.size();
        vector<int>res(n,0);
        int i=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>=0)
                break;
}
 int left=i-1,right=i,ind=0;
        while(left>=0 && right<n)
        {
            if(abs(arr[left])<=abs(arr[right]))
            {
                res[ind++]=arr[left]*arr[left];
                left--;
}
                      else if(abs(arr[left])>=abs(arr[right]))
            {
                res[ind++]=arr[right]*arr[right];
                right++;
}
}
        while(left>=0)
        {
            res[ind++]=arr[left]*arr[left];
            left--;
            
}
            while(right<n)
        {
            res[ind++]=arr[right]*arr[right];
            right++;
            
}
    
   return res;     
    }

};