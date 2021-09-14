#include<bits/stdc++.h>
using namespace std;
 

int main()  
{  
int t,a,rem,sum,sum1,num,temp;
cin>>t;
while(t>0){
   cin>>a;
   sum1=0;
   num=1;
   int f=0;
   while(sum1<=a){
      sum=0;
      temp=num;
      while(temp>0){
         rem=temp%10;
         sum+=rem;
         temp=temp/10;
        } 
        sum1=sum;
        if(sum1==a)
        f=1;
    num++;
        
      


   }
   if(f==1)
   cout<<num-1;
   else
   {
       cout<<-1;
   }
   



cout<<endl;
    t--;
}
   
    return 0;  
} 