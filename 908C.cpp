#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<double>pq;
    vector<double>::iterator l;
    double r,k,f,maxx,e;
    int n,i,j;
    cin>>n>>r;
    double ara[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        maxx=r;
        for(j=0;j<i;j++)
        {
            k=ara[j]-ara[i];
            if(k<0)
            {
                k=-k;
            }
            if(k<=(2*r))
            {
                f=sqrt(((2*r)*(2*r))-(k*k))+y[j];
                pq.push_back(f);
            }
        }
        for(l=pq.begin();l!=pq.end();l++)
        {
            e=*l;
            maxx=max(maxx,e);
        }
        y[i]=maxx;
        pq.clear();
    }
    for(i=0;i<n;i++)
    {
        printf("%.8lf ",y[i]);
    }
}