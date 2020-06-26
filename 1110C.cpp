#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator p;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,l,t,flag,r,ans,m;
    mp[3]=1;
    mp[7]=1;
    mp[15]=5;
    mp[31]=1;
    mp[63]=21;
    mp[127]=1;
    mp[255]=85;
    mp[511]=73;
    mp[1023]=341;
    mp[2047]=89;
    mp[4095]=1365;
    mp[8191]=1;
    mp[16383]=5461;
    mp[32767]=4681;
    mp[65535]=21845;
    mp[131071]=1;
    mp[262143]=87381;
    mp[524287]=1;
    mp[1048575]=349525;
    mp[2097151]=299593;
    mp[4194303]=1398101;
    mp[8388607]=178481;
    mp[16777215]=5592405;
    mp[33554431]=1082401;
    mp[67108863]=22369621;
    mp[134217727]=19173961;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        ans=0;
        r=1;
        flag=0;
        cin>>a;
        m=a;
        while((a/2)!=0||(a%2)!=0)
        {
            l=a%2;
            v.push_back(l);
            a/=2;
        }
        for(p=v.begin(); p!=v.end(); p++)
        {
            t=*p;
            if(t==0)
            {
                flag=1;
            }
            ans+=(1*r);
            r=r*2;
        }
        if(flag==0)
        {
            cout<<mp[m]<<"\n";
        }
        else
        {
            cout<<ans<<"\n";
        }
        v.clear();
    }
 
 
}