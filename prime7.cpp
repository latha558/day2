#include <iostream>
using namespace std;
//  print  primes
   int a[100000];
   int N=100000;
   void gen_seive(){
       int i,j;
       for(i=0;i<N;i++) a[i]=1;
       a[0]=0;a[1]=0;
              for(i=2;i*i<N;i++){
       if (a[i]==1)
       {        for(j=i*i;j<=N;j+=i)
       
             a[j]=0;
       } }
   }
int main()
{
    gen_seive();
    int q=4,n,p[100000],ct,k=2,i,max=0;
    
   
    p[0]=p[1]=0;

    for(i=2;i<=N;i++)
    {
        if(a[i]==1)
        {   
            p[k]=i;
            k++;
            
        } 
     
     
    }
    
  while(q--)
  {
   cin>>n;
   for(i=2 ;i<=k && n!=1 ;i++)
    {  max=0; 
      if (n%p[i]==0)
        {  
            ct=0;
            while(n%p[i]==0)
            { n=n/p[i];
            ct++;
            }
          cout<<p[i]<<"^"<<ct<<"*"; 
          if (p[i]>max) max=p[i];
        }
        
        
       
        
    }
   cout<<n<<"\n";
   cout<< "Largest Prime Factor"<<max;
    }
    
    return 0;
}
