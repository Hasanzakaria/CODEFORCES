#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<string>cp;
vector<string>::iterator p;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,t=0;
    string f;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n-1;i++)
    {
        string c;
        c+=a[i];
        c+=a[i+1];
        if(mp[c]==0)
        {
            mp[c]++;
            cp.push_back(c);
        }
        else
        {
            mp[c]++;
        }
    }
    for(p=cp.begin();p!=cp.end();p++)
    {
        string d;
        d=*p;
        if(mp[d]>t)
        {
            t=mp[d];
            f=d;
        }
    }
    cout<<f<<endl;

}