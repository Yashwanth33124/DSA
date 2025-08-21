#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(int a[], int n)
{
    int i = 0;
    for(int j=1;j<=n-1;j++)
    {
        if(a[i]!=a[j])
        {
            a[i+1]=a[j];
            i++;
        }
    }
    return (i+1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<remove_duplicates(a,n)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}