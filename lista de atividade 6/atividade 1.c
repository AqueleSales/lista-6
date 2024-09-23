#include <stdio.h>
#include <string.h>

int main() {
    int i, tem_n = 0, tem_M = 0, tem_m = 0;
    char senha[101];
    printf("digite sua senha:\n(pelo menos um numero, uma letra maiuscula e uma letra minuscula)\n");
    scanf("%s", senha);

    for (i = 0; i < strlen(senha); i++) {
        if (senha[i] >= '0' && senha[i] <= '9') {
            tem_n = 1;
        }
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            tem_M = 1;
        }
        if (senha[i] >= 'a' && senha[i] <= 'z') {
            tem_m = 1;
        }
    }
    if (strlen(senha) < 8 || strlen(senha) > 100) {
        printf("a senha deve ter entre 8 e 100 caracteres\n");
    }

    if (tem_n && tem_M && tem_m) {
        printf("senha valida\n");
    } else {
        printf("a senha deve conter pelo menos um número, uma letra maiuscula e uma letra minuscula\n");
    }

    return 0;
}
