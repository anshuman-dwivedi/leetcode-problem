class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //sort(letters.begin(),letters.end());
        int low=0,high=letters.size()-1;
        char s=letters[0];
     while(low<=high)
     {
         int mid=low+(high-low)/2;
          if(letters[mid]>target)
          {
            s=letters[mid];
            high=mid-1;  
          }
         else
             low=mid+1;
}
        return s;
    }
};