#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,k,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        if(a<4)
        {
            cout<<-1<<"\n";
        }
        else
        {
            k=a%4;
            if(k==0)
            {
                for(j=1; j<=a/4; j++)
                {
                    cout<<(4*j)-2<<" "<<(4*j)<<" "<<(4*j)-3<<" "<<(4*j)-1<<" ";
                }
                cout<<"\n";
            }
            else if(k==1)
            {
                for(j=1; j<=a/4; j++)
                {
                    cout<<(4*j)-2<<" "<<(4*j)<<" "<<(4*j)-3<<" "<<(4*j)-1<<" ";
                }
                cout<<a<<"\n";
            }
            else if(k==2)
            {
                for(j=1; j<=(a/4)-1; j++)
                {
                    cout<<(4*j)-2<<" "<<(4*j)<<" "<<(4*j)-3<<" "<<(4*j)-1<<" ";
                }
                cout<<(4*j)-2<<" "<<(4*j)<<" "<<(4*j)-3<<" "<<a-1<<" "<<(4*j)-1<<" "<<a<<"\n";
            }
            else
            {
                for(j=1; j<=(a/4)-1; j++)
                {
                    cout<<(4*j)-2<<" "<<(4*j)<<" "<<(4*j)-3<<" "<<(4*j)-1<<" ";
                }
                cout<<(4*j)-2<<" "<<(4*j)<<" "<<(4*j)-3<<" "<<a-2<<" "<<a<<" "<<(4*j)-1<<" "<<a-1<<"\n";
            }
        }
    }
}