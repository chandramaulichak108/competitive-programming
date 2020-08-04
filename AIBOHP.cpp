#include<bits/stdc++.h>

using namespace std;


int dp[6110][6110];

int solve(string s)
{
	// DP programming-- bottom up approach
	int n=s.length();
	int gap,i,j;
	for(gap=1;gap<n;gap++)  // gap indicates the length needed to check for bottom-up approach
	{
		for(j=gap,i=0;j<n;j++,i++) // checking whether the staring index i, ending index j has needed how many letters
		{
			if(s[i]==s[j])   // if the starting letters are same
				dp[i][j]=dp[i+1][j-1];    // then shift the dp inwards a sub-interval->> [-->()<--]
			else
				dp[i][j]=1+min(dp[i+1][j],dp[i][j-1]);   // else the minimum after adding each character either side to check
		}
	}
	return dp[0][n-1]; // return the required dp
}


int main()
{
        int t;
        cin>>t;
        while(t--)
        {
			string s;
			cin>>s;
			int n=s.length();
			for(int i=0;i<6110;i++)
			{
				for(int j=0;j<6110;j++)
					dp[i][j]=0;
			}
			cout<<solve(s)<<endl;
        }
        return 0;
}
