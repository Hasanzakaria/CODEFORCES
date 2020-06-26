#include<bits/stdc++.h>
using namespace std;
long long int ara[200000];
vector<long long int>segTree[800000] ;
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
        segTree[index].push_back(ara[rangeLeft]);
        return;
    }
    long long int mid = (rangeLeft + rangeRight) / 2;
    build_tree(rangeLeft, mid, 2*index);
    build_tree(mid+1, rangeRight, 2*index+1);
    mergee(index, 2*index, 2*index+1);
}
int query_tree (int queryLeft, int queryRight, int X, int Y, int rangeLeft, int rangeRight, int index)
{
    if (queryRight < rangeLeft || rangeRight < queryLeft)
        return 0;
    if (queryLeft <= rangeLeft && rangeRight <= queryRight)
        return upper_bound(segTree[index].begin(), segTree[index].end(), Y) - lower_bound(segTree[index].begin(), segTree[index].end(), X);
    int mid = (rangeLeft + rangeRight) / 2;
    return query_tree(queryLeft, queryRight, X, Y, rangeLeft, mid, 2*index) + query_tree(queryLeft, queryRight, X, Y, mid+1, rangeRight, 2*index+1);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,l,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        ara[i]=min(ara[i],n);
    }
    build_tree(0,n-1,1);
    for(i=n-2;i>=0;i--)
    {
        l=ara[i]-(i+1);
        if(l>0)
        {
            sum+=query_tree(i+2-1,i+1+l-1,i+1,n,0,n-1,1);
        }
    }
    cout<<sum<<"\n";

}