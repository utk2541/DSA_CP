#include<bits/stdc++.h>
using namespace std;
 

int main()  
{  
int t,a,rem,sum,sum1,num,temp;
cin>>t;
while(t>0){
   cin>>a;
   sum1=0;
   num=0;
   int f=0;
   while(sum1<a){
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
   temp=num-1;
  
   int b[10];
   for(int i=0;i<10;i++) b[i]=0;
   while(temp>0){
        
         rem=temp%10;
        
         for(int i=0;i<10;i++)
         if(i==rem)
         b[rem]++;
         temp=temp/10;
        } 
    for(int i=0;i<10;i++)
    if(b[i]>1)
    f=0;
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