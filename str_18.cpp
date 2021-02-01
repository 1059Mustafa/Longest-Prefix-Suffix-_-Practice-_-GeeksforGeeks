class Solution{
public:		

		
	int lps(string str)
	{
	    int j=0;
	    int n=str.size();
	    vector<int>ans;
	    for(int i=0;i<n;i++)
	    {
	        ans.push_back(0);
	    }
	    int i=1;
	    while(i<n)
	    {
	        if(str[j]==str[i])
	        {
	            ans[i]=j+1;
	            i++;
	            j++;
	        }
	        else
	        {
	            if(j==0)
	                i++;
	            else
	                j = ans[j-1];
	        }
	    }
	    return ans.back();
	    
	}
};
