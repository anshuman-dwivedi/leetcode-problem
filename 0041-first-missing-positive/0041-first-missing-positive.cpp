class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        set<int>m;
      int i=0;
       int n=arr.size();
      while(i<n)
      {
      if(arr[i]>0)
      {
   m.insert(arr[i]);
      }
      i++;
    }
  set<int>::iterator itr;
  i=1;
  for(itr=m.begin();itr!=m.end();itr++)
  {
      if(*itr !=i)
      return i;
      i++;
  }
    return m.size()+1;
       } 
};