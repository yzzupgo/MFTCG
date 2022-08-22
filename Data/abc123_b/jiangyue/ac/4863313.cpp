    #include<bits/stdc++.h>
    using namespace std;
    const int INF=10;
    int a,b,c,d,e,_a,_b,_c,_d,_e,mini=0;
    bool __a=true,__b=true,__c=true,__d=true,__e=true;
    int main() {
    	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    	_a=a%10;_b=b%10;_c=c%10;_d=d%10;_e=e%10;
    	if(_a==0) _a=INF;
    	if(_b==0) _b=INF;
    	if(_c==0) _c=INF;
    	if(_d==0) _d=INF;
    	if(_e==0) _e=INF;
    	mini=min(min(_a,_b),min(min(_c,_d),_e));
    	printf("%d",a+b+c+d+e+50-_a-_b-_c-_d-_e+mini-10);
    	return 0;
    }