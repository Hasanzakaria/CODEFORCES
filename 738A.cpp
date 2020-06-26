#include<iostream>
using namespace std;
int main ()
{
    int n,i;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='o')
        {
            if(a[i+1]=='g')
            {
                if(a[i+2]=='o')
                {
                    i=i+2;
                    for( ; ; )
                    {
                        if(a[i+1]=='g')
                        {
                            if(a[i+2]=='o')
                            {
                                i=i+2;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else
                        {
                          break;
                        }
                    }
                    cout<<"***";
                }
                else
                {
                    cout<<a[i];
                }

            }
            else
            {
                cout<<a[i];
            }
        }
        else
        {
          cout<<a[i];
        }

    }

}