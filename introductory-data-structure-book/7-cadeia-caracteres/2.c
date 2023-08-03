#include <stdio.h>
#include <string.h>

int conta_ocorrencias(char *s, char c) {
    int n = 0; // Initialize n to 0

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            n++;
        }
    }

    return n;
}

int main() {

    char cidade[100]; // Fixed size array to store the city name
    char caractere;

    printf("Digite o nome de uma cidade: ");
    fgets(cidade, sizeof(cidade), stdin); // Use sizeof(cidade) to specify the buffer size
    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    int ocorrencias = conta_ocorrencias(cidade, caractere);

    printf("%d\n", ocorrencias);

    return 0;
}
