#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    long long int n,i,k,t,f;
    cin>>n;
    vector<long long int>a;
    vector<long long int>::iterator r;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    r=a.begin();
    t=*r+1;
    for(r=a.begin()+1;r!=a.end();r++)
    {
        if(*r>=*(r-1))
        {
            t++;
            f=*r-*(r-1);
            f++;
            t+=f;
        }
        else
        {
            f=*(r-1)-*r;
            f+=2;
            t+=f;
        }
    }
    cout<<t;

}