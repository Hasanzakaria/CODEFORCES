#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j,k;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        k=s.size();
        for(j=0;j<k-2;j++)
        {
            if(s[j]=='t'&&s[j+1]=='w'&&s[j+2]=='o'&&j+3<k&&j+4<k&&s[j+3]=='n'&&s[j+4]=='e')
            {
                v.push_back(j+3);
                j+=4;
            }
            else if(s[j]=='o'&&s[j+1]=='n'&&s[j+2]=='e')
            {
                v.push_back(j+2);
                j+=2;
            }
            else if(s[j]=='t'&&s[j+1]=='w'&&s[j+2]=='o')
            {
                v.push_back(j+2);
                j+=2;
            }
        }
        cout<<v.size()<<"\n";
        for(j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<"\n";
        v.clear();
    }


}