#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>::iterator l;
vector<string>tp;
vector<string>::iterator u;
bool cmp(string &a,string &b)
{
    long long int k,l,i;
    k=a.size();
    l=b.size();
    if(k<l)
    {
        return 1;
    }
    else if(k==l)
    {
        for(i=0;i<k;i++)
        {
            if(a[i]<b[i])
            {
                return 1;
            }
            else if(b[i]<a[i])
            {
                return 0;
            }
        }
    }
    return 0;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,r,f,carry,j,x,y;
    string s;
    cin>>n;
    string a;
    cin>>a;
    char ch;
    if(n%2==0)
    {
        k=n/2;
        if(a[k]!='0')
        {
            v.push_back(k);
        }
        for(i=k+1;i<n;i++)
        {
            if(a[i]!='0')
            {
                v.push_back(i);
                break;
            }
        }
        for(i=k-1;i>=1;i--)
        {
            if(a[i]!='0')
            {
                v.push_back(i);
                break;
            }
        }
    }
    else
    {
        k=n/2;
        for(i=k;i>=1;i--)
        {
            if(a[i]!='0')
            {
                v.push_back(i);
                break;
            }
        }
        for(i=k+1;i<n;i++)
        {
            if(a[i]!='0')
            {
                v.push_back(i);
                break;
            }
        }

    }
    for(l=v.begin();l!=v.end();l++)
    {
        r=*l;
        f=max(n-r,r-0);
        carry=0;
        i=r-1;
        j=n-1;
        while(f)
        {
            f--;
            if(i<0)
            {
                x=(a[j]-48)+carry;
                y=x%10;
                carry=x/10;
                ch=y+48;
                s=ch+s;
                j--;
                continue;
            }
            else if(j<r)
            {
               x=(a[i]-48)+carry;
               y=x%10;
               carry=x/10;
               ch=y+48;
                s=ch+s;
                i--;
                continue;
            }
            x=(a[i]-48)+(a[j]-48);
            x+=carry;
            y=x%10;
            carry=x/10;
            ch=y+48;
            s=ch+s;
            i--;
            j--;
        }
        tp.push_back(s);
        s.clear();
    }
    sort(tp.begin(),tp.end(),cmp);
    cout<<tp[0]<<"\n";


}