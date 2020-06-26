#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,l,i;
    string a,b;
    cin>>a>>b;
    k=a.size();
    cout<<a[0];
    for(i=1;i<k;i++)
    {
        if(a[i]<b[0])
        {
            cout<<a[i];
        }
        else
        {
            break;
        }
    }
    cout<<b[0]<<endl;

}