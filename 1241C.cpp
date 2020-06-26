#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,x1,x2,y1,y2,k,maxx,minn,first,second,third,ans,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        first=0;
        second=0;
        third=0;
        ans=-1;
        long long int ara[a],pre[a];
        for(j=0; j<a; j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+a);
        reverse(ara,ara+a);
        pre[0]=0;
        pre[1]=ara[0];
        for(j=2; j<=a; j++)
        {
            pre[j]=pre[j-1]+ara[j-1];
        }
        cin>>x1>>y1>>x2>>y2>>k;
        for(j=0; j<a; j++)
        {
            sum=0;
            if((j+1)%y1==0&&(j+1)%y2==0)
            {
                third++;
            }
            else if((j+1)%y1==0)
            {
                first++;
            }
            else if((j+1)%y2==0)
            {
                second++;
            }
            if((j+1)%y1==0||(j+1)%y2==0)
            {
                sum=((x1+x2)/100.0)*pre[third];
                if(x1>x2)
                {
                    sum+=(x1/100.0)*(pre[first+third]-pre[third]);
                    sum+=(x2/100.0)*(pre[first+third+second]-pre[third+first]);
                }
                else
                {
                    sum+=(x2/100.0)*(pre[second+third]-pre[third]);
                    sum+=(x1/100.0)*(pre[second+third+first]-pre[third+second]);
                }
            }
            if(sum>=k)
            {
                ans=j+1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}