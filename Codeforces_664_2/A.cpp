#include<bits/stdc++.h>

typedef long long int lli;

using namespace std;

int solve(lli a,lli b,lli c,lli d)
{
    if((a&1)+(b&1)+(c&1)+(d&1)==4)
        return 0;
    if((a&1)+(b&1)+(c&1)+(d&1)==0)
        return 0;
    if((a&1)+(b&1)+(c&1)+(d&1)==2)
        return 1;
    if((a&1)+(b&1)+(c&1)+(d&1)==1)
        return 0;
    if(a && b && c)
        return 0;
    return 1;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli a,b,c,d;
        cin>>a>>b>>c>>d;
        if(solve(a,b,c,d)==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}