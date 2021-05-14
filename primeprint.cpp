#include <iostream>
using namespace std;
long long int N=1000001;
long long int seive[1000001];
void gen_modifiedsieve(){ 
seive[0]=seive[1]=1; 
for(int i=2;i<=N;i++)seive[i]=i; 
for(int i=2;i*i<=N;i++)
 { if(seive[i]==i) { 
for(int j=i*i;j<=N;j+=i) { 
if(seive[j]==j) { seive[j]=i; } } } } }
 int main() 
{	gen_modifiedsieve();
	int q,max;
int b[100];
	cin>>q;
	while(q--)	{	 
int n,c=0,co=1;	 cin>>n;

while(n!=1)

	 {	 
b[c]=seive[n];

c++;
 n=n/seive[n];
}
 for(int i=0;i<c;i++)
{ if (b[0]!=2) cout<<"2^0";
   if (b[i]==b[i+1]) co++;
    else { cout<<b[i]<<" ^ "<<co<<" ";
    co=1;}
}
}
return 0;}
