#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,cou=0,k;
    string a;
    cin>>a;
    k=a.size();
    for(i=0;i<k;i++)
    {
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
        {
            cou++;
        }
        else if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9')
        {
            cou++;
        }
    }
    cout<<cou<<endl;

}