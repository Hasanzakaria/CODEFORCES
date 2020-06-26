#include<bits/stdc++.h>
using namespace std;
set<long long int>s;
set<long long int>::iterator l;
int main ()
{
    long long int t,a,p,j,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        p=sqrt(a);
        j=1;
        while(j<=p)
        {
            s.insert(j);
            s.insert(a/j);
            j++;
        }
        s.insert(0);
        cout<<s.size()<<"\n";
        for(l=s.begin();l!=s.end();l++)
        {
            cout<<*l<<" ";
        }
        cout<<"\n";
        s.clear();
    }
}