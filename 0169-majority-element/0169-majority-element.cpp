class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int maj=0, c= 0;
        for(int i=0; i<nums.size();i++){
            if(c==0){
                maj=nums[i];
            }
           if(maj==nums[i])
                c++;
            else 
                    c--;
        }
        return maj;
        }
};