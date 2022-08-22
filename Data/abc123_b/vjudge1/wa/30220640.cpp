#include<bits/stdc++.h>
using namespace std;
int a[10];
bool vis[10];
int res=1000;
int cur;
int main() {
	for(int i=0;i<5;i++) cin>>a[i];
	for(int k1=0;k1<5;k1++){
		vis[k1]=1;
		cur=a[k1];
		if(cur%10!=0) cur=(cur/10+1)*10;
		for(int k2=0;k2<5;k2++){
			if(vis[k2]) continue;
			vis[k2]=1;
			cur+=a[k2];
			if(cur%10!=0) cur=(cur/10+1)*10;
			for(int k3=0;k3<5;k3++){
				if(vis[k3]) continue;
				vis[k3]=1;
				cur+=a[k3];
				if(cur%10!=0) cur=(cur/10+1)*10;
				for(int k4=0;k4<5;k4++){
					if(vis[k4]) continue;
					vis[k4]=1;
					cur+=a[k4];
					if(cur%10!=0) cur=(cur/10+1)*10;
					for(int k5=0;k5<5;k5++){
						if(vis[k5]) continue;
						cur+=a[k5];
						
						if(cur<res) res=cur;
						vis[k5]=0;
					}
					vis[k4]=0;
				}
				vis[k3]=0;
			}
			vis[k2]=0;
		}
		vis[k1]=0;
	}
	cout<<res;
	return 0;
}