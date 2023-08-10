class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      stack<int>st;
        int n=asteroids.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
         while(!st.empty() && asteroids[i]<0 && st.top()>0)
         {
          sum=asteroids[i]+st.top();
             if(sum>0)
             {
                 asteroids[i]=0;
}
             else if(sum<0)
                 st.pop();
             else{
                 asteroids[i]=0;
                 st.pop();
}
}
            if(asteroids[i]!=0)
                st.push(asteroids[i]);
}
        vector<int>result(st.size(),0);
        int k=st.size()-1;
        while(!st.empty())
        {
         result[k--]=st.top();
            st.pop();
}
        return result;
    }
};