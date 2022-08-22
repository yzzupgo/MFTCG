#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int count=0;
vector<int> taste(n);
for(int i=0;i<n;i++){
taste.at(i)=l+i;
count += taste.at(i);
}
sort(taste.begin(),taste.end());
cout << count-taste.at(0) << endl;
}
