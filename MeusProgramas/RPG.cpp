#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int  count = 0,i, resp, vidaM = 20, vidaP = 20, arma, dano = 0, velocidade = 0, defesa = 0, ouro=0, xp=0, pontos=0, pontosVe=0, pontosD=0, pontosV=0;
	char escolha;
	string nome;
	srand(time(0));
	cout << "Bem vindo ao RPG de combate por turnos! " << endl << "Neste jogo tu és um herói que irá salvar o mundo de monstros terríveis! " << endl << "Para começar, escolha o seu nome: ";
	cin >> nome;
	cout << "\33[35mMestre da Guilda:\33[0m Olá senhor herói " << nome << ", eu sou a mestre da guilda que irá dar-te missões para derrotares monstors e ganhares recompensas pelas missõs." << endl << "Cada monstro derrotado irá dar-te pontos de experiência e ouro para poderes melhorar o teu equipamento!" << endl << "A tua primeira missão é derrotar um goblin que está a aterrorizar uma aldeia próxima! Boa sorte." << endl;
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
	cout << "Estás a lutar com um dos goblin!, eles têm 20 de vida. Boa sorte!!" << endl;
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
						if (num == 20)
						{
							cout << "\33[92mCRÍTICO!!\33[0m" << endl;
							cout << "Dano dobrado!" << endl;
							cout << "Role o dado para dar dano no monstro (1) : ";
							cin >> resp;
							num == 0;
							if (resp == 1)
							{
								num = ((rand() % 7 + 1) * 2) + dano;
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
					cout << "Desististe, estás com Medo ??!!" << endl;
				}
			}
		} while (vidaM > 0 && vidaP > 0);
		{
			if (vidaM <= 0)
			{
			cout << "\33[32mVocê venceu o monstro!\33[0m" << endl;
			vidaM = 20;
			}
			else
			{
			cout << "Você foi derrotado pelo monstro!" << endl;
			}
		}
	} while (count < 2 && vidaP>0);
	{
		cout << "Mataste os dois goblins! Parabéns!!" << endl << "Recebeste xp e ouro";
		ouro = ouro + 50;
		xp = xp + 20;
	}
	cout << "Depois de uma longa batalha, voltas à guilda para falares com a mestre." << endl;
	cout << "\33[35mMestre da Guilda:\33[0m Parabéns senhor herói " << nome << ", completaste a tua primeira missão com sucesso!" << endl << "Aqui está a tua recompensa de 50 de ouro e 30 de xp." << endl;
	ouro = ouro + 50;
	xp = xp + 30;
	cout << "Tu agora tens " << ouro << " de ouro" << endl << "upaste de nivel, recebes-te 10 pontos para distribuir nas tuas stats!" << endl;
	pontos = pontos + 10;
	cout << "Distribua os pontos agora? (s/n)" << endl;
	cin >> escolha;
	if (escolha == 's' || escolha == 'S')
	{
		for (i = 0; i < pontos; i++)
		{
			cout << "Pontos restantes: " << pontos - i << endl;
			cout << "Pontos de Vida : ";
			cin >> pontosV;
			vidaP = vidaP + pontosV;
			cout << "Pontos de Dano : ";
			cin >> pontosD;
			dano = dano + pontosD;
			cout << "Pontos de Velocidade : ";
			cin >> pontosVe;
			velocidade = velocidade + pontosVe;
		}
	}
	else if (escolha == 'n' || escolha == 'N')
	{
		cout << "Muito bem, podes distribuir os pontos mais tarde." << endl;
	}
	return 0;
}