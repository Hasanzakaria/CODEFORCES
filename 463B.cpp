#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>a;
    vector<int>::iterator r;
    int n,i,k,f,j=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    r=a.begin();
    f=*r;
    for( ;r!=a.end()-1;r++)
    {
       j=j+(*r-*(r+1));
       if(j<0)
       {
           j=-j;
           f+=j;
           j=0;
       }
    }
    cout<<f;


}