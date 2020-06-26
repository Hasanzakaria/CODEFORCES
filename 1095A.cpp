#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int i,k,l=1;
    string a;
    cin>>k;
    cin>>a;
    for(i=0;i<k;)
    {
        cout<<a[i];
        i+=l;
        l++;
    }

}