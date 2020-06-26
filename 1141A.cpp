#include<bits/stdc++.h>
using namespace std;
long long int cou=-1;
void recursion(long long int a,long long int b,long long int c)
{
    if(a==b)
    {
      cou=c;
      return ;
    }
    if(a>b)
    {
        return ;
    }
    recursion(a*2,b,c+1);
    recursion(a*3,b,c+1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,f;
    cin>>a>>b;
    recursion(a,b,0);
    cout<<cou<<"\n";

}