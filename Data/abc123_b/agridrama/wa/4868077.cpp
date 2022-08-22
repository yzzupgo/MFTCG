#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[5];
  int answer = 0;
  int min = 10;
  for(int i = 0;i < 5;i++)cin >> a[i];
  for(int i = 0;i < 5;i++)answer += (a[i]+9)/10;
  answer *= 10;
  for(int i = 0;i < 5;i++){
    if(a[i] % 10 < min)min = a[i]%10;
  }
  answer -= 10-min;
}
  