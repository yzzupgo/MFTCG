#include <bits/stdc++.h>
using namespace std;

int main(){
	int m = 0;
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	int sum= 0;
	int a1 = 10-a%10;
	int b1 = 10-b%10;

	int c1 = 10-c%10;

	int d1 = 10-d%10;

	int e1 = 10-e%10;
if(a1>m){
	m = a1;
}
if(b1>m){
	m = b1;
}
if(c1>m){
	m = c1;
}
if(d1>m){
	m = d1;
}
if(e1>m){
	m = e1;
}
if(m==10){
	m = 0;
}
	sum+=a;
	sum+=b;
	sum+=c;
	sum+=d;
	sum+=e;
	cout << sum+a1+b1+c1+d1+e1-m;
	return 0;
} 