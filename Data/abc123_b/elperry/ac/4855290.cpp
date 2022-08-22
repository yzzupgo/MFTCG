#include <iostream>

int main() {
    int x, sum;
    x = 9;
    sum = 0;
    bool state = false;
    for (int i=0; i<5; i++) {
        int A;
        scanf("%d", &A);
        int y = A%10;
        if (x > y && y != 0) x = y;
        A = A-y;
        sum += A;
        if (y != 0) {
            sum += 10;
            state = true;
        }
    }
    if (state) sum += x-10;
    printf("%d\n", sum);
}