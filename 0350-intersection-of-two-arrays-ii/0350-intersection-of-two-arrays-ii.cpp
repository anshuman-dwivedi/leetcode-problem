class Solution {
public:
    bool helper(vector<int>& num2,int tar)
    {
        int low=0,high=num2.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(num2[mid]==tar)
            {
                num2.erase(num2.begin()+mid);
     return true;
            }

            else if(num2[mid]>tar)
                high=mid-1;
            else 
                low=mid+1;
        }
        return false;
}
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
       sort(num2.begin(),num2.end());
        vector<int>res;
        for(int i=0;i<num1.size();i++)
        {
           int val=helper(num2,num1[i]);
            if(val==true)
                res.push_back(num1[i]);
}
        return res;
    }
};