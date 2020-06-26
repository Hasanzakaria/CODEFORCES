#include<iostream>
using namespace std;
int main ()
{
    float c=0,r,t,m;
    int a,b,i,cou=0;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
      cin>>r;
      c+=r;
    }
    m=b-0.5;
    for( ; ; )
    {
        t=c/a;
        if(t>=m)
        {
            break;
        }
        c+=b;
        a++;
        cou++;
    }
    cout<<cou<<endl;

}