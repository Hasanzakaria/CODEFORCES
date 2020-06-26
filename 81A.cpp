#include<bits/stdc++.h>
using namespace std;
stack<char>p;
vector<char>v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,f;
    cin>>s;
    char ch;
    long long int k,i;
    k=s.size();
    for(i=0;i<k;i++)
    {
        if(p.size()==0)
        {
            p.push(s[i]);
        }
        else
        {
          ch=p.top();
          if(s[i]==ch)
          {
              p.pop();
          }
          else
          {
              p.push(s[i]);
          }
        }
    }
    while(!p.empty())
    {
        ch=p.top();
        v.push_back(ch);
        p.pop();
    }
    k=v.size();
    for(i=k-1;i>=0;i--)
    {
        f+=v[i];
    }
    cout<<f<<"\n";
}