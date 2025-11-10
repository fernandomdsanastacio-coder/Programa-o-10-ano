#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int  resp1, vidas, count = 0, i, resp, vidaM = 20, vidaP = 20, arma, dano = 0, velocidade = 0, defesa = 0, ouro = 0, xp = 0, pontos = 0, pontosVe = 0, pontosD = 0, pontosV = 0;
	char escolha;
	string nome;
	srand(time(0));
	cout << "=====Bem vindo ao RPG de combate por turnos!====" << endl << "Neste jogo tu és um herói que irá salvar o mundo de monstros terríveis! " << endl << "Para começar, escolha o seu nome: ";
	cin >> nome;
	cout << "\33[35mMestre da Guilda:\33[0m Olá senhor(a) herói(a) " << nome << ", eu sou a mestre da guilda que irá dar-te missões para derrotares monstros e ganhares recompensas pelas missõs." << endl << "Cada monstro derrotado irá dar-te pontos de experiência e ouro para poderes melhorar o teu equipamento!" << endl << "A tua primeira missão é derrotar um goblin que está a aterrorizar uma aldeia próxima! Boa sorte." << endl;
	cout << "\33[35mMestre da Guilda:\33[0m Mas antes, que arma escolhes para esta aventura: machado(1) que aumenta o teu dano mas diminui a velocidade\n Espada(2) que é equilibrado por não dar buff nenhum\n Ou a adaga(3) que aumenta muito a velocidade mas diminui o dano.\n";
	cin >> arma;
	cout << "\33[35mMestre da Guilda:\33[0m Recebes-te também uma armadura leve que te dá mais 5 de defesa." << endl;
	defesa = defesa + 5;
	if (arma < 1 || arma > 3)
	{
		cout << "Arma inválida, escolhe novamente: ";
		cin >> arma;
	}
	else
	{
		cout << "Arma escolhida com sucesso!" << endl;
		switch (arma)
		{
		case 1:
			cout << "Escolheste o machado, o teu dano foi aumentado em 2 pontos mas a tua velocidade diminuiu em 2 ponto." << endl;
			dano = dano + 2;
			velocidade = velocidade - 2;
			break;
		case 2:
			cout << "Escolheste a espada, o teu dano e velocidade mantêm-se iguais." << endl;
			break;
		case 3:
			cout << "Escolheste a adaga, o teu dano diminuiu em 2 pontos mas a tua velocidade aumentou em 2 pontos." << endl;
			dano = dano - 2;
			velocidade = velocidade + 2;
			break;

		}
	}
	cout << "Fos-te atráz do lugar marcado no papel da missão e encontrás-te dois goblin!! " << endl;
	cout << "Estás a lutar com um dos goblin! Eles têm 20 de vida cada um. Boa sorte!!" << endl;
	do
	{
		count++;
		do
		{
			if (vidaP > 0)
			{

				cout << "Gire o dado para atacar (1) : ";
				cin >> resp;
				if (resp == 1)
				{
					int num = (rand() % 19 + 1) + velocidade;
					cout << "O valor do dado foi: " << num << endl;
					int Monum = (rand() % 19 + 1) - defesa;
					cout << "O valor do dado do monstro foi: " << Monum << endl;
					resp == 0;
					if (num > Monum)
					{
						if (num >= 20)
						{
							cout << "\33[92mCRÍTICO!!\33[0m" << endl;
							cout << "Dano dobrado!" << endl;
							cout << "Role o dado para dar dano no monstro (1) : ";
							cin >> resp;
							
							if (resp == 1)
							{
								num = 0;
								num = (rand() % 7 + 1) + dano;
								if (num < 0)
								{
									num = rand () % 7+1 +dano;
								}
								else
								{
									cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
									vidaM = vidaM - num;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
						}
						cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
						cout << "Role o dado para dar dano no monstro (1): ";
						cin >> resp;
						num == 0;
						if (resp == 1)
						{
							num = rand() % 7 + 1;
							cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
							vidaM = vidaM - num;
							cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
						}
					}
					else
					{
						Monum = 0;
						cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
						Monum = rand() % 5 + 1;
						cout << "O dano do monstro foi: " << Monum << endl;
						vidaP = vidaP - Monum;
						cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
					}
				}
				else
				{
					cout << "Desististe, estás com Medo ??!!" << endl;
					return 0;
				}
			}
		} while (vidaM > 0 && vidaP > 0);
		{
			if (vidaM <= 0)
			{
				cout << "\33[32mVences-te o monstro!\33[0m" << endl;
				vidaM = 20;
			}
			else
			{
				cout << "Foste derrotado pelo monstro!" << endl;
				return 0;
			}
		}
	} while (count < 2 && vidaP>0);
	{
		vidaP = vidaP + 10;
		cout << "Vida restaurada em 10 pontos!" << endl;
		cout << "Mataste os dois goblins! Parabéns!!" << endl << "Recebeste xp e ouro";
		ouro = ouro + 50;
		xp = xp + 20;
	}
	cout << "Depois de uma longa batalha, voltas à guilda para falares com a mestre." << endl;
	cout << "\33[35mMestre da Guilda:\33[0m Parabéns senhor herói " << nome << ", completaste a tua primeira missão com sucesso!" << endl << "Aqui está a tua recompensa de 50 de ouro e 30 de xp." << endl;
	ouro = ouro + 50;
	xp = xp + 30;
	cout << "Agora tens " << ouro << " de ouro" << endl << "upaste de nivel, recebes-te 10 pontos para distribuir nas tuas stats!" << endl;
	pontos = pontos + 10;
	cout << "Queres distribuir os pontos agora? (s/n)" << endl;
	cin >> escolha;
	if (escolha == 's' || escolha == 'S')
	{

		cout << "O que não usares irá ser guardado para mais tarde." << endl;
		cout << "Pontos de Vida : ";
		cin >> pontosV;
		cout << "Pontos de Dano : ";
		cin >> pontosD;
		dano = dano + pontosD;
		cout << "Pontos de Velocidade : ";
		cin >> pontosVe;
		velocidade = velocidade + pontosVe;
		if ((pontosV + pontosD + pontosVe) > pontos)
		{
			cout << "Distribuição inválida, tenta novamente em outra altura." << endl;
		}
		else
		{
			pontos = pontos - (pontosV + pontosD + pontosVe);
			cout << "Pontos distribuídos com sucesso!" << endl << "Estás mais forte que nunca." << endl;
			cout << "Vida: " << vidaP << " Dano: " << dano << " Velocidade: " << velocidade << endl;
		}
	}
	else if (escolha == 'n' || escolha == 'N')
	{
		cout << "Muito bem, podes distribuir os pontos mais tarde." << endl;
	}
	resp = 0;
	cout << "Estás na capital do reino de Preinst, queres fazer o que?" << endl << "Ir até ao mercador comprar armamento (1)" << endl << "Ir até á guilda (2)" << endl << "Sair da cidade(3)";
	cin >> resp;
	if (resp < 1 || resp > 3)
	{
		cout << "Opção inválida, escolhe novamente: ";
		cin >> resp;
	}
	switch (resp)
	{
	case 1:
		cout << "\33[36mMercador:\33[0m Olá senhor(a) herói(a) " << nome << ", bem vindo(a) à minha loja! O que desejas comprar?" << endl << "Tens um machado nivel dois que aumenta mais o dano (1) : 100 ouro." << endl << "Uma espada que aumenta um pouco em dano e velocidade (2) : 75 ouro." << endl << "Uma adaga que aumenta a velocidade (3) : 100 ouro." << endl << "Podes comprar uma armadura se quisers (4) : 150 ouro." << endl;
		cin >> resp1;
		switch (resp1)
		{
		case 1:
			if (ouro >= 100)
			{
				cout << "Compraste o machado nivel dois!" << endl;
				dano = dano + 2;
				ouro = ouro - 100;
				cout << "O teu dano agora é: " << dano << endl;
				cout << "Ouro restante: " << ouro << endl;
			}
			else
			{
				cout << "Não tens ouro suficiente!" << endl;
			}
			break;
		case 2:
			if (ouro >= 75)
			{
				cout << "Compraste a espada nivel dois!" << endl;
				dano = dano + 1;
				velocidade = velocidade + 1;
				ouro = ouro - 75;
				cout << "O teu dano e velocidade agora são: " << dano << " : " << velocidade << endl;
				cout << "Ouro restante: " << ouro << endl;
			}
			else
			{
				cout << "Não tens ouro suficiente!" << endl;
			}
			break;
		case 3:
			if (ouro >= 100)
			{
				cout << "Compraste a adaga nivel dois!" << endl;
				velocidade = velocidade + 2;
				ouro = ouro - 100;
				cout << "A tua velocidade agora é: " << velocidade << endl;
				cout << "Ouro restante: " << ouro << endl;
			}
			else
			{
				cout << "Não tens ouro suficiente!" << endl;
			}
			break;

		}
		cout << "\33[36mMercador:\33[0m Obrigado pela tua visita, volta sempre!" << endl;
		cout << "\33[33m Ouro restante: " << ouro << "\33[0m" << endl;
		cout << "\33[35mMestre da Guilda:\33[0m Olá senhor(a) herói(a) " << nome << ", bem vindo(a). O que veio fazer aqui? " << endl << "Iniciar uma missão? Só há duas missãos no momento: " << endl << "Matar 3 slimes de nivel 3 : 100 de ouro e 50 xp (1)" << endl << "Matar 2 cães do inferno nivel 5, o que eu não recomendaria : 300 de ouro e 100 xp (2)";
		cin >> resp1;
		switch (resp1)
		{
		case 1:
			cout << "Aceitaste a missão de matar slimes!" << endl;
			cout << "Boa sorte senhor(a) herói(a) " << nome << "!" << endl;
			cout << "Estás numa floresta escura e húmida, sentes uma pressão pessada no ar em que respiras." << endl << "De repente um grupo de 3 slimes te ataca." << endl;

			do
			{
				count = 0;
				count++;
				do
				{
					if (vidaP > 0)
					{
						resp = 0;
						cout << "Gire o dado para atacar (1) : ";
						cin >> resp;
						if (resp == 1)
						{
							int num1 = (rand() % 19 + 1) + velocidade;
							cout << "O valor do dado foi: " << num1 << endl;
							int Monum1 = (rand() % 19 + 1) - defesa;
							cout << "O valor do dado do monstro foi: " << Monum1 << endl;
							resp == 0;
							if (num1 > Monum1)
							{
								if (num1 >= 20)
								{
									cout << "\33[92mCRÍTICO!!\33[0m" << endl;
									cout << "Dano dobrado!" << endl;
									cout << "Role o dado para dar dano no monstro (1) : ";
									cin >> resp;
									num1 == 0;
									if (resp == 1)
									{
										num1 = (rand() % 7 + 1) + dano;
										int crit = num1 * 2;
										num1 = crit;
										cout << "\33[34mO teu dano foi: \33[0m" << num1 << endl;
										vidaM = vidaM - num1;
										cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
									}
								}
								cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
								cout << "Role o dado para dar dano no monstro (1): ";
								cin >> resp;
								num1 == 0;
								if (resp == 1)
								{
									num1 = rand() % 7 + 1;
									cout << "\33[34mO teu dano foi: \33[0m" << num1 << endl;
									vidaM = vidaM - num1;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
							else
							{
								Monum1 = 0;
								cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
								Monum1 = rand() % 5 + 1;
								cout << "O dano do monstro foi: " << Monum1 << endl;
								vidaP = vidaP - Monum1;
								cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
							}
						}
						else
						{
							cout << "Desististe, estás com Medo ??!!" << endl;
							return 0;
						}
					}
				} while (vidaM > 0 && vidaP > 0);
				{
					if (vidaM <= 0)
					{
						cout << "\33[32mVences-te um dos slimes!\33[0m" << endl;
						vidaM = 20;
					}
					else
					{
						cout << "Foste derrotado pelo slime que humilhante!" << endl;
						return 0;
					}
				}
			} while (count < 3 && vidaP > 0);
			{
				cout << "Mataste os três slimes! Parabéns!!" << endl << "Recebeste xp e ouro";
				ouro = ouro + 100;
				xp = xp + 50;
			}
			break;
		case 2:
			cout << "Aceitaste a missão de matar cães do inferno! Só um milagre pode-te salvar." << endl;
			cout << "Boa sorte senhor(a) herói(a) " << nome << "!" << endl;
			cout << "Estás num cemitério abandonado, o cheiro a morte é insuportável." << endl << "De repente 2 cães do inferno atacam-te." << endl;
			vidaM = 50;
			do
			{
				
				count++;
				do
				{
					if (vidaP > 0)
					{

						cout << "Gire o dado para atacar (1) : ";
						cin >> resp;
						if (resp == 1)
						{
							int num = (rand() % 19 + 1) + velocidade;
							cout << "O valor do dado foi: " << num << endl;
							int Monum = (rand() % 19 + 1) - defesa + 7;
							cout << "O valor do dado do monstro foi: " << Monum << endl;
							resp == 0;
							if (num > Monum)
							{
								if (num >= 20)
								{
									cout << "\33[92mCRÍTICO!!\33[0m" << endl;
									cout << "Dano dobrado!" << endl;
									cout << "Role o dado para dar dano no monstro (1) : ";
									cin >> resp;
									num == 0;
									if (resp == 1)
									{
										num = (rand() % 7 + 1) + dano;
										int crit = num * 2;
										num = crit;
										cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
										vidaM = vidaM - num;
										cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
									}
								}
								cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
								cout << "Role o dado para dar dano no monstro (1): ";
								cin >> resp;
								num == 0;
								if (resp == 1)
								{
									num = rand() % 7 + 1;
									cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
									vidaM = vidaM - num;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
							else
							{
								Monum = 0;
								cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
								Monum = rand() % 9 + 1;
								cout << "O dano do monstro foi: " << Monum << endl;
								vidaP = vidaP - Monum;
								cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
							}
						}
						else
						{
							cout << "Desististe, estás com Medo ??!!" << endl;
							return 0;
						}
					}
				} while (vidaM > 0 && vidaP > 0);
				{
					if (vidaM <= 0)
					{
						cout << "\33[32mVences-te o monstro!\33[0m" << endl;
						vidaM = 20;
					}
					else
					{
						cout << "Foste derrotado pelo monstro!" << endl;
						return 0;
					}
				}
			} while (count < 2 && vidaP>0);
			{
				cout << "Mataste os dois cães do inferno! Parabéns!!" << endl << "Recebeste xp e ouro";
				ouro = ouro + 300;
				xp = xp + 100;
			}
			break;
		}

		break;
		case 2:
		cout << "\33[35mMestre da Guilda:\33[0m Olá senhor(a) herói(a) " << nome << ", bem vindo(a). O que veio fazer aqui? " << endl << "Iniciar uma missão? Só há duas missãos no momento: " << endl << "Matar 3 slimes de nivel 3 : 100 de ouro e 50 xp (1)" << endl << "Matar 2 cães do inferno nivel 5, o que eu não recomendaria : 300 de ouro e 100 xp (2)";
		cin >> resp1;
		switch (resp1)
		{
		case 1:
			cout << "Aceitaste a missão de matar slimes!" << endl;
			cout << "Boa sorte senhor(a) herói(a) " << nome << "!" << endl;
			cout << "Estás numa floresta escura e húmida, sentes uma pressão pessada no ar em que respiras." << endl << "De repente um grupo de 5 slimes te ataca." << endl;
			count = 0;
			do
			{
				count++;
				do
				{
					if (vidaP > 0)
					{
						resp = 0;
						cout << "Gire o dado para atacar (1) : ";
						cin >> resp;
						if (resp == 1)
						{
							int num1 = (rand() % 19 + 1) + velocidade;
							cout << "O valor do dado foi: " << num1 << endl;
							int Monum1 = (rand() % 19 + 1) - defesa;
							cout << "O valor do dado do monstro foi: " << Monum1 << endl;
							resp == 0;
							if (num1 > Monum1)
							{
								if (num1 >= 20)
								{
									cout << "\33[92mCRÍTICO!!\33[0m" << endl;
									cout << "Dano dobrado!" << endl;
									cout << "Role o dado para dar dano no monstro (1) : ";
									cin >> resp;
									num1 == 0;
									if (resp == 1)
									{
										num1 = (rand() % 7 + 1) + dano;
										int crit = num1 * 2;
										num1 = crit;
										cout << "\33[34mO teu dano foi: \33[0m" << num1 << endl;
										vidaM = vidaM - num1;
										cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
									}
								}
								cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
								cout << "Role o dado para dar dano no monstro (1): ";
								cin >> resp;
								num1 == 0;
								if (resp == 1)
								{
									num1 = rand() % 7 + 1;
									cout << "\33[34mO teu dano foi: \33[0m" << num1 << endl;
									vidaM = vidaM - num1;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
							else
							{
								Monum1 = 0;
								cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
								Monum1 = rand() % 5 + 1;
								cout << "O dano do monstro foi: " << Monum1 << endl;
								vidaP = vidaP - Monum1;
								cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
							}
						}
						else
						{
							cout << "Desististe, estás com Medo ??!!" << endl;
							return 0;
						}
					}
				} while (vidaM > 0 && vidaP > 0);
				{
					if (vidaM <= 0)
					{
						cout << "\33[32mVences-te um dos slimes!\33[0m" << endl;
						vidaM = 20;
					}
					else
					{
						cout << "Foste derrotado pelo slime que humilhante!" << endl;
						return 0;
					}
				}
			} while (count < 3 && vidaP>0);
			{
				cout << "Mataste os 3 slimes! Parabéns!!" << endl << "Recebeste xp e ouro";
				ouro = ouro + 100;
				xp = xp + 50;
			}
			break;
		case 2:
			cout << "Aceitaste a missão de matar cães do inferno! Só um milagre pode-te salvar." << endl;
			cout << "Boa sorte senhor(a) herói(a) " << nome << "!" << endl;
			cout << "Estás num cemitério abandonado, o cheiro a morte é insuportável." << endl << "De repente 2 cães do inferno atacam-te." << endl;
			count = 0;
			do
			{
				vidaM = 50;
				count++;
				do
				{
					if (vidaP > 0)
					{

						cout << "Gire o dado para atacar (1) : ";
						cin >> resp;
						if (resp == 1)
						{
							int num = (rand() % 19 + 1) + velocidade;
							cout << "O valor do dado foi: " << num << endl;
							int Monum = (rand() % 19 + 1) - defesa + 7;
							cout << "O valor do dado do monstro foi: " << Monum << endl;
							resp == 0;
							if (num > Monum)
							{
								if (num >= 20)
								{
									cout << "\33[92mCRÍTICO!!\33[0m" << endl;
									cout << "Dano dobrado!" << endl;
									cout << "Role o dado para dar dano no monstro (1) : ";
									cin >> resp;
									num == 0;
									if (resp == 1)
									{
										num = (rand() % 7 + 1) + dano;
										int crit = num * 2;
										num = crit;
										cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
										vidaM = vidaM - num;
										cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
									}
								}
								cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
								cout << "Role o dado para dar dano no monstro (1): ";
								cin >> resp;
								num == 0;
								if (resp == 1)
								{
									num = rand() % 7 + 1;
									cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
									vidaM = vidaM - num;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
							else
							{
								Monum = 0;
								cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
								Monum = rand() % 9 + 1;
								cout << "O dano do monstro foi: " << Monum << endl;
								vidaP = vidaP - Monum;
								cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
							}
						}
						else
						{
							cout << "Desististe, estás com Medo ??!!" << endl;
							return 0;
						}
					}
				} while (vidaM > 0 && vidaP > 0);
				{
					if (vidaM <= 0)
					{
						cout << "\33[32mVences-te o monstro!\33[0m" << endl;
						vidaM = 20;
					}
					else
					{
						cout << "Foste derrotado pelo monstro!" << endl;
						return 0;
					}
				}
			} while (count < 2 && vidaP>0);
			{
				cout << "Mataste os dois cães do inferno! Parabéns!!" << endl << "Recebeste xp e ouro";
				ouro = ouro + 300;
				xp = xp + 100;
			}
			break;
		}

		break;

	case 3:
		cout << "Saíste da cidade, boa sorte na tua aventura!" << endl;
		cout << "Após saires da cidade encontrás-te uma mulher a pedir ajuda." << endl << "Ajudas a mulher? (s/n)";
		char escolha = 'n';
		cin >> escolha;
		if (escolha == 's' || escolha == 'S')
		{
			cout << "\33[36mMulher:\33[0m Senhor por favor ajude-me a encontrar o meu filho dou-lhe uma recompesa de 50 moedas de ouro" << endl;
			cout << "Após uma longa procura encontraste o filho da mulher preso por um goblin!" << endl;
			vidaM = 30;
			do
			{
				if (vidaP > 0)
				{

					cout << "Gire o dado para atacar (1) : ";
					cin >> resp;
					
					if (resp == 1)
					{
						int num = (rand() % 19 + 1) + velocidade;
						cout << "O valor do dado foi: " << num << endl;
						int Monum = (rand() % 19 + 1) - defesa;
						cout << "O valor do dado do monstro foi: " << Monum << endl;
						resp == 0;
						if (num > Monum)
						{
							if (num >= 20)
							{
								cout << "\33[92mCRÍTICO!!\33[0m" << endl;
								cout << "Dano dobrado!" << endl;
								cout << "Role o dado para dar dano no monstro (1) : ";
								cin >> resp;
								num == 0;
								if (resp == 1)
								{
									num = (rand() % 7 + 1) + dano;
									int crit = num * 2;
									num = crit;
									cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
									vidaM = vidaM - num;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
							cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
							cout << "Role o dado para dar dano no monstro (1): ";
							cin >> resp;
							num == 0;
							if (resp == 1)
							{
								num = rand() % 7 + 1;
								cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
								vidaM = vidaM - num;
								cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
							}
						}
						else
						{
							Monum = 0;
							cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
							Monum = rand() % 5 + 1;
							cout << "O dano do monstro foi: " << Monum << endl;
							vidaP = vidaP - Monum;
							cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
						}
					}
					else
					{
						cout << "Deixas-te a criança morrer, não deves existir mais!!!" << endl;
						return 0;
					}
				}
			} while (vidaM > 0 && vidaP > 0);
			{
				if (vidaM <= 0)
				{
					cout << "\33[32mVences-te o monstro!\33[0m" << endl;
					vidaM = 20;
				}
				else
				{
					cout << "Foste derrotado pelo monstro!" << endl;
					return 0;
				}
			}
			cout << "A mulher agradece-te e dá-te 50 de ouro como recompensa!" << endl;
			ouro = ouro + 50;
			cout << "Ouro atual: " << ouro << endl;
		}
		else if (escolha == 'n' || escolha == 'N')
		{
			cout << "Ignoraste a mulher e seguiste o teu caminho. Não julgo-te." << endl;
			cout << "Após andares mais um pouco, vês uma pedra meio estranha e acabas por bater nela." << endl << "De repente a pedra se transforma em um golem gigante, com olhos vermelhos e a sair espuma da boca" << endl << "-Parece que está doente - disses e ele vai para cima de ti com tudo ";
			vidaM = 100;
			do
			{
				if (vidaP > 0)
				{

					cout << "Gire o dado para atacar (1) : ";
					cin >> resp;
					
					if (resp == 1)
					{
						int num = (rand() % 19 + 1) + velocidade;
						cout << "O valor do dado foi: " << num << endl;
						int Monum = ((rand() % 19 + 1) - defesa) + 10;
						cout << "O valor do dado do monstro foi: " << Monum << endl;
						resp == 0;
						if (num > Monum)
						{
							if (num >= 20)
							{
								cout << "\33[92mCRÍTICO!!\33[0m" << endl;
								cout << "Dano dobrado!" << endl;
								cout << "Role o dado para dar dano no monstro (1) : ";
								cin >> resp;
								num == 0;
								if (resp == 1)
								{
									num = (rand() % 7 + 1) + dano;
									int crit = num * 2;
									num = crit;
									cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
									vidaM = vidaM - num;
									cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
								}
							}
							cout << "\33[92mVocê atacou o monstro com sucesso!\33[0m" << endl;
							cout << "Role o dado para dar dano no monstro (1): ";
							cin >> resp;
							num == 0;
							if (resp == 1)
							{
								num = rand() % 7 + 1;
								cout << "\33[34mO teu dano foi: \33[0m" << num << endl;
								vidaM = vidaM - num;
								cout << "\33[32mO monstro está com: " << vidaM << "vida \33[0m" << endl;
							}
						}
						else
						{
							Monum = 0;
							cout << "\33[94mO monstro atacou-te primeiro\33[0m" << endl;
							Monum = rand() % 15 + 1;
							cout << "O dano do monstro foi: " << Monum << endl;
							vidaP = vidaP - Monum;
							cout << "\33[31mVocê está com :" << vidaP << " de vida\33[0m" << endl;
						}
					}
					else
					{
						cout << "Desististe, estás com Medo ??!!" << endl;
						return 0;
					}
				}
			} while (vidaM > 0 && vidaP > 0);
			{
				if (vidaM <= 0)
				{
					cout << "\33[32mVences-te o golem! A tua sorte nunca mais acaba porra.\33[0m" << endl;

				}
				else
				{
					cout << "Foste derrotado pelo monstro! Admito que deixei ele muito forte desculpa:(" << endl;
					return 0;
				}
				cout << "Após derrotar o golem, voltas à cidade." << endl;
				cout << "\33[35mMestre da Guilda:\33[0m Uau senhor(a) herói(a) " << nome << ", derrotaste o golem! Aqui está a tua recompensa de 200 de ouro e 150 de xp." << endl;
				ouro = ouro + 200;
				xp = xp + 150;
				cout << "Ouro atual: " << ouro << endl;
				cout << "Upaste de nivel, recebes-te 10 pontos para distribuir nas tuas stats!" << endl;
				pontos = pontos + 10;
				cout << "Queres distribuir os pontos agora? (s/n)" << endl;
				cin >> escolha;
				if (escolha == 's' || escolha == 'S')
				{

					cout << "O que não usares irá ser guardado para mais tarde." << endl;
					cout << "Pontos de Vida : ";
					cin >> pontosV;
					cout << "Pontos de Dano : ";
					cin >> pontosD;
					dano = dano + pontosD;
					cout << "Pontos de Velocidade : ";
					cin >> pontosVe;
					velocidade = velocidade + pontosVe;
					if ((pontosV + pontosD + pontosVe) > pontos)
					{
						cout << "Distribuição inválida, tenta novamente em outra altura." << endl;
					}
					else
					{
						pontos = pontos - (pontosV + pontosD + pontosVe);
						cout << "Pontos distribuídos com sucesso!" << endl << "Estás mais forte que nunca." << endl;
						cout << "Vida: " << vidaP << " Dano: " << dano << " Velocidade: " << velocidade << endl;
					}
				}
				else if (escolha == 'n' || escolha == 'N')
				{
					cout << "Muito bem, podes distribuir os pontos mais tarde." << endl;
				}

			}

		}
		if (resp < 1 || resp > 3)
		{
			cout << "Opção inválida, escolhe novamente: ";
			cin >> resp;
		}
		
	}
	cout << "=====Obrigado por jogares o meu RPG simples em C++!=====" << endl;
	return 0;
}

