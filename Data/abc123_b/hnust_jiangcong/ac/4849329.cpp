#include<bits/stdc++.h>
using namespace std ;

int main()
{
	int a[10],k;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int sum = 0 , mi = 1000;
	for(int i=0;i<5;i++){
		int s = a[i]%10;
		if(s<mi&&s!=0){
			mi = s ;
		}
		if((a[i]/10)==0){
			sum +=10;
			continue;
		}
		if(s!=0){
			sum = sum + a[i]/10*10 + 10;
		}else {
			sum += a[i];
		}
		//cout<<sum<<endl;
	}
	if(mi==1000) cout<<sum<<endl; 
	else cout<<sum-10 + mi<<endl; 
	return 0;
}