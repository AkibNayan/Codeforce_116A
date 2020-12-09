#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1000],b[1000],temp=0,ans,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        ans=b[i]-a[i]+temp;
        temp=ans;
        if(ans>max)
        {
            max=ans;
        }
    }
    printf("%d",max);
    return 0;
}
