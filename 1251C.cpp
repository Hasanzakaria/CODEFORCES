#include<bits/stdc++.h>
using namespace std;
vector<long long int>even,odd;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,r,p;
    string s;
    cin>>t;
    for(p=1;p<=t;p++)
    {
        cin>>s;
        k=s.size();
        for(j=0;j<k;j++)
        {
            r=s[j]-48;
            if(r%2==0)
            {
                even.push_back(r);
            }
            else
            {
                odd.push_back(r);
            }
        }
        i=0;
        j=0;
        while(i<even.size()&&j<odd.size())
        {
            if(even[i]<odd[j])
            {
                cout<<even[i];
                i++;
            }
            else
            {
                cout<<odd[j];
                j++;
            }
        }
        while(i<even.size())
        {
            cout<<even[i];
            i++;
        }
        while(j<odd.size())
        {
            cout<<odd[j];
            j++;
        }
        even.clear();
        odd.clear();
        cout<<"\n";
    }

}