#include <stdio.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("將盤子 1 從 %c 移到 %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("將盤子 %d 從 %c 移到 %c\n", n, from_rod, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    printf("請輸入盤子的數量：");
    scanf_s("%d", &n);
    printf("移動 %d 個盤子的步驟如下：\n", n);
    hanoi(n, 'A', 'C', 'B'); 

    return 0;
}

