#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
int box[200];
int MIN = INT_MAX;
cin >> n >> l;
for(int i = 1; i <= n; i++) box[i-1]=l+i-1;
for(int i = 0; i < n; i++){
int sum = 0;
for(int j = 0; j < n; j++){
if(i != j) sum += box[j];
}
MIN = min(MIN,abs(box[i]-sum));
}
cout << MIN << endl;
return 0;
}
