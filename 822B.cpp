#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>pq,tq;
    vector<int>::iterator u;
    int a,b,i,j,k,cou,l=0;
    string c,d;
    cin>>a>>b;
    cin>>c>>d;
    for(i=0; i<b-a+1; i++)
    {
        k=i;
        cou=0;
        for(j=0; j<a; j++)
        {
            if(c[j]==d[k])
            {
                cou++;
            }
            else
            {
                pq.push_back(j+1);
            }
            k++;
        }
        if(cou>l)
        {
            l=cou;
            tq=pq;
        }
        pq.clear();
    }
    cout<<a-l<<endl;
    if(l==0)
    {
        for(i=0; i<a; i++)
        {
            cout<<i+1<<" ";
        }
    }
    else
    {

        for(u=tq.begin(); u!=tq.end(); u++)
        {
            cout<<*u<<" ";
        }
    }
}