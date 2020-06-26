#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long int a,i,k,l,f=0,cou=0;
    string b;
    cin>>a;
    cin>>b;
    k=b.size();
    int ara[k];
    for(i=0;i<k;i++)
    {
        l=b[i]-48;
        f+=l;
        ara[i]=l;
    }
    if(f<a)
    {
        sort(ara,ara+k);
        for(i=0;i<k;i++)
        {
            f+=(9-ara[i]);
            cou++;
            if(f>=a)
            {
                break;
            }

        }
        cout<<cou<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

}