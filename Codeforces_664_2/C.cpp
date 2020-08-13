#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int solve(int n,int m,int a[],int b[])
{
    for(int res=0;res<pow(2,9);res++)
    {
        int f1=0;
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<m;j++)
            {
                if(((a[i]&b[j])|res)==res)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                f1=1;
                break;
            }
        }
        if(f1==0)
            return res; 
    }
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