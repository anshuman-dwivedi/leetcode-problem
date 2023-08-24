//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
        if(s1=="0" || s2=="0")
        return "0";
        bool c1=false,c2=false;
          int m=s1.length();
        int n=s2.length();
        
        if(s1[0]=='-')
        {
         c1=true; 
         s1=s1.substr(1,m-1);
         m=s1.length();
        }
        if(s2[0]=='-')
        {
         c2=true;
          s2=s2.substr(1,n-1);
          n=s2.length();
        }
       
       vector<int>temp(m+n,0);
       int i=n-1,pf=0,k,carry=0;
       while(i>=0)
       {
       int ch1=s2[i]-'0';
       int j=m-1;
        k=m+n-1-pf;
        while(j>=0 || carry!=0)
        {
            int ch2=j>=0?s1[j]-'0':0;
        int prod=ch1*ch2+carry+temp[k];
       // cout<<prod;
        temp[k]=prod%10;
        carry=prod/10;   
        j--;
        k--;
        }
        pf++;
        i--;
       }
       bool flag=false;
       string res="";
       if(c1==true && c2==true)
       res="";
        else if(c1==true || c2==true)
       {
           res='-';
       }
       for(int i=0;i<temp.size();i++)
       {
           if(temp[i]==0 && flag==false)
           continue;
           else{
               flag=true;
           res+=to_string(temp[i]);
           }
       }
       return res;
      
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends