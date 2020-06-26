#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp,tp;
int tak[6];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ara[6]={4,8,15,16,23,42},i,j,f,l,p,x;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            f=ara[i]*ara[j];
            mp[f]=ara[i];
            cp[f]=ara[j];
        }
    }
    cout<<"? "<<1<<" "<<2<<endl;
    cin>>l;
    cout<<"? "<<2<<" "<<3<<endl;
    cin>>p;
    tp[mp[l]]=1;
    tp[cp[l]]=1;
    if(tp[mp[p]]==1)
    {
       x=mp[p];
    }
    else
    {
       x=cp[p];
    }
    tak[1]=x;
    tak[0]=(l/x);
    tak[2]=(p/x);
    cout<<"? "<<4<<" "<<5<<endl;
    cin>>l;
    cout<<"? "<<5<<" "<<6<<endl;
    cin>>p;
    tp[mp[l]]=1;
    tp[cp[l]]=1;
    if(tp[mp[p]]==1)
    {
       x=mp[p];
    }
    else
    {
       x=cp[p];
    }
    tak[4]=x;
    tak[3]=(l/x);
    tak[5]=(p/x);
    cout<<"! ";
    for(i=0;i<6;i++)
    {
        cout<<tak[i]<<" ";
    }
    cout<<endl;



}