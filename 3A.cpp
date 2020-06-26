#include<iostream>
#include<queue>
#include<utility>
using namespace std;
bool vis[9][9];
int fx[]={1,-1,0,0,1,1,-1,-1};
int fy[]={0,0,1,-1,1,-1,1,-1};
int row=8,column=8;
int level[9][9];
int parent_row[9][9];
int parent_column[9][9];
void bfs(int x,int y)
{
    int t,ya,i,tx,ty;
    vis[x][y]=1;
    queue<pair<int,int> >a;
    a.push(pair<int,int>(x,y));
    while(!a.empty())
    {
       pair<int,int>r;
       r=a.front();
       t=r.first;
       ya=r.second;
       a.pop();
       for(i=0;i<8;i++)
       {
           tx=t+fx[i];
           ty=ya+fy[i];
           if((tx>0&&tx<=8)&&(ty>0&&ty<=8)&&vis[tx][ty]==0)
           {
               vis[tx][ty]=1;
               level[tx][ty]=level[t][ya]+1;
               a.push(pair<int,int>(tx,ty));
               parent_row[tx][ty]=t;
               parent_column[tx][ty]=ya;
           }

       }

    }
}
int main ()
{
    int k,r,t,m,s,i,aa,bb,c,d;
    string a,b;
    cin>>a>>b;
    if(a[0]=='a')
    {
        k=1;
    }
    else if(a[0]=='b')
    {
        k=2;
    }
    else if(a[0]=='c')
    {
        k=3;
    }
    else if(a[0]=='d')
    {
        k=4;
    }
    else if(a[0]=='e')
    {
        k=5;
    }
    else if(a[0]=='f')
    {
        k=6;
    }
    else if(a[0]=='g')
    {
        k=7;
    }
    else if(a[0]=='h')
    {
        k=8;
    }
    r=a[1]-48;
    bfs(r,k);
    if(b[0]=='a')
    {
        t=1;
    }
    else if(b[0]=='b')
    {
        t=2;
    }
    else if(b[0]=='c')
    {
        t=3;
    }
    else if(b[0]=='d')
    {
        t=4;
    }
    else if(b[0]=='e')
    {
        t=5;
    }
    else if(b[0]=='f')
    {
        t=6;
    }
    else if(b[0]=='g')
    {
        t=7;
    }
    else if(b[0]=='h')
    {
        t=8;
    }
    m=b[1]-48;
    cout<<level[m][t]<<endl;
    s=level[m][t];
    for(i=1;i<=s;i++)
    {
        aa=parent_row[m][t];
        bb=parent_column[m][t];
        c=aa-m;
        d=bb-t;
        if(c==1&&d==-1)
        {
            cout<<"RD"<<endl;
        }
        else if(c==-1&&d==1)
        {
            cout<<"LU"<<endl;
        }
        else if(c==-1&&d==-1)
        {
            cout<<"RU"<<endl;
        }
        else if(c==1&&d==1)
        {
            cout<<"LD"<<endl;
        }
        else if(c==-1&&d==0)
        {
            cout<<"U"<<endl;
        }
        else if(c==1&&d==0)
        {
            cout<<"D"<<endl;
        }
        else if(c==0&&d==-1)
        {
            cout<<"R"<<endl;
        }
        else if(c==0&&d==1)
        {
            cout<<"L"<<endl;
        }
        m=parent_row[m][t];
        t=parent_column[m][t];
    }

}