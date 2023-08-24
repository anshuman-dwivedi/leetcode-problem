class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int i=0;
        int n=words.size();
        while(i<n)
        {
            int ll=words[i].size();
         int j=i+1;
            while(j<n && ll+words[j].size()+(j-i)<=maxWidth)
            {
                ll+=words[j].size();
                j++;
}
            int nw=j-i;
            int ns=maxWidth-ll;
            string line;
            if(nw==1 || j==n)
            {
                line=words[i];
                for(int k=i+1;k<j;k++)
                {line+=' '+words[k];
                    
}
                line+=string(maxWidth-line.size(),' ');
}
            else
            {
                int sw=ns/(nw-1);
                int es=ns%(nw-1);
                line=words[i];
                for(int k=i+1;k<j;k++)
                {
                     line+=string(sw,' ');
                   if(es>0)
                    {
                        line+=' ';
                        es--;
}
                    line+=words[k];
}
}
            ans.push_back(line);
            i=j;
}
        return ans;
    }
};