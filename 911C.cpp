#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1||b==1||c==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if((a==2&&b==2)||(a==2&&c==2)||(b==2&&c==2))
        {
            cout<<"YES"<<endl;
        }
        else if(a==3&&b==3&&c==3)
        {
            cout<<"YES"<<endl;
        }
        else if((a==4&&b==4&&c==2)||(a==4&&b==2&&c==4)||(a==2&&b==4&&c==4))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}