#include<bits/stdc++.h>
using namespace std;
int main(){
int N,count = 0;
cin >> N;
for(int i = 1;i <= N;i ++){
if(i < 10 || (i >= 100 && 999 >= i) || (i >= 10000 && 99999 >= i)){
count ++;
}
}
cout << count << endl;
}
