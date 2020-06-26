#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,k,coun=0,r,j,f,p=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    cin>>k;
    pair<int,int>jak[k];
    for(i=0;i<k;i++)
    {
        cin>>jak[i].first;
        jak[i].second=i+1;
    }
    sort(jak,jak+k);
    pair<int,int>faq[k];
    for(i=0;i<k;i++)
    {
        r=jak[i].first;
        for(j=coun;j<n;j++)
        {
             if(r>=ara[j])
             {
                coun++;
             }
             else
             {
                faq[i].first=jak[i].second;
                faq[i].second=coun;
                p+=1;
                break;
             }
        }
        if(coun==n)
        {
           faq[i].first=jak[i].second;
           faq[i].second=coun;
        }

    }
    sort(faq,faq+k);
    for(i=0;i<k;i++)
    {
        cout<<faq[i].second<<"\n";
    }
}