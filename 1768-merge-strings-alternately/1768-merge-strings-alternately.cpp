class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n=w1.length();
        int m=w2.length();
        int i=0;
        int j=0;
        string wd;
        while(i!=n && j!=m)
        {
            wd+=w1[i++];
            wd+=w2[j++];
}
        while(i!=n)
        {
            wd+=w1[i++];
}
          while(j!=m)
        {
            wd+=w2[j++];
}
        return wd;
    }
};