#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int n, l;
cin >> n >> l;
int sum = 0;
int mini = 1000;
rep(i, n){
sum += l+i;
if(abs(l+i) < abs(mini)) mini = l+i;
}
cout << sum - mini << endl;
}
