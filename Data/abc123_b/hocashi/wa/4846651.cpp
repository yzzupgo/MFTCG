#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	int sum= 0;
	sum+=a;
	if(sum%10==0){
		sum += 0;
	}
	else{
		sum += (10-(sum%10));
	}
	sum+=b;
	if(sum%10==0){
		sum += 0;
	}
	else{
		sum += (10-(sum%10));
	}
	sum+=c;
	if(sum%10==0){
		sum += 0;
	}
	else{
		sum += (10-(sum%10));
	}
	sum+=d;
	if(sum%10==0){
		sum += 0;
	}
	else{
		sum += (10-(sum%10));
	}
	sum+=e;
	cout << sum;
	return 0;
} 