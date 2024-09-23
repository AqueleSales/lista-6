#include <stdio.h>
#include <string.h>

int main() {
    int i, com, sem;
    char s1 [101];
    char s2 [101];
    printf("escreva uma palavra:\n");
    scanf ("%s", s1);
    printf("escreva uma palavra:\n");
    scanf ("%s", s2);

    com = strlen(s1);
    printf("tamanho da string usando strlen: %d\n", com);

    i = 0;
    while (s2[i] != '\0') {
        i++;
    }

    sem = i;
    printf("tamanho da string sem usar strlen: %d\n", sem);

    if (com == sem){
        printf("iguais");
    } else {
        printf("diferentes");
    }

    return 0;
}
