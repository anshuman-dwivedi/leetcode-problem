class Solution {
public:
    int minJumps(vector<int>& arr) {
     unordered_map<int,vector<int>>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]].push_back(i);
}
        queue<int>q;
        q.push(0);
        vector<bool>visited(arr.size(),false);
        visited[0]=true;
        int steps=0;
        while(!q.empty())
        {
    for(int i=q.size();i>0;--i)
    {
        int temp=q.front();
        q.pop();
       if(temp==arr.size()-1)
           return steps;
        vector<int>& next=m[arr[temp]];
        next.push_back(temp+1);
        next.push_back(temp-1);
        for(int j:next)
        {
            if(j>=0 && j<arr.size() && !visited[j])
            {
                visited[j]=true;
                q.push(j);
}
}
        next.clear();
}
            steps++;
}
        return 0;
    }
};