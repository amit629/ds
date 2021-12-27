#include <iostream>
using namespace std;

int main() {
	int t,g,i,n,q,hd,tl;
	char s;
	cin>>t;
	while(t--!=0){
	   cin>>g;
	   while(g--!=0){
	       hd=tl=0;
	       cin>>i>>n>>q;
	       if(n%2==0){
	           hd=tl=n/2;
	       }
	       else{
	           if(n==1){
	               if(i==1){
	                   tl++;
	               }
	               else{
	                   hd++;
	               }
	           }
	           else{
	               if(i==1){
	                   tl=(n+1)/2;
	                   hd=(n-1)/2;
	               }
	               else{
	                   tl=(n-1)/2;
	                   hd=(n+1)/2;
	               }
	           }
	       }
	       if(q==1){
	           cout<<hd<<endl;
	       }
	       else{
	           cout<<tl<<endl;
	       }
	   }
	}
	return 0;
}
