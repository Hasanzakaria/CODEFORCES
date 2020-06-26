#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i;
    cin>>n;
    if(n==1||n==2)
    {
        cout<<1<<endl<<1;
    }
    else if (n==3)
    {
        cout<<2<<endl<<1<<" "<<3;
    }
    else
    {
       cout<<n<<endl;
       for(i=1;i<=n;i++)
       {
           if(i%2==0)
           {
               cout<<i<<" ";
           }
       }
       for(i=1;i<=n;i++)
       {
           if(i%2!=0)
           {
               cout<<i<<" ";
           }
       }

    }
}