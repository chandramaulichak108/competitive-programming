#include<bits/stdc++.h>

typedef long long int lli;

using namespace std;


int solve(lli a[],int n)
{
	// Dynamic programming
	int dp[n];
	dp[0]=1;
	for(int i=1;i<n;i++)
	{
		dp[i]=1;
		int j=i-1;
		while(j>=0)
		{
			if(abs(a[i])>abs(a[j]))
			{
				if(a[i]*a[j]<0)
					dp[i]=max(dp[i],1+dp[j]);
			}
			j-=1;
		}	 // O(n^2)
	}
	int m=dp[0];   // maximum of the dp's
	for(int i=1;i<n;i++)
	{
		if(m<dp[i])
			m=dp[i];
	}
	return m;  // O(n^2+n)
}



int main()
{
	int n;
	cin>>n;
	lli a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<solve(a,n)<<endl;
	return 0;
}
