#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<n;i++)
#define ALL(a) (a).begin(),(a).end()
int main(){
ll n;
cin >> n;
ll m = n;
int k = 0;
while(m > 0){
m/=10;
k++;
}
ll sum = 0;
rep(i, k-1){
if((i+1)%2!=0){
sum += 9*pow(10, i);
}
}
if(k%2 != 0)sum += n - pow((ll)10, k-1) + 1;
cout << sum;
}
