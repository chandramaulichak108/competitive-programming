#include<bits/stdc++.h>

using namespace std;

int solve(char arr[100][100],int n,int m)
{
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i][m-1]!='D')
            cnt+=1;
    }
    for(int j=0;j<m-1;j++)
    {
        if(arr[n-1][j]!='R')
            cnt+=1;
    }
    return cnt;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char arr[100][100];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        cout<<solve(arr,n,m)<<endl;
    }
}