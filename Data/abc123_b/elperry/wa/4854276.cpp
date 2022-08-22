#include <iostream>

int main() {
    int x, sum;
    x = 9;
    sum = 0;
    for (int i=0; i<5; i++) {
        int A;
        std::cin >> A;
        int y = A%10;
        if (x > y && y != 0) x = y;
        A = A-y;
        sum += A;
        if (y != 0) sum += 10;
    }
    sum += x-10;
    printf("%d\n", sum);
}