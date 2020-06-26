#include<iostream>
using namespace std;
int main ()
{
    int a,b,i=0,k=1;
    cin>>a>>b;
    for( ; ; )
    {
       if(i%2==0)
       {
         a-=k;
         if(a<0)
         {
             cout<<"Vladik";
             break;
         }
       }
       else
       {
           b-=k;
           if(b<0)
           {
               cout<<"Valera";
               break;
           }
       }
       k++;
       i++;
    }
}