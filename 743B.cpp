#include<iostream>
#include<deque>
using namespace std;
int main ()
{
    deque<int>a,m;
    a.push_front(1);
    int aa,b,i,k=1,r;
    cin>>aa>>b;
    m=a;
    for(i=1;i<aa;i++)
    {
        k++;
        a.push_back(k);
        while(!m.empty())
        {
            r=m.front();
            m.pop_front();
            a.push_back(r);
        }
        m=a;
    }
    i=0;
    while(!a.empty()&&i!=b-1)
    {
        a.pop_front();
        i++;

    }
    cout<<a.front();

}