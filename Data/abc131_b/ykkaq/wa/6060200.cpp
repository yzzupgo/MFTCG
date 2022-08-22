#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int i;
int sum=0;
int aji[200];
int near=101;
for(i=0;i<n;i++){
sum+=l;
if(abs(l)<abs(near)){
near=l;
}
l++;
}
cout << near << "," << sum<< endl;
cout << sum-near << endl;
}
