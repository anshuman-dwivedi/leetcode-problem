class Solution {
public:
    bool validateStackSequences(vector<int>& A, vector<int>& B) {
         stack<int>s;
     int j=0;
     for(int i=0;i<A.size();i++)
     {
        s.push(A[i]);
     while(s.size()>0 && s.top()==B[j])
     {
         s.pop();
         j++;
     }}
    return (s.size()==0);
    }
};