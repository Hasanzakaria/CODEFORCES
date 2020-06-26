#include<iostream>
using namespace std;
int main ()
{
    int n,m,i,k,r;
    cin>>n>>m;
    for(i=1; ;i++)
    {
        k=n*i;
        r=k%10;
        if(r==m||r==0)
        {
            break;
        }
    }
    cout<<i;

}