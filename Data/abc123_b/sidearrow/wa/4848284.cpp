#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    a = (a + 9) / 10;
    b = (b + 9) / 10;
    c = (c + 9) / 10;
    d = (d + 9) / 10;
    e = (e + 9) / 10;
    int min = std::min({(a+9)%10, (b+9)%10, (c+9)%10, (d+9)%10, (e+9)%10});
    if (min == 9) {
        printf("%d", (a+b+c+d+e)*10);
    } else {
        printf("%d", (a+b+c+d+e-1)*10+min+1);
    }
}
