#include<bits/stdc++.h>
using namespace std;
bool ara[100001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,w1,w2,w3,j;
    string c,d,e;
    char no,ch;
    cin>>n>>m;
    string a;
    cin>>a;
    for(i=1; i<=m; i++)
    {
        cin>>no;
        if(no=='+')
        {
            cin>>x>>ch;
            if(x==1)
            {
                c=c+ch;
            }
            else if(x==2)
            {
                d=d+ch;
            }
            else
            {
                e=e+ch;
            }
        }
        else
        {
            cin>>x;
            if(x==1)
            {
                c.erase(c.end()-1,c.end());
            }
            else if(x==2)
            {
                d.erase(d.end()-1,d.end());
            }
            else
            {
                e.erase(e.end()-1,e.end());
            }
        }
        w1=0;
        w2=0;
        w3=0;
        if(c.size()>=d.size()&&c.size()>=e.size()&&d.size()>=e.size())
        {
            for(j=0; j<n; j++)
            {
                if(a[j]==c[w1]&&ara[j]==0)
                {
                    w1++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==d[w2]&&ara[j]==0)
                {
                    w2++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==e[w3]&&ara[j]==0)
                {
                    w3++;
                    ara[j]=1;
                }
            }
        }
        else if(c.size()>=d.size()&&c.size()>=e.size()&&e.size()>=d.size())
        {
            for(j=0; j<n; j++)
            {
                if(a[j]==c[w1]&&ara[j]==0)
                {
                    w1++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==e[w3]&&ara[j]==0)
                {
                    w3++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==d[w2]&&ara[j]==0)
                {
                    w2++;
                    ara[j]=1;
                }
            }
        }
        else if(d.size()>=c.size()&&d.size()>=e.size()&&c.size()>=e.size())
        {
            for(j=0; j<n; j++)
            {
                if(a[j]==d[w2]&&ara[j]==0)
                {
                    w2++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==c[w1]&&ara[j]==0)
                {
                    w1++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==e[w3]&&ara[j]==0)
                {
                    w3++;
                    ara[j]=1;
                }
            }
        }
        else if(d.size()>=c.size()&&d.size()>=e.size()&&e.size()>=c.size())
        {
            for(j=0; j<n; j++)
            {
                if(a[j]==d[w2]&&ara[j]==0)
                {
                    w2++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==e[w3]&&ara[j]==0)
                {
                    w3++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==c[w1]&&ara[j]==0)
                {
                    w1++;
                    ara[j]=1;
                }
            }
        }
        else if(e.size()>=d.size()&&e.size()>=c.size()&&d.size()>=c.size())
        {
            for(j=0; j<n; j++)
            {
                if(a[j]==e[w3]&&ara[j]==0)
                {
                    w3++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==d[w2]&&ara[j]==0)
                {
                    w2++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==c[w1]&&ara[j]==0)
                {
                    w1++;
                    ara[j]=1;
                }
            }
        }
        else
        {
            for(j=0; j<n; j++)
            {
                if(a[j]==e[w3]&&ara[j]==0)
                {
                    w3++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==c[w1]&&ara[j]==0)
                {
                    w1++;
                    ara[j]=1;
                }
            }
            for(j=0; j<n; j++)
            {
                if(a[j]==d[w2]&&ara[j]==0)
                {
                    w2++;
                    ara[j]=1;
                }
            }
        }
        memset(ara,0,sizeof(ara));
        if(w1==c.size()&&w2==d.size()&&w3==e.size())
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}