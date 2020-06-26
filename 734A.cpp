#include<iostream>
using namespace std;
int main ()
{
    int n,i,r=0,p=0;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
          r++;
        }
        else
        {
           p++;
        }
    }
    if(r>p)
    {
        cout<<"Anton";
    }
    else if(p>r)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }


}