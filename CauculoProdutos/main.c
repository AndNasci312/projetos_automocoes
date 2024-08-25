#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, n1;
	int total, qtd, vtm;
	int voltar;
		
	do {
		printf("\n******** c�lculo de materiais ******** \n");
		printf("-----------------------------------------\n");
		printf("Selecione uma op��o: \n");
		printf("1 = APOLLO \n");
		printf("2 = HDFLEX \n");
		printf("3 = LIXAS MASSA\n");
		printf("4 = REAJUSTE DE PRE�O\n");
		printf("5 = LEIA-ME\n");
		printf("6 = SAIR DO PROGRAMA\n");
		printf("------------recanto-do-raspador------------\n");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("CONVERS�O APOLLO");
				while(1) {
					printf("\nDigite a quantidade de gal�es por litro ----> ");
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
				printf("CONVERS�O HDFLEX");
				while(1) {
					printf("\nDigite a quantidade de gal�es por litro ----> ");
					scanf("%d", &n1);
					printf("******* CONVERTIDO PARA GAL�ES: %d \n", n1 / 5);
					
					printf("deseja voltar ao menu principal? 1 = S / 2 = N ---> ");
					scanf("%d", &voltar);
					if(voltar == 1){
						break;					
					}
				}
				break;
			case 3:
				printf("CONVERS�O DE FOLHAS DE LIXA MASSA");
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
					printf("\n******** Reajuste de Pre�o ou Bonifica��o ******** \n");
				    printf("Digite o valor total da compra do material: ");
					scanf("%d", &vtm);
					printf("Digite a quantidade total dos itens da compra");
					printf("(ou Bonifica��o): ");
					scanf("%d", &qtd);
					total = vtm / qtd;
					printf("******* Pre�o de Custo: %d \n ", total);
					
					
					printf("deseja voltar ao menu principal? 1 = S / 2 = N ---> ");
					scanf("%d", &voltar);
					if(voltar == 1){
						break;					
					}		
				}
				break;
			case 5:
				printf("ESSE SISTEMA FOI DESENVOLVIDO PARA AUXILIAR O USU�RIO \n");
				printf("NOS LAN�AMENTOS DENTRO DO SISTEMA DA GRANMONEY.\n");
				printf("DENTRE ELES OS PRODUTOS DA APOLLO, HDFLEX ENTRE OUTROS.\n");
				printf("Nota: vai ter vezes que o pre�o de custo de algum produto ir� mudar.\n");
				printf("Para descobrir o valor,\nbasta dividir o valor total da compra do produto pela quantidade dos produtos.\n");
				break;
			case 6:
				printf("SAINDO......\n");
				break;
			case 15:
				printf("Esse programa foi feito pelo andr� nascimento, equipe Recanto, \ntodos os direitos reservados LTDA.\n");
				printf("Feito no segundo semestre de 2024 - 16/08/2024\n");
				break;
			default:
				printf("\n ******* Op��o inv�lida! Por favor, selecione uma op��o v�lida. ******* \n");
				
		}

	} while(opcao != 6);

	return 0;
}

