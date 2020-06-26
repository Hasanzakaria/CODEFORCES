#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int k,i,j,l,cou=0;
    string a;
    cin>>a;
    k=a.size();
    for(i=0; i<k; i++)
    {
        if(a[i]=='Q')
        {
            for(j=i+1; j<k; j++)
            {
                if(a[j]=='A')
                {
                    for(l=j+1; l<k; l++)
                    {
                       if(a[l]=='Q')
                       {
                         cou++;
                       }
                    }
                }

            }
        }

    }
    cout<<cou<<endl;
}