#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int fullTaste = (n*(n + 2*l + 3))/2;
int answer;
int first = l + 1 -1;
int last = l + n -1;
if(first*last <= 0){
answer = fullTaste;
}
else if(abs(first) < abs(last)){
answer = fullTaste - first;
}
else{
answer = fullTaste - last;
}
cout << answer << endl;
}
