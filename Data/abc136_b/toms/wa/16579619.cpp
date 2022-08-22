#include <cstdio>
#include <cstdint>
#include <string>
using namespace std;
int32_t n;
void solve() {
int32_t odd = 0;
for (int i=1;i<n;i++) {
if (to_string(i).length()%2==1) {
odd++;
}
}
printf("%d\n", odd);
}
int main() {
scanf("%d", &n);
solve();
}
