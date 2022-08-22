#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int count=0;
int ans=0;
vector<int> taste(n);
for(int i=0;i<n;i++){
taste.at(i)=l+i;
count += taste.at(i);
if(taste.at(n-1)<0){
ans=1;
}else if(taste.at(i)==0){
ans=2;
}}
if(ans==0){
cout << count-taste.at(0) << endl;
}else if(ans==1){
cout << count-taste.at(n-1) << endl;
}else{
cout << count << endl;
}
}
