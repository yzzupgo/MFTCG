#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin >> n >>l;
vector<int>a(n);
int answer=0;
int m =1000001;
for(int i=0; i<n; i++){
a[i]=l+(i+1)-1;
answer+=l+(i+1)-1;
}
sort(a.begin(),a.end());
for (int i=0;i<n;i++) {
if(a[i]>=0){
m=a[i];
break;
}
}
if(m==1000001){
m=a[n-1];
}
cout <<answer-m <<endl;
for (int i=0;i<a.size();i++) {
cout <<a[i] <<" " ;
}
}
