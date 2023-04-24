class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
      priority_queue<int>pq(s.begin(),s.end());
        while(pq.size()>1)
        {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x!=y)
                pq.push(y-x);
}
        return (pq.size()!=0)?pq.top():0;
        
    }
};