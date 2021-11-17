#include <stdio.h>
// Declaração da função soma. Que recebe dois parametros e retorna um valor inteiro
int soma(int a, int b){
  int s;
  s = a + b;
  return s;
}
// Função Principal. Declara três variáveis
int main() {
  int a, b, s; // Declara três variáveis
  scanf("%d", &a); // Ler um valor inteiro e armazena na variável a
  scanf("%d", &b); // Ler um valor inteiro e armazena na variável b
  s = soma(a,b); // Chama a função soma passando os valores armazenados na variáveis a,b. O valor da variável soma é atribuito a variável s
  printf("A soma é %d\n",s); // Imprime a mensagem para o usuá rio com o valor
  return 0;
}
