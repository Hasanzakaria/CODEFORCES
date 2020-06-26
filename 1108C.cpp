#include<bits/stdc++.h>
using namespace std;
char ch[4];
string b="RGB";
bool taken[3];
int n,cou,ans=2000000;
string a;
char jak[200000],tak[200000];
void permu(int r)
{
    int j,ff,i;
    if(r==3)
    {
        cou=0;
        for(i=0;i<n;i+=3)
        {
            if(a[i]!=ch[0])
            {
                tak[i]=ch[0];
                cou++;
            }
            else
            {
                tak[i]=a[i];
            }
        }
        for(i=1;i<n;i+=3)
        {
            if(a[i]!=ch[1])
            {
                tak[i]=ch[1];
                cou++;
            }
            else
            {
                tak[i]=a[i];
            }
        }
        for(i=2;i<n;i+=3)
        {
            if(a[i]!=ch[2])
            {
                tak[i]=ch[2];
                cou++;
            }
            else
            {
                tak[i]=a[i];
            }
        }
        ans=min(ans,cou);
        if(ans==cou)
        {
           for(i=0;i<n;i++)
           {
               jak[i]=tak[i];
           }
        }
        return;
    }
    for(j=0;j<3;j++)
    {
        if(taken[j]==0)
        {
            taken[j]=1;
            ch[r]=b[j];
            permu(r+1);
            taken[j]=0;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i;
    cin>>n;
    cin>>a;
    permu(0);
    cout<<ans<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<jak[i];
    }
}