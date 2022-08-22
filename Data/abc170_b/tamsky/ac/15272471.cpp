#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
scanf("%d", &x);
int y;
scanf("%d", &y);
double divided = y / (double) x;
if (y % 2 != 0){
printf("No\n");
}
else if (divided >=2 && divided <=4){
printf("Yes\n");
} else {
printf("No\n");
}
}
