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
    printf("請輸入一個字母：");
    scanf_s("%c", &ch);
    printf("轉換後的字母：%c\n", changeCase(ch));
    return 0;
}
