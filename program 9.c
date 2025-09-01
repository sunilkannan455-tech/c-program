#include <stdio.h>
int main() {
    int num;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &num);   // input in hex
    printf("Integer: %d", num);
    return 0;
}
