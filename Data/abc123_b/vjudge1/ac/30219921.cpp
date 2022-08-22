#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;
long long a[maxn];
int main(){
	int f = 1;
	for(int i = 1; i <= 5; i ++){
		scanf("%lld",&a[i]);
		if(a[i] % 10 < a[f] % 10 && a[i] % 10 != 0){
			f = i;
		}
	}
	int ans = 0;
	for(int i = 1; i <= 5; i ++){
		if(i != f){
			ans += (a[i] + 9) / 10 * 10;
		}else{
			ans += a[i];
		}
	}
	printf("%d\n",ans);
	return 0;
}