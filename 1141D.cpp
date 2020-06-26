#include<bits/stdc++.h>
using namespace std;
vector<int>v[27];
vector<int>::iterator u;
struct node
{
    int aa,bb;
};
vector<node>ll;
vector<node>::iterator uu;
node temp;
int main ()
{
    
    int n,k,l,i,j,flag;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0; i<n; i++)
    {
        if(a[i]=='?')
        {
            v[26].push_back(i+1);
            continue;
        }
        k=a[i]-97;
        v[k].push_back(i+1);
    }
    for(i=0; i<n; i++)
    {
        if(b[i]=='?')
        {
            flag=0;
            for(j=0;j<26;j++)
            {
                if(v[j].size()>0)
                {
                   flag=1;
                   u=v[j].begin();
                   temp.aa=*u;
                   temp.bb=i+1;
                   ll.push_back(temp);
                   v[j].erase(u);
                   break;
                }
            }
            if(v[26].size()>0&&flag==0)
            {
                u=v[26].begin();
                temp.aa=*u;
                temp.bb=i+1;
                ll.push_back(temp);
                v[26].erase(u);
            }
            continue;
        }
        k=b[i]-97;
        if(v[k].size()>0)
        {
            u=v[k].begin();
            temp.aa=*u;
            temp.bb=i+1;
            ll.push_back(temp);
            v[k].erase(u);
        }
        else
        {
            if(v[26].size()>0)
            {
                u=v[26].begin();
                temp.aa=*u;
                temp.bb=i+1;
                ll.push_back(temp);
                v[26].erase(u);
            }
        }
    }
    cout<<ll.size()<<"\n";
    for(uu=ll.begin(); uu!=ll.end(); uu++)
    {
        temp=*uu;
        cout<<temp.aa<<" "<<temp.bb<<"\n";
    }
}