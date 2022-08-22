#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
int N;
int result;
scanf("%d", &N);
if (N < 10) {
result = N;
} else if (N < 100) {
result = 10-1;
} else if (N < 1000) {
result = 10-1 + N-99;
} else if (N < 10000) {
result = 10-1 + 1000-100;
} else if (N < 100000) {
result = 10-1 + 1000-100 + N-9999;
} else {
result = 10-1 + 1000-100 + 100000-10000;
}
printf("%d\n", result);
return 0;
}
