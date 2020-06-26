#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,cou,v,ans,ans1=1000000000,k;
    char ch;
    cin>>n;
    string a,b;
    cin>>a;
    b="ACTG";
    for(i=0;i<n-3;i++)
    {
        ans=0;
        k=0;
        for(j=i;j<=i+3;j++,k++)
        {
           ch=a[j];
           cou=0;
           v=0;
           while(b[k]!=ch)
           {
               if(ch=='Z')
               {
                   ch='A';
                   cou++;
                   continue;
               }
               ch++;
               cou++;
           }
           ch=a[j];
           while(b[k]!=ch)
           {
               if(ch=='A')
               {
                   ch='Z';
                   v++;
                   continue;
               }
               ch--;
               v++;
           }
           ans+=min(cou,v);
        }
        ans1=min(ans1,ans);
    }
    cout<<ans1<<"\n";
}