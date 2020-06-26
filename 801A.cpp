#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int k,i,flag=0,cou=0;
    string a;
    cin>>a;
    k=a.size();
    for(i=0; i<k; i++)
    {
        if(a[i]=='V'&&a[i+1]=='K')
        {
            cou++;
            a[i]='.';
            a[i+1]='.';
            i++;
        }
    }
    for(i=0; i<k; i++)
    {
        if(a[i]=='V'&&a[i+1]=='V'&&flag==0)
        {
            cou++;
            i++;
            flag=1;
        }
        else if(a[i]=='K'&&a[i+1]=='K'&&flag==0)
        {
            cou++;
            i++;
            flag=1;
        }
    }

    cout<<cou<<endl;
}