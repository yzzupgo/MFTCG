#include<bits/stdc++.h>
using namespace std;
const int INF=1e7;
int a,b,c,d,e,_a,_b,_c,_d,_e,mini;
bool __a=true,__b=true,__c=true,__d=true,__e=true;
int main() {
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	_a=a%10;_b=b%10;_c=c%10;_d=d%10;_e=e%10;
	if(_a==0) _a=INF,__a=false;
	if(_b==0) _b=INF,__b=false;
	if(_c==0) _c=INF,__c=false;
	if(_d==0) _d=INF,__d=false;
	if(_e==0) _e=INF,__e=false;
	mini=min(min(_a,_b),min(min(_c,_d),_e));
	if(!__a) _a=10;
	if(!__b) _b=10;
	if(!__c) _c=10;
	if(!__d) _d=10;
	if(!__e) _e=10;
	printf("%d",a+b+c+d+e+50-_a-_b-_c-_d-_e-mini);
	return 0;
}
