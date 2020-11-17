//Paulo Rubem Oliveira Uchôa Júnior 
//S5 Engenharia da Computação 2020.2
//Sistemas Operacionais 
#include <stdio.h>

main() {
	
	int opcao;
	float a, b, resultado;
	printf("Bem vindo");
	do{
		printf("\nEscolha uma operacao: 1 para SOMA, 2 para SUBTRACAO, 3 para MULTIPLICAO , 4 para DIVISAO: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("\nEntre com um valor:");
				scanf("%f", &a);
				printf("\nEntre com um valor:");
				scanf("%f", &b);
				resultado = a+b;
				printf("\nO resultado da operacao e: %0.4f", resultado);
				break; 
			case 2:
				printf("\nEntre com um valor:");
				scanf("%f", &a);
				printf("\nEntre com um valor:");
				scanf("%f", &b);
				resultado = a-b;
				printf("\nO resultado da operacao e: %0.4f", resultado);
				break; 
			case 3:
				printf("\nEntre com um valor:");
				scanf("%f", &a);
				printf("\nEntre com um valor:");
				scanf("%f", &b);
				resultado = a*b;
				printf("\nO resultado da operacao e: %0.4f", resultado);
				break; 
			case 4:	
				printf("\nEntre com um valor:");
				scanf("%f", &a);
				printf("\nEntre com um valor:");
				scanf("%f", &b); 
				resultado = a/b;
				printf("\nO resultado da operacao e: %0.4f", resultado);
				break; 
			default:
				printf("Entre com uma opcao valida");
				break; 	
				
		}
	
		printf("\nAperte 0 para continuar: ");
		scanf("%d", &opcao);
	
	}while(opcao == 0);	
}
