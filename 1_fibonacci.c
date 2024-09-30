#include <stdio.h>

// compilar o programa com 'gcc fibonacci.c'
// executar com 'a.exe' (windows) ou './a.out' (linux)

int main(void)
{
	int num = 0;
	int prev = 0, curr = 1;
	int next = prev + curr;

	// Mensagens sem acento devido ao C só aceitar ASCII e não UTF-8
	printf("Digite um numero: ");

	// if retorna 0 se o valor digitado não for um número
	if (scanf("%d", &num) != 1) {
		printf("Numero invalido");
	} else {

		// andamento da sequência, o próximo número sendo a soma dos dois anteriores
		while (next < num) {
			printf("%d -> ", next);
			prev = curr;
			curr = next;
			next = prev + curr;
		}

		// comparação com prev e curr devido a casos da entrada ser 0 ou 1
		if (num == next || num == prev || num == curr) {
			printf("O numero escolhido pertence a sequencia de Fibonacci.\n");
		} else {
			printf("O numero escolhido NAO pertence a sequencia de Fibonacci.\n");
		}
	}
	return 0;
}
