#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("請輸入兩個整數：");
    scanf_s("%d %d", &num1, &num2);
    printf("最小公倍數：%d\n", lcm(num1, num2));
    return 0;
}