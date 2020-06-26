#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,cou=0;
    cin>>a>>b>>c;
    for( ; ; )
    {
        a--;
        b=b-2;
        c=c-4;
        if(a>=0&&b>=0&&c>=0)
        {
          cou=cou+7;
        }
        else
        {
            break;
        }
    }
    cout<<cou;
}