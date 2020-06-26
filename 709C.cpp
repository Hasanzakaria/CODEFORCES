#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a;
    cin>>a;
    int k,i,flag=0;
    k=a.size();
    for(i=0;i<k;i++)
    {
        if(a[i]!='a')
        {
            flag=1;
            a[i]=a[i]-1;
            if(a[i+1]=='a')
            {
                break;
            }
        }
    }
    if(flag==0)
    {
        a[i-1]='z';
    }
    cout<<a;
}