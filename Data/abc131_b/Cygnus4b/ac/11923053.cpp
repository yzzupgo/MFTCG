#include <bits/stdc++.h>
using namespace std;
int TasteOfApple(int N, int L){
vector<int>a(N);
int taste=0;
for(int i=0;i<N;i++){
a.at(i)=L+i-1+1;
taste += a.at(i);
}
sort(a.begin(),a.end());
if(a.at(N-1)<0){
taste -= a.at(N-1);
}
else{
for(int i=0;i<N;i++){
if(a.at(i)>=0){
taste -= a.at(i);
break;
}
}
}
return taste;
}
int main(){
int N,L; cin >> N >> L;
cout << TasteOfApple(N,L) << endl;
return 0;
}
