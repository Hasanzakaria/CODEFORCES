#define FastRead ios_base::sync_with_stdio(0);cin.tie(NULL);
#define LL long long
#define MEM(a,x) memset(a,x,sizeof(a))
#define NL "\n"
#define SP " "
#define debug cout<<"VALHALLA"<<"\n";
#define INF 100000000

#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin>>n;
    int x=n/2;
    int y=n%2;
    vector<int>v;
    string s;
    //cout<<x<<NL;
    if(x==1)
    {
        if(n==2)cout<<1;
        if(n==3)cout<<7;
        return 0;
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            v.push_back(1);
        }

    }
    if(y==1)v[0]=7;
    for(int i=0;i<v.size();i++)cout<<v[i];


    return 0;
}