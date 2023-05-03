class Solution {
public:
    int integerBreak(int N) {
        if(N<2)
            return 0;
        if(N==2)
            return 1;
        if(N==3)
            return 2;
        int maxp=1;
        switch (N%3)
        {
            case 0:
        maxp=pow(3,N/3);
                break;
                  case 1:
        maxp=2*2*pow(3,(N/3)-1);
                break;
            case 2:
                 maxp=2*pow(3,(N/3));
                break;
            default:
                break;
        }
        return maxp;
    }
};