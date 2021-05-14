#include <iostream>
using namespace std;
long long int N=100;
long long int seive[100];
void gen_modifiedsieve(){ 
seive[0]=seive[1]=1; 
for(int i=2;i<=N;i++)seive[i]=i; 
for(int i=2;i*i<=N;i++)
 { if(seive[i]==i) { 
for(int j=i*i;j<=N;j+=i) { 
if(seive[j]==j) { seive[j]=i; } } } } }
 int main() 
{	gen_modifiedsieve();
int co=0,pr[100],k;



    for(int i=0;i<100;i++) 
      if (seive[i]==2){pr[k]=i,k++;}
      cout<<"least factors of 2"<<k<<"\n";
     for(int i=0;i<k;i++)  
      if (pr[i] %11!=0) { cout<<pr[i]<<" ";co++;}
    cout <<"\n least prime factors not factors of 11 "<<co;
return 0;
}
