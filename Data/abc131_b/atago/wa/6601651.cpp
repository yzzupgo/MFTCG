#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l;
int min = 101;
int sum =0;
cin >> n;
cin >> l;
vector<int> vec(n);
for (int i = 0; i < n; i++) {
vec.at(i)=i+l;
}
for(int i=0;i<n;i++){
sum+=vec.at(i);
if(vec.at(i)==0){
min=0;
}
if(abs(vec.at(i))<=min){
min = vec.at(i);
}
}
cout << sum-min<<endl;
}
