class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int n1=-1,n2=-1,c1=0,c2=0;
       for(int ele:nums)
       {
           if(n1==ele)
           {
               c1++;
}
           else if(n2==ele)
               c2++;
           else if(c1==0)
           {
               n1=ele;
               c1++;
}
           else if(c2==0)
           {
               n2=ele;
               c2++;
}
           else
           {
c1--;
           c2--;
           }
}
        int count=0,count1=0;
        vector<int>res;
        for(int it:nums)
        {
            if(it==n1)
                count++;
            else if(it==n2)
                count1++;
}
        if(count>nums.size()/3)
            res.push_back(n1);
         if(count1>nums.size()/3)
            res.push_back(n2);
        return res;
    }
};