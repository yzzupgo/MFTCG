#include <bits/stdc++.h>
using namespace std;
int keta_kount(int x){
int keta_count = 0;
while(x > 0){
keta_count++;
x /=10;
}
return keta_count;
}
int main(){
int N;
cin >> N;
int all_count= 0;
for(int i = 1;i<N;i++){
if(keta_kount(i)%2 != 0){
all_count++;
}
}
cout << all_count<<endl;
}
