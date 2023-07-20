class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      stack<int>s;
            for(int i=0;i<asteroids.size();i++)
      {
         while(!s.empty() && asteroids[i]<0 && s.top()>0)
         {
            int sum=asteroids[i]+s.top();
            if(sum<0)
            {
s.pop();
            } 
            else if(sum>0)
         {
asteroids[i]=0;
         }
         else{
asteroids[i]=0;
s.pop();
         }
         }
         if(asteroids[i]!=0)
         s.push(asteroids[i]);
      }
      vector<int>result;
      int j=s.size()-1;
          while(!s.empty())

       {

      result.push_back(s.top());

           s.pop();

       }

       reverse(result.begin(),result.end());

       return result;
    }
};