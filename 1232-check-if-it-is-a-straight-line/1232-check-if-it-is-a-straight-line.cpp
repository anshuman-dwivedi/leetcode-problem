class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
      int s=coordinates.size();
        if(s==1)
            return false;
        if(s==2)
        return true;
        int x0=coordinates[0][0],y0=coordinates[0][1];
        int x1=coordinates[1][0],y1=coordinates[1][1];
        int dx=x1-x0;
        int dy=y1-y0;
        for(int i=2;i<s;i++)
            {
            int x=coordinates[i][0],y=coordinates[i][1];
            if(dx*(y-y0)!=dy*(x-x0))
                return false;
}
    return true;}
};