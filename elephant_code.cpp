#include <iostream>
using namespace std;
char *set_ch(char *arr,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(arr[j]=='H'){
                arr[j]='T';
            }
            else{
                arr[j]='H';
            }
        }
    }
    return arr;
}
// int *coun(char*arr,int n){
//     int i,*ar[2];
//     ar[0]=ar[1]=0;
//     for(i=0;i<n;i++){
//         if(arr[i]=='H'){
//             ar[0]++;
//         }
//         else{
//             ar[1]++;
//         }
//     }
// }
int main() {
	long t,g,i,n,q,k,hd,tl;
	char *arr;
	cin>>t;
	while(t--!=0){
	    cin>>g;
	    while(g--!=0){
	        i=n=q=k=hd=tl=0;
	        cin>>i>>n>>q;
	        char s;
	        if(i==1){
	            s='H';
	        }else if(i==2){
	            s='T';
	        }
	        arr=new char[n];
	        for(k=0;k<n;k++){
	            arr[k]=s;
	        }
	        char *ar=set_ch(arr,n);
	        for(k=0;k<n;k++){
	            if(ar[k]=='H'){
	                hd++;
	            }
	            else{
	                tl++;
	            }
	        }
	        if(q==1){
	            cout<<hd<<endl;
	        }
	        else if(q==2){
	            cout<<tl<<endl;
	        }
	    }
	}
	return 0;
}
