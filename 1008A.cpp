#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a;
    long long int k,i,flag=0;
    cin>>a;
    k=a.size();
    for(i=0; i<k-1; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='n')
        {

        }
        else
        {
            if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')
            {

            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(a[k-1]=='a'||a[k-1]=='e'||a[k-1]=='i'||a[k-1]=='o'||a[k-1]=='u'||a[k-1]=='n')
    {

    }
    else
    {
        flag=1;
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}