class Solution {
public:
    string predictPartyVictory(string senate) {
       queue<int>q1,q2;
        for(int i=0;i<senate.size();i++)
        {
        senate[i]=='R'?q1.push(i):q2.push(i);
}
        while(!q1.empty() && !q2.empty())
        {
            int t1=q1.front();
            int t2=q2.front();
            q1.pop();
            q2.pop();
            if(t1<t2)
            {
     q1.push(senate.size()+t1);
}
else
{
q2.push(senate.size()+t2);
}
}
        return q1.empty()?"Dire":"Radiant";
        
    }
};