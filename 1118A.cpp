#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,c,p,cou,l,minn;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cou=0;
        cin>>a>>b>>c;
        p=a%2;
        if(p==1)
        {
            cou+=b;
        }
        l=b*2;
        minn=min(l,c);
        cou+=((a/2)*minn);
        cout<<cou<<"\n";
    }

}