#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, a1, b1;
        cin >> a >> b;
        a1 = a;
        b1 = b;
        string s;
        cin >> s;
        for (ll i = 0; i < a1 + b1; i++)
        {
            if (s[i] == '0')
                a--;
            if (s[i] == '1')
                b--;
        }
       // cout<<a<<" "<<b<<endl;
        char c;
 
        ll front = 0, back = a1 + b1 - 1;
        while (front <=back && (a>0 || b>0))
        {
            if (s[back] == '?')
            {
                if (s[front] == '?')
                {
                    if (a > b)
                    {
                        c = '0';
                        if(front==back || a==1)a--;
                        else
                        a-=2;
                    }
                    
                    else {
                        c = '1';
                        if(front==back || b==1)b--;
                        else
                        b-=2;
                        }
                    s[front] = c;
                    s[back] = c;
                }
                else if (s[front] == '1')
                {
                    s[back] = '1';
                    b--;
                }
                else
                {
                    s[back] = '0';
                    a--;
                }
            }
            else if (s[front] == '?')
            {
                if (s[back] == '?')
                {
                    if (a > b )
                    {
                        c = '0';
                        if(front==back || a==1) a--;
                        else
                        a-=2;
                    }
                    else {
                        c = '1';
                        if(front==back || b==1) b--;
                        else
                        b-=2;
                        }
                    s[front] = c;
                    s[back] = c;
                }
                else if (s[back] == '1')
                {
                    s[front] = '1';
                    b--;
                }
                else
                {
                    s[front] = '0';
                    a--;
                }
            }
            front++;
            back--;
        }
        
        int k=0;
        front=0;
        back=a1+b1-1;
 
        while (front <= back){
            if(s[front]!=s[back]) {k=1; break; }
            if(s[front]=='?' || s[back]=='?'){k=1; break; } 
            front++;
            back--;
        }
       // cout<<a<<" "<<b<<endl<<s<<endl;
        if(a!=0 || b!=0) k=1;
        if(k==1) cout<<-1<<endl;
        else cout<<s<<endl;
    }
 
    return 0;
}
