#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <random>
#include <queue>
using namespace std;
struct edge
{
int from;
int to;
int cost;
};
int main()
{
int N, L;
cin >> N >> L;
int sum = 0;
if (L >= 0){
for(int ni = 1; ni < N; ni++){
sum += ni + L;
}
}
else if (L <= - N) {
for (int ni = 0; ni < N-1; ni++) {
sum += ni + L;
}
}
else {
for (int ni = 0; ni < N; ni++) {
sum += ni + L;
}
}
printf("%d", sum);
return 0;
}
