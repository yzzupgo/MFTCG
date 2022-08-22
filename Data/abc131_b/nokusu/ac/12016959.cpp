#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l,taste,mini = 1000,min_num;
cin >> n >> l;
taste = (n * (n+1))/2 + n * (l - 1);
for(int i = l;i < n + l;i++){
if(mini > abs(i)){
mini = abs(i);
min_num = i;
}
}
cout <<taste - min_num << endl;
}
