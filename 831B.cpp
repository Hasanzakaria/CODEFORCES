#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a,b,c;
    char cc,p;
    int i,j,flag,k;
    cin>>a>>b>>c;
    k=c.size();
    for(i=0;i<k;i++)
    {
        flag=0;
        for(j=0;j<26;j++)
        {
            cc=a[j]-32;
            if(c[i]==a[j])
            {
                cout<<b[j];
                flag=1;
                break;
            }
            else if(c[i]==cc)
            {
               p=b[j]-32;
               cout<<p;
               flag=1;
               break;

            }
        }
        if(flag==0)
        {
            cout<<c[i];
        }
    }
    cout<<endl;



}