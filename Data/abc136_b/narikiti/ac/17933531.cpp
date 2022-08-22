#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#define rep(i,n) for(int i = 0; i <= n; i++)
#define rep_1(i,n) for(int i = 0; i < n; i++)
using namespace std;
int main(){
int n;
cin >> n;
int cnt=0;
for(int s=1;s<=n;s++){
if( (10<=s&&s<100) ||(1000<=s&&s<10000)||s==100000){
}else{
cnt++;
}
}
cout << cnt << endl;
return 0;
}
