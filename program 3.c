#include <stdio.h>
int main() {
    char msg[100];
    printf("Enter a message: ");
    scanf(" %[^\n]", msg);   
    printf("Message: %s", msg);
    return 0;
}


