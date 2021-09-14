#include <bits\stdc++.h>
using namespace std;
#define ll long long

int32_t mod = 1e9 + 7;
 vector<double> a;
void pog(double c, double m, double p, double v,double prob,ll num)
{   
    a.push_back(num*prob*p);
    
   
    if (abs(c) > v)
    {   
        
        
        pog(c-v,abs( m+(v/2.0)), abs(p+((v) / 2.0)), v,prob*c,num+1);
    }
    else if (abs(c) > 1e-9)
    {       
           pog(0, abs(m+(c/2.0)), abs(p+(c/2.0)), v,prob*c,num+1);
    }
    
     if (abs(m) > v)
    {   
        
        pog(abs(c+((v) / 2.0)),m-v, abs(p+(v / 2.0)), v,prob*m,num+1);
    }
    else if (abs(m) >  1e-9)
    {       
           pog(abs(c+(m  / 2.0)),0,abs( p+(m  / 2.0)), v,prob*m,num+1);
    }
   
    
    
    
}
void solveCase()
{
    ll n = 0;
    a.clear();

    cin >> n;
    double c, m, p, v;
    cin >> c >> m >> p >> v;
   
    pog(c,m,p,v,1,1);
    double sum=0;
    

    for(auto it : a){
        sum+=it;
       
        
       
    }

    cout<<sum;
    cout << "\n";

    
}
int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}