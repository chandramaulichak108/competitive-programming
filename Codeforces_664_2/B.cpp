#include<bits/stdc++.h>

using namespace std;

void solve(int n,int m, int x,int y)
{
    cout<<x<<" "<<y<<endl;
    for(int i=m;i>0;i--)
    {
        if(i==y)
            continue;
        cout<<x<<" "<<i<<endl;
    }
    int f=0;
    for(int i=1;i<=n;i++)
    {
        if(i==x)
            continue;
        if(f==0)
        {
            for(int j=1;j<=m;j++)
                cout<<i<<" "<<j<<endl;
            f=1;
        }
        else
        {
            for(int j=m;j>0;j--)
                cout<<i<<" "<<j<<endl;
            f=0;
        }
    }
}

int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    solve(n,m,x,y);
    return 0;
}