#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,f,temp,cou=0;
    cin>>n;
    long long int ara[2*n];
    for(i=0;i<2*n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<2*n;i++)
    {
        for(j=i+1;j<2*n;j++)
        {
            if(ara[i]==ara[j])
            {
                f=j;
                break;
            }
        }
        f--;
        while(f!=i)
        {
            temp=ara[f+1];
            ara[f+1]=ara[f];
            ara[f]=temp;
            f--;
            cou++;
        }
        i++;
    }
    cout<<cou<<"\n";
}