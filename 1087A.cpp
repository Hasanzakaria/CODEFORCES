#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    long long int k,i,l,f;
    cin>>s;
    k=s.size();
    l=k/2;
    if(k%2!=0)
    {
        l++;
    }
    cout<<s[l-1];
    f=l-2;
    for(i=l;i<k;i++)
    {
        cout<<s[i];
        if(f>=0)
        {
            cout<<s[f];
        }
        f--;
    }
    cout<<endl;

}