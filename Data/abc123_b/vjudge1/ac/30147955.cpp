#include<bits/stdc++.h>
using namespace std;
#define maxn 1000005
int a[5];

int main(){
	for(int i = 0;i < 5;i++){
		scanf("%d",&a[i]);
	}
	int ans = INT_MAX;
	sort(a, a + 5);
	do{
		int last = 0;
	    for(int i = 0;i < 5;i++){
	    	last += a[i];
	    	if(i != 4)
	    	last = (last + 9) / 10 * 10;
		}
		ans = min(ans, last);
	}while(next_permutation(a, a + 5));
	printf("%d\n", ans);
}