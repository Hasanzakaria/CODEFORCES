#include<bits/stdc++.h>
using namespace std;
long long int pre[200001];
vector<long long int>segTree[900000] ;
void mergee(long long int index,long long int indexLeft,long long int indexRight)
{
    long long int i, j;
    for (i = j = 0; i < segTree[indexLeft].size() && j < segTree[indexRight].size(); ) {
        if (segTree[indexLeft][i] <= segTree[indexRight][j]) {
            segTree[index].push_back(segTree[indexLeft][i]);
            ++i;
        }
        else {
            segTree[index].push_back(segTree[indexRight][j]);
            ++j;
        }
    }
    while (i < segTree[indexLeft].size()) {
        segTree[index].push_back(segTree[indexLeft][i]);
        ++i;
    }
    while (j < segTree[indexRight].size()) {
        segTree[index].push_back(segTree[indexRight][j]);
        ++j;
    }
}
void build_tree (long long int rangeLeft,long long int rangeRight,long long int index)
{
    if (rangeLeft == rangeRight) {
        segTree[index].push_back(pre[rangeLeft]);
        return;
    }
    long long int mid = (rangeLeft + rangeRight) / 2;
    build_tree(rangeLeft, mid, 2*index);
    build_tree(mid+1, rangeRight, 2*index+1);
    mergee(index, 2*index, 2*index+1);
}
long long int query_tree (long long int queryLeft, long long int queryRight,long long int X,long long int Y,long long  int rangeLeft,long long int rangeRight,long long  int index)
{
    if (queryRight < rangeLeft || rangeRight < queryLeft)
        return 0;
    if (queryLeft <= rangeLeft && rangeRight <= queryRight)
        return upper_bound(segTree[index].begin(), segTree[index].end(), Y) - lower_bound(segTree[index].begin(), segTree[index].end(), X);
    long long int mid = (rangeLeft + rangeRight) / 2;
    return query_tree(queryLeft, queryRight, X, Y, rangeLeft, mid, 2*index) + query_tree(queryLeft, queryRight, X, Y, mid+1, rangeRight, 2*index+1);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,t,i,f,u,sum=0;
    cin>>n>>t;
    for(i=1;i<=n;i++)
    {
        cin>>pre[i];
    }
    for(i=1;i<=n;i++)
    {
        pre[i]+=pre[i-1];
    }
    build_tree(0,n,1);
    for(i=1;i<=n;i++)
    {
      u=pre[i]-t;
      f=query_tree(0,i-1,u+1,1e16,0,n,1);
      sum+=f;
    }
    cout<<sum<<endl;


}