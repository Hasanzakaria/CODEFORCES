#include<iostream>
using namespace std;
int main ()
{
    int k,flag=0,i;
    string a,b;
    cin>>a>>b;
    k=a.size();
    for(i=0;i<k;i++)
    {
        if(b[i]>a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
}