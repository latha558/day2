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
    int q=5,l,r,p[100];
    
    
    p[0]=p[1]=0;

    for(int  i=2;i<=101;i++)
    {
        if(a[i] ==1)
            
            p[i]=p[i-1]+i;
           
        else
            p[i]=p[i-1];
     
    }
    while(q--)
    {
    cout<<"Enter starting range";
    cin>>l;
    cout<<"Enter ending range";
    cin>>r;
    if(l<=r)
    {
        cout<<"sum="<<p[r]-p[l-1]<<"\n";
    }
    }
    return 0;
}
