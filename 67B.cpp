#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int value;
    node *next;
};
node *root;
long long int k;
void add(long long int m,long long int n)
{
    if(root==NULL)
    {
        root=new node();
        root->value=m;
        root->next=NULL;
    }
    else
    {
        node *temp,*crt,*i;
        temp=root;
        i=NULL;
        while(n!=0)
        {
            i=temp;
            if(temp->value>=m+k)
            {
                n--;
            }
            temp=temp->next;
        }
        if(temp==NULL)
        {
            crt=new node();
            crt->value=m;
            crt->next=NULL;
            i->next=crt;
        }
        else if(i==NULL)
        {
           crt=new node();
           crt->value=m;
           crt->next=root;
           root=crt;
        }
        else
        {
           crt=new node();
           crt->value=m;
           crt->next=temp;
           i->next=crt;
        }

    }
}
void print()
{
    node *temp;
    temp=root;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    root=NULL;
    for(i=n-1;i>=0;i--)
    {
        add(i+1,ara[i]);
    }
    print();
}