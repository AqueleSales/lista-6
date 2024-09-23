#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char pala[101];
    printf("digite uma palavra:\n");
    scanf("%s", pala);

    printf("sring de trás para frente: ");
    for (i = strlen(pala) - 1; i >= 0; i--) {
        printf("%c", pala[i]);
    }
    printf("\n");

    return 0;
}
