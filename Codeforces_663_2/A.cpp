#include<bits/stdc++.h>

using  namespace std;

int* solve(int n)
{
    int* arr=new int[n];
    if(n==1)
    {
        arr[0]=1;
    }
    else
    {
        /*int i=1;
        while(true)
        {
            if(((int)(n/pow(2,i))==1) && n!=pow(2,i+1))
                break;
            else if(n==pow(2,i+1))
                break;
            else
                i+=1;
            //cout<<i<<endl;
        }
        arr[n/2]=i;
        int k=(n/2);
        int cnt=1;
        int j=k+1;
        int n1=n;
        if(n%2==0)
            arr[0]=k;
        while(j<n1)
        {
            if(((j-k)%2)==1)
            {
                arr[j]=n;
                arr[k-(j-k)]=arr[j]-i;
                n-=1;
            }
            else
            {
                arr[j]=cnt;
                arr[k-(j-k)]=arr[j]+i;
                cnt+=1;
            }
            j+=1;
        }
        if(arr[n1-1]==cnt-1)
            arr[0]=n;
        */
       int n1=n;
       int i=0;
       while(n1>(n+1)/2)
       {
           arr[i]=n1;
           arr[i+1]=n+1-n1;
           n1-=1;
           i+=2;
       }
       if((n+1)%2==0)
            arr[n-1]=(n+1)/2;
    }
    return arr;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* ans=solve(n);
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}