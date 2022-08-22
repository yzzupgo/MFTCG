#include <bits/stdc++.h>
#include <numeric>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,l,a,b,c,d;
cin >> n >> l;
a=n*(l-1)+(1/2)*n*(n+1);
for(int i=0;i<n;i++){
b=a-(l+i-1);
c=abs(a-b);
d=min(d,c);
}
cout << a-d << endl;
}
