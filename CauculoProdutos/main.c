#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, n1;
	int total, qtd, vtm;
	int voltar;
		
	do {
		printf("\n******** cálculo de materiais ******** \n");
		printf("-----------------------------------------\n");
		printf("Selecione uma opção: \n");
		printf("1 = APOLLO \n");
		printf("2 = HDFLEX \n");
		printf("3 = LIXAS MASSA\n");
		printf("4 = REAJUSTE DE PREÇO\n");
		printf("5 = LEIA-ME\n");
		printf("6 = SAIR DO PROGRAMA\n");
		printf("------------recanto-do-raspador------------\n");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("CONVERSÃO APOLLO");
				while(1) {
					printf("\nDigite a quantidade de galões por litro ----> ");
					scanf("%d", &n1);
					printf("******* CONVERTENDO: %d \n", n1 / 5);
					
					printf("deseja voltar ao menu principal? 1 = S / 2 = N ---> ");
					scanf("%d", &voltar);
					if(voltar == 1){
						break;					
					}
				}
				break;
			case 2:
				printf("CONVERSÃO HDFLEX");
				while(1) {
					printf("\nDigite a quantidade de galões por litro ----> ");
					scanf("%d", &n1);
					printf("******* CONVERTIDO PARA GALÕES: %d \n", n1 / 5);
					
					printf("deseja voltar ao menu principal? 1 = S / 2 = N ---> ");
					scanf("%d", &voltar);
					if(voltar == 1){
						break;					
					}
				}
				break;
			case 3:
				printf("CONVERSÃO DE FOLHAS DE LIXA MASSA");
				while(1) {
					printf("\nDigite a quantidade de folhas por pacote -----> ");
					scanf("%d", &n1);
					printf("******* CONVERTENDO PARA PACOTES: %d \n", n1 / 50);
					
					printf("deseja voltar ao menu principal? 1 = S / 2 = N ---> ");
					scanf("%d", &voltar);
					if(voltar == 1){
						break;					
					}
				}
				break;
			case 4:
				while(1){
					printf("\n******** Reajuste de Preço ou Bonificação ******** \n");
				    printf("Digite o valor total da compra do material: ");
					scanf("%d", &vtm);
					printf("Digite a quantidade total dos itens da compra");
					printf("(ou Bonificação): ");
					scanf("%d", &qtd);
					total = vtm / qtd;
					printf("******* Preço de Custo: %d \n ", total);
					
					
					printf("deseja voltar ao menu principal? 1 = S / 2 = N ---> ");
					scanf("%d", &voltar);
					if(voltar == 1){
						break;					
					}		
				}
				break;
			case 5:
				printf("ESSE SISTEMA FOI DESENVOLVIDO PARA AUXILIAR O USUÁRIO \n");
				printf("NOS LANÇAMENTOS DENTRO DO SISTEMA DA GRANMONEY.\n");
				printf("DENTRE ELES OS PRODUTOS DA APOLLO, HDFLEX ENTRE OUTROS.\n");
				printf("Nota: vai ter vezes que o preço de custo de algum produto irá mudar.\n");
				printf("Para descobrir o valor,\nbasta dividir o valor total da compra do produto pela quantidade dos produtos.\n");
				break;
			case 6:
				printf("SAINDO......\n");
				break;
			case 15:
				printf("Esse programa foi feito pelo andré nascimento, equipe Recanto, \ntodos os direitos reservados LTDA.\n");
				printf("Feito no segundo semestre de 2024 - 16/08/2024\n");
				break;
			default:
				printf("\n ******* Opção inválida! Por favor, selecione uma opção válida. ******* \n");
				
		}

	} while(opcao != 6);

	return 0;
}

