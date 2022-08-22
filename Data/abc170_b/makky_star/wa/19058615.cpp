#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
string s,t;
int n,k, sum = 0 ;
bool judge = false;
cin >> n >> k;
for(int i=0;i < n;i++){
for(int j = 0; j < n; j++){
if((i * 2 + j * 4) == k){
judge = true;
cout << "Yes" << endl;
break;
}
}
if(judge == true)break;
}
if(judge == false)cout << "No" << endl;
}
