#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,d,e,k=0,l=0;
    cin>>a>>b>>c>>d>>e;
    k+=(2*d)+(b*a);
    l+=(2*e)+(c*a);
    if(k==l)
    {
        cout<<"Friendship"<<endl;
    }
    else if(k<l)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }


}