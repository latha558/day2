 #include <iostream>
using namespace std;
//  print  primes
   int a[101];
   int N=101;
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
    int q=4,n,p[100],ct,k=2,i;
    
   
    p[0]=p[1]=0;

    for(i=2;i<=101;i++)
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
    {   
      if (n%p[i]==0)
        {  
            ct=0;
            while(n%p[i]==0)
            { n=n/p[i];
            ct++;
            }
          cout<<p[i]<<"^"<<ct<<"*"; 
        }
        
        
       
        
    }
   cout<<n<<"\n";
    }
    return 0;
}
