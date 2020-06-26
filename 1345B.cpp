#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,k,cou,temp;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=0;
        cin>>a;
        while(1)
        {
            temp=a;
            k=a*2*3*4;
            k++;
            k=sqrt(k);
            k--;
            k/=6;
            a-=(k*(k+1));
            a-=((k-1)*k)/2;
            if(a==temp)
            {
                break;
            }
            cou++;
        }
        cout<<cou<<"\n";
    }


}