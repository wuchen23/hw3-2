#include <stdio.h>

char changeCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); 
    }
    else if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); 
    }
    return c; 
}

int main() {
    char ch;
    printf("�п�J�@�Ӧr���G");
    scanf_s("%c", &ch);
    printf("�ഫ�᪺�r���G%c\n", changeCase(ch));
    return 0;
}
