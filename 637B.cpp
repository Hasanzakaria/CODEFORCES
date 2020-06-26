#include<iostream>
#include<stack>
#include<map>
using namespace std;
int main ()
{
    stack<string>a;
    map<string,int>mp;
    map<string,int>::iterator k;
    int n,i;
    string c,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>c;
        a.push(c);
        mp.insert(make_pair(c,1));
    }
    while(!a.empty())
    {
        b=a.top();
        k=mp.find(b);
        if(k->second==1)
        {
            cout<<b<<endl;
            k->second=0;
        }
        a.pop();

    }


}