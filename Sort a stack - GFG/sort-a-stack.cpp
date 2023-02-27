//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void bottom(stack<int>&st,int nums)
{
    if(st.empty()|| st.top()<nums)
    {
        st.push(nums);
        return;
    }
    else{
        int x=st.top();
        st.pop();
        bottom(st,nums);
    st.push(x);
    }
    
}
void SortedStack :: sort()
{
    if(s.empty())
    return;
int a=s.top();
s.pop();
sort();
bottom(s,a);
}