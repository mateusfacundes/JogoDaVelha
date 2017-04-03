#include <stdlib.h>


int main()
{

	char a1 = '1';
	char a2 = '2';
	char a3 = '3';
	char a4 = '4';
	char a5 = '5';
	char a6 = '6';
	char a7 = '7';
	char a8 = '8';
	char a9 = '9';
	char b;

	int i
	int f = 1;

	//repetição para qeu o jogo aconteça
	for(i = 0; i < f; i++)
	{
		// turno do jogador o
		if( i % 2 == 0)
		{
			//parte "grafica" e de entrada de dados
			printf("jogador o escolha uma posição! \n");

			printf("%c ", a1);
			printf(" %c ", a2);
			printf(" %c", a3);
			printf("\n");
			printf("%c ", a4);
			printf(" %c ", a5);
			printf(" %c", a6);
			printf("\n");
			printf("%c ", a7);
			printf(" %c ", a8);
			printf(" %c", a9);
			printf("\n");

			scanf("%c%*c", &b);
			
			
			//preenchimento do tabuleiro do o
			if (b == a1)
			{
				a1 = 'o';
			}
			if (b == a2)
			{
				a2 = 'o';
			}
			if (b == a3)
			{
				a3 = 'o';
			}
			if (b == a4)
			{
				a4 = 'o';
			}
			if (b == a5)
			{
				a5 = 'o';
			}
			if (b == a6)
			{
				a6 = 'o';
			}
			if (b == a7)
			{
				a7 = 'o';
			}
			if (b == a8)
			{
				a8 = 'o';
			}
			if (b == a9)
			{
				a9 = 'o';
			}
			system("cls");
		}
		// turno do jogador x
		else
		{
			//parte "grafica" e de entrada de dados
			printf("jogador x escolha uma posição! \n");

			printf("%c ", a1);
			printf(" %c ", a2);
			printf(" %c", a3);
			printf("\n");
			printf("%c ", a4);
			printf(" %c ", a5);
			printf(" %c", a6);
			printf("\n");
			printf("%c ", a7);
			printf(" %c ", a8);
			printf(" %c", a9);
			printf("\n");

			scanf("%c%*c", &b);

			if(b < 10)
			{
				//preenchimento do tabuleiro do x
				if (b == a1)
				{
					a1 = 'x';
				}
				if (b == a2)
				{
					a2 = 'x';
				}
				if (b == a3)
				{
					a3 = 'x';
				}
				if (b == a4)
				{
					a4 = 'x';
				}
				if (b == a5)
				{
					a5 = 'x';
				}
				if (b == a6)
				{
					a6 = 'x';
				}
				if (b == a7)
				{
					a7 = 'x';
				}
				if (b == a8)
				{
					a8 = 'x';
				}
				if (b == a9)
				{
					a9 = 'x';
				}


			}
			system("cls");
		}


		//vereficação de vitoria do o
		if(a1 == 'o' && a2 == 'o' && a3 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a4 == 'o' && a5 == 'o' && a6 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a7 == 'o' && a8 == 'o' && a9 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a1 == 'o' && a4 == 'o' && a7 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a2 == 'o' && a5 == 'o' && a8 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a7 == 'o' && a8 == 'o' && a9 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a1 == 'o' && a5 == 'o' && a9 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}

		if(a7 == 'o' && a5 == 'o' && a3 == 'o')
		{
			printf("o jogador o ganhou!");
			i = i + 1;
		}


		//vereficação de vitoria do x
		if(a1 == 'x' && a2 == 'x' && a3 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a4 == 'x' && a5 == 'x' && a6 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a7 == 'x' && a8 == 'x' && a9 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a1 == 'x' && a4 == 'x' && a7 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a2 == 'x' && a5 == 'x' && a8 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a7 == 'x' && a8 == 'x' && a9 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a1 == 'x' && a5 == 'x' && a9 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(a7 == 'x' && a5 == 'x' && a3 == 'x')
		{
			printf("o jogador x ganhou!");
			i = i + 1;
		}

		if(i == 8)
		{
			printf("deu velha!");
			i = i + 1;
		}


		f = f + 1;
	}

	return 0;
}

