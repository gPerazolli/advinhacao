#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//acentuação
	setlocale(LC_ALL, "Portuguese");
	
	//introdução
	printf("\n\n");
	printf(" _______                                            __                  __                                                                                         		\n");
	printf("/       \\                                          /  |                /  |                                                                                        	\n");
	printf("$$$$$$$  |  ______   _____  ____         __     __ $$/  _______    ____$$ |  ______          ______    ______               __   ______    ______    ______        		\n");
	printf("$$ |__$$ | /      \\ /     \\/    \\       /  \\   /  |/  |/       \\  /    $$ | /      \\        /      \\  /      \\             /  | /      \\  /      \\  /      \\ \n");     
	printf("$$    $$< /$$$$$$  |$$$$$$ $$$$  |      $$  \\ /$$/ $$ |$$$$$$$  |/$$$$$$$ |/$$$$$$  |       $$$$$$  |/$$$$$$  |            $$/ /$$$$$$  |/$$$$$$  |/$$$$$$  |      	\n");
	printf("$$$$$$$  |$$    $$ |$$ | $$ | $$ |       $$  /$$/  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |       /    $$ |$$ |  $$ |            /  |$$ |  $$ |$$ |  $$ |$$ |  $$ |      		\n");
	printf("$$ |__$$ |$$$$$$$$/ $$ | $$ | $$ |        $$ $$/   $$ |$$ |  $$ |$$ \\__$$ |$$ \\__$$ |      /$$$$$$$ |$$ \__$$ |            $$ |$$ \\__$$ |$$ \\__$$ |$$ \\__$$ |      \n");
	printf("$$    $$/ $$       |$$ | $$ | $$ |         $$$/    $$ |$$ |  $$ |$$    $$ |$$    $$/       $$    $$ |$$    $$/             $$ |$$    $$/ $$    $$ |$$    $$/       		\n");
	printf("$$$$$$$/   $$$$$$$/ $$/  $$/  $$/           $/     $$/ $$/   $$/  $$$$$$$/  $$$$$$/         $$$$$$$/  $$$$$$/         __   $$ | $$$$$$/   $$$$$$$ | $$$$$$/        		\n");
	printf("                                                                                                                     /  \\__$$ |          /  \\__$$ |                	\n");
	printf("                                                                                                                     $$    $$/           $$    $$/                 		\n");
	printf("                                                                                                                      $$$$$$/             $$$$$$/                  		\n");
	printf("\n\n");
	
	
	
	
	int n1 = rand();
	
	int numerosecreto = n1 % 100, chute;
	int i;
	float pontos = 1000;
	
	int nivel;
	
	//regras do jogo
	printf("----------------------------------------------------------------------------------------");
	printf("\n");
	printf("||   Regras:                                                                          ||");
	printf("\n");
	printf("||   Advinhe um número de 1 a 100, gerado randomicamente;                            ||");
	printf("\n");
	printf("||   A cada tentativa errada o jogador perde pontos equivalentes ao número correto.  ||");
	printf("\n");
	printf("||                     VOCE COMEÇA COM 1000 PONTOS!!                                 ||");
	printf("\n");
	printf("----------------------------------------------------------------------------------------");
	printf("\n\n");
	
	int numerotentativas;

	printf("-------------------------------------");
	printf("\n");
	printf("|  Escolha o nivel de dificuldade!  |");
	printf("\n");
	printf("-------------------------------------");
	printf("\n\n");

	do{
		//dificulades para escolher, (facil) 15 tentativas, (medio) 10 e (dificil) 5	
		printf("(1) Facil");
		printf("\n");
		printf("15 tentativas.");
		printf("\n\n");
		printf("(2) Médio");
		printf("\n");
		printf("10 tentativas");
		printf("\n\n");
		printf("(3) Dificil");
		printf("\n");
		printf("5 tentativas");
		printf("\n\n");
		printf("Selecione :");
		scanf("%i", &nivel);
		
		
		//"switch/case" é uma alternativa do "if"
		switch(nivel){
			case 1:
				numerotentativas = 15;
				break;
				
			case 2:
				numerotentativas = 10;
				break;
				
			case 3:
				numerotentativas = 5;
				break;

			default:
				printf("--------------------------------");
				printf("\n");
				printf("ESCOLHA UMA DIFICULDADE VÁLIDA!!");
				printf("\n");
				printf("--------------------------------");
				printf("\n\n");
		}

	}while(nivel != 1 && nivel != 2 && nivel != 3);
	
	//tentativas 
	for(i = 1; i<=numerotentativas; i++){
	
		printf("Tentativa %i", i);
		printf("\n");
		printf("Digite seu chute? ");
		scanf("%i", &chute);
		printf("Seu chute foi: %d ", chute);
		printf("\n");
		
		if(chute < 0){
			
			printf("Você não pode digitar números negativos.");
			printf("\n");
			i--;
			
			continue;
		}
		
		if(chute == numerosecreto){
			
			printf("Parabéns! Você é cagado mesmo!!");
			printf("\n");
			
			//acertar, parou
			break;
		}
		
		else if(chute > numerosecreto){
			
			printf("Seu chute foi maior que o número secreto. Seu merda!!");		
		}
		
		else{
			
			printf("Seu chute foi menor que o número secreto. Seu merda!!");
		}
		
		printf("\n\n");
		
		float pontosperdidos = abs (chute *(float)2);
		pontos = pontos - pontosperdidos; 			
	}
	
	printf("Fim de jogo!");
	printf("\n");
	printf("Total de pontos: %.2f", pontos);
	printf("\n");

	system ("pause");
	return 0;
	
 
}
