#include<bits/stdc++.h>
using namespace std;
long long  a[6],b[6],n=5,sum,mn=333339;
int main(){
	for(int i=0;i<n;i++){
    	cin>>a[i];
		b[i]=a[i]%10;
	}
	for(int i=0;i<n;i++){
		if(b[i]!=0)
    	mn = min(b[i],mn);
	}
	for(int i=0; i<n; i++){
		if(b[i] == mn){
			sum += a[i];
			a[i] = 0;
			break;
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]%10 != 0)
    		sum += a[i] +10 - a[i]%10;
    	else
    		sum += a[i];
	}
	cout<<sum;
}
//FELAROSSO and aceka.b 2019 