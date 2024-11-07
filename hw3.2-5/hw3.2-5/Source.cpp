#include <stdio.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("�N�L�l 1 �q %c ���� %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("�N�L�l %d �q %c ���� %c\n", n, from_rod, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    printf("�п�J�L�l���ƶq�G");
    scanf_s("%d", &n);
    printf("���� %d �ӽL�l���B�J�p�U�G\n", n);
    hanoi(n, 'A', 'C', 'B'); 

    return 0;
}

