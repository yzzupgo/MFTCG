#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define rep(i,n) for(int i = 0; i < (long int)n; i++)
using namespace std;
int main(){
int n,count = 0,i=1,j=1,k,l;
cin >> n;
while(i<=n){
i++;
count++;
l=i;
k = 0;
while(l>0){
l/=10;
k++;
}
if(k%2 == 0){
i*=10;
j++;
}
}
cout << count;
return 0;
}
