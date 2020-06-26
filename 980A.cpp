#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,i,o=0,c=0;
    string a;
    cin>>a;
    k=a.size();
    for(i=0;i<k;i++)
    {
        if(a[i]=='o')
        {
          o++;
        }
        else if(a[i]=='-')
        {
            c++;
        }
    }
    if(c%o==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}