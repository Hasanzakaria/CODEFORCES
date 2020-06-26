#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char jak[51],tak[51],fak[51];
    cin>>jak;
    int k,i,j,cou=1;
    k=strlen(jak);
    for(i=0;i<k;i++)
    {
        fak[i]=jak[i];
    }
    fak[i]='\0';
    for(i=0;i<k;i++)
    {
        tak[0]=jak[k-1];
        for(j=1;j<k;j++)
        {
            tak[j]=jak[j-1];
        }
        tak[j]='\0';
        if(strcmp(fak,tak))
        {
            cou++;
            for(j=0;j<k;j++)
            {
                jak[j]=tak[j];
            }
            jak[j]='\0';
        }
    }
    cout<<cou;

}