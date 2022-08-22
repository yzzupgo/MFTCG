#include<bits/stdc++.h>
using namespace std;

int main(void){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int t = 0;
	t += a + (a%10?10-(a%10):0);
	t += b + (b%10?10-(b%10):0);
	t += c + (c%10?10-(c%10):0);
	t += d + (d%10?10-(d%10):0);
	t += e + (e%10?10-(e%10):0);
	cout<<t<<'\n';
	return 0;
}
