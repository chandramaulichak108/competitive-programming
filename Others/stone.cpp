#include<bits/stdc++.h>

typedef long long int lli;

using namespace std;

lli solve(lli a[],int n)
{
    lli res,sum=0;
    int i,j;
    for(i=0;i<n;i++)
        sum+=a[i];
    res=sum;
    for(i=0;i<(1<<n);i++)
    {
        lli temp_sum=0;
        for(j=0;j<n;j++)
        {
            if((i&(1<<j))==0)
                temp_sum+=a[j];
        }
        if(res>abs(sum-2*temp_sum))
            res=abs(sum-2*temp_sum);
    }
    return res;
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