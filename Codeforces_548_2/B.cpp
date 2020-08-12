#include<bits/stdc++.h>

typedef long long int lli;

using namespace std;

lli solve(lli a[],int n)
{
    lli res=a[n-1];
    lli p=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<p)
        {
            res+=a[i];
            p=a[i];
        }
        else if((a[i]>=p) && (p-1))
        {
            res+=p-1;
            p-=1;
        }
        else
            break;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<solve(a,n)<<endl;
    return 0;
}