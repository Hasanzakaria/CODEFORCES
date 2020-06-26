#include<bits/stdc++.h>
 
using namespace std;
 
#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define ULL unsigned long long
const int N=6*100005;
 
ULL H[N],power[N];
ULL p=3797;
string s1,s2;
string abc="abc";
vector<string>v;
map<ULL,string>mp;
void Hash(string str)
{
    int n=str.size();
    H[0]=0;
    for(int i=1; i<n; i++)H[i]=H[i-1]*p+str[i];
    mp[H[n-1]]=str;
 
}
int cmp(string str)
{
    int n=str.size();
    H[0]=0;
    for(int i=1; i<n; i++)H[i]=H[i-1]*p+str[i];
    for(int i=1; i<n; i++)
    {
        //ULL hs= ;
        for(int j=0; j<3; j++)
        {
            if(abc[j]==str[i])continue;
            ULL hss=H[n-1]+power[n-1-i]*(abc[j]-str[i]);
            map<ULL,string>:: iterator it;
            it=mp.find(hss);
            if(it!=mp.end())
            {
                string S=it->second;
                int dif=0;
                for(int k=0; k<str.size(); k++)
                {
 
                    if(str[k]!=S[k])dif++;
                }
                if(dif==1)return 1;
            }
        }
    }
    return 0;
}
 
int main()
{
    FastRead
    int i,j,k,x,y,z,n,m;
    string str,s;
 
    power[0]=1;
    for(i=1; i<N; i++)power[i]=power[i-1]*p;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        s="0";
        cin>>str;
        s+=str;
        Hash(s);
    }
    for(i=0; i<m; i++)
    {
        s="0";
        cin>>str;
        s+=str;
        if(cmp(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
}