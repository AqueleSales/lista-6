#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int eh_palindromo = 1;
    printf("Digite uma palavra ou frase:\n");
    scanf("%s", str);
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        char char_inicio = str[inicio];
        char char_fim = str[fim];

        if (char_inicio >= 'A' && char_inicio <= 'Z') {
            char_inicio += 32;
        }
        if (char_fim >= 'A' && char_fim <= 'Z') {
            char_fim += 32;
        }
        if (char_inicio != char_fim) {
            eh_palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }
    if (eh_palindromo) {
        printf("A string '%s' é um palíndromo.\n", str);
    } else {
        printf("A string '%s' não é um palíndromo.\n", str);
    }

    return 0;
}
