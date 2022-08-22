#include<bits/stdc++.h>
using namespace std;
int n,l,arr[400],sum;
int main(){
scanf("%d%d",&n,&l);
for(int i =1;i<=n;i++){
arr[i-1] = i+l-1;
sum+=arr[i-1];
}
sort(arr,arr+n);
if(arr[0]<0 && arr[n-1]<0) printf("%d\n",sum-arr[n-1]);
else if(arr[0]>0 && arr[n-1]>0) printf("%d\n",sum-arr[0]);
else printf("0\n");
return 0;
}
