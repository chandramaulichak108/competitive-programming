#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int solve(int n,int m,int a[],int b[])
{
    int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=INT_MAX;
        for(int j=0;j<m;j++)
        {
            if(i>0)
                dp[i]=min(dp[i-1]|dp[i],dp[i-1]|(a[i]&b[j])); 
            else
                dp[i]=min(dp[i],a[i]&b[j]);
        }
    }
    return dp[n-1];
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    cout<<solve(n,m,a,b)<<endl;
    return 0;
}