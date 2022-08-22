#include<iostream>
#define INF 1000000000
using namespace std;
int main(){
int i, n;
int former = 0;
cin >> n;
int a[n + 1];
for(i = 0; i < n + 1; i++){
a[i] = INF;
}
for(i = 0; i < n; i++){
cin >> a[i];
}
for(i = 0; i < n - 1; i++){
if(former < a[i]){
a[i] -= 1;
}
former = a[i];
}
int flag = 0;
for(i = 0; i < n - 1; i++){
if(a[i] > a[i + 1]){
flag = 1;
break;
}
}
if(flag == 0 || n == 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
