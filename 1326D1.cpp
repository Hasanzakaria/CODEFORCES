#include <bits/stdc++.h>
using namespace std;

int P[10000000];

// Transform S into new string with special characters inserted.
string convertToNewString(const string &s) {
    string newString = "@";

    for (int i = 0; i < s.size(); i++) {
        newString += "#" + s.substr(i, 1);
    }

    newString += "#$";
    return newString;
}

string longestPalindromeSubstring(const string &s) {
    string Q = convertToNewString(s);
    int c = 0, r = 0;                // current center, right limit

    for (int i = 1; i < Q.size() - 1; i++) {
        // find the corresponding letter in the palidrome subString
        int iMirror = c - (i - c);

        if(r > i) {
            P[i] = min(r - i, P[iMirror]);
        }

        // expanding around center i
        while (Q[i + 1 + P[i]] == Q[i - 1 - P[i]]){
            P[i]++;
        }

        // Update c,r in case if the palindrome centered at i expands past r,
        if (i + P[i] > r) {
            c = i;              // next center = i
            r = i + P[i];
        }
    }

    // Find the longest palindrome length in p.

    int maxPalindrome = 0;
    int centerIndex = 0;

    for (int i = 1; i < Q.size() - 1; i++) {

        if (P[i] > maxPalindrome) {
            maxPalindrome = P[i];
            centerIndex = i;
        }
    }


    return s.substr( (centerIndex - 1 - maxPalindrome) / 2, maxPalindrome);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,i,start,endd,j,u,cou,e,ans1,ans2;
    cin>>t;
    string s,tt,first,second,temp,ans,temp1;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        cou=0;
        tt=longestPalindromeSubstring(s);
        u=s.size();
        for(j=2;j<=2*u;j++)
        {
            e=P[j]/2;
            if(e==cou)
            {
                if(j%2==0)
                {
                    ans1=cou+cou+1;
                }
                else
                {
                    ans1=cou+cou;
                }
            }
            if(j%2==0)
            {
                cou++;
            }
        }
        cou=0;
        for(j=2*u;j>=2;j--)
        {
            e=P[j]/2;
            if(e==cou)
            {
                if(j%2==0)
                {
                    ans2=cou+cou+1;
                }
                else
                {
                    ans2=cou+cou;
                }
            }
            if(j%2==0)
            {
                cou++;
            }
        }
        for(j=0;j<2*u+6;j++)
        {
            P[j]=0;
        }
        tt.clear();
        if(ans1>ans2)
        {
            for(j=0;j<ans1;j++)
            {
                tt+=s[j];
            }
        }
        else
        {
           for(j=u-1;j>=0;j--)
           {
               if(ans2==0)
               {
                   break;
               }
               tt+=s[j];
               ans2--;
           }
        }
        start=0;
        endd=s.size()-1;
        while(start<endd)
        {
            if(s[start]==s[endd])
            {
                start++;
                endd--;
            }
            else
            {
                break;
            }
        }
        for(j=0;j<start;j++)
        {
            first+=s[j];
        }
        for(j=endd+1;j<s.size();j++)
        {
            second+=s[j];
        }
        for(j=start;j<=endd;j++)
        {
            temp+=s[j];
        }
        u=temp.size();
        temp1=longestPalindromeSubstring(temp);
        cou=0;
        temp1.clear();
        ans1=-1;
        ans2=-1;
        for(j=2;j<=2*u;j++)
        {
            e=P[j]/2;
            if(e==cou)
            {
                if(j%2==0)
                {
                    ans1=cou+cou+1;
                }
                else
                {
                    ans1=cou+cou;
                }
            }
            if(j%2==0)
            {
                cou++;
            }
        }
        cou=0;
        for(j=2*u;j>=2;j--)
        {
            e=P[j]/2;
            if(e==cou)
            {
                if(j%2==0)
                {
                    ans2=cou+cou+1;
                }
                else
                {
                    ans2=cou+cou;
                }
            }
            if(j%2==0)
            {
                cou++;
            }
        }
        if(ans1>ans2)
        {
            for(j=0;j<ans1;j++)
            {
                temp1+=temp[j];
            }
        }
        else
        {
           for(j=u-1;j>=0;j--)
           {
               if(ans2==0)
               {
                   break;
               }
               temp1+=temp[j];
               ans2--;
           }
        }
        for(j=0;j<2*u+6;j++)
        {
            P[j]=0;
        }
        ans=first+temp1+second;
        if(ans.size()>tt.size())
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<tt<<"\n";
        }
        first.clear();
        second.clear();
        temp.clear();
        tt.clear();
        temp1.clear();
    }
}