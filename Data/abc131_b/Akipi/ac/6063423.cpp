#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
int x=0;
int y;
cin >> n >> l;
vector<int> d(n);
for(int i=0;i<n;i++){
d[i]=l+i;
x +=d[i];
}
int a=500;
for(int i=0;i<n;i++){
if(abs(d[i])<=a){
a=abs(d[i]);
y=d[i];
}
}
cout<< x-y << endl;
}
