//jogo Black Jack
/*
   PROGRAMA........: JOGO BLACK JACK
   CRIADO EM.......: 08/10/2011
   TERMINADO EM....: 09/10/2011
   ATUALIZADO EM...: 09/10/2011
   AUTOR...........: WALLYSON NUNES
   E-MAIL..........: linho_msn_@hotmail.com
   DESCRIÇÃO.......: JOGO ONDE O OBJETIVO DO JOGO É FAZER 21 NAS CARTAS.
                     UM JOGO DE CARTAS INCRÍVEL
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main (void) {
		
	string tecla;
	 char nome[50];
	 int carta1=0, i=0, carta2=0, jogador1, jogador2, aposta, rodada=1;
	 srand(time(NULL)); // inicializa o gerador de números aleatórios para cada vez que ser inicializado usar números diferentes
	
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "X                                                          X\n";
	cout << "X     XXXXXX     XX         XXXXX      XXXXX   XX   XX     X\n";
    cout << "X     XX    XX   XX        XX   XX    XX       XX  XX      X\n";
    cout << "X     XX   XX    XX        XX   XX   XX        XX XX       X\n";
    cout << "X     XX XX      XX        XXXXXXX   XX        XXXX        X\n";
    cout << "X     XX  XX     XX        XX   XX   XX        XX XX       X\n";
    cout << "X     XX   XX    XX        XX   XX    XX       XX  XX      X\n";
    cout << "X      XXXX      XXXXXXX   XX   XX     XXXXX   XX   XX     X\n";
    cout << "X                                                          X\n";    
    cout << "X           XXXXXXXX    XXXXX      XXXXX   XX   XX         X\n";      
    cout << "X              XX      XX   XX    XX       XX  XX          X\n";     
    cout << "X              XX      XX   XX   XX        XX XX           X\n";    
    cout << "X              XX      XXXXXXX   XX        XXXX            X\n"; 
    cout << "X           X  XX      XX   XX    XX       XX  XX          X\n"; 
    cout << "X           XXXX       XX   XX     XXXXX   XX   XX         X\n";
	cout << "X                                                          X\n";
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "         APERTER UMA LETRA E DIGITE ENTER PARA CONTINUAR !\n";
	 cin >> tecla;
	getchar(); // lima o buffer do teclado
		
	cout << "Digite o seu nome: ";
	 cin.getline (nome, 50);
	cout << "Digite quanto você quer apostar: ";
	 cin >> aposta;
	cout << "\n";
	voltar:
	do {
	
	jogador1 = rand() % 11 + 2; //jogador1 recebe carta aleatória 
	jogador2 = rand() % 11 + 2; //jogador2 recebe carta aleatória
	carta1 = carta1 + jogador1;
	carta2 = carta2 + jogador2;
	
	cout << "               Cartas do "<< nome <<" e cartas do computador:\n\n";
    cout << "                      XXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	cout << "                      X  Jogador1   Computador X\n";
    cout << "                      X           |            X\n";
    cout << "                      X     ___"<< jogador1 <<"__|__X___      X\n";
    cout << "                      X     Total | Total      X\n";
    cout << "                      X        "<< carta1 << "  |  X         X\n";
    cout << "                      X                        X\n";    
    cout << "                      XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
    
if (carta1 >= 21 || carta2 >= 21 || i == 2 ) { 
	
		cout << "                      XXXXXXXXXXXXXXXXXXXXXXXXXX\n";
		cout << "                      X  Jogador1   Computador X\n";
		cout << "                      X           |            X\n";
		cout << "                      X     ___"<< jogador1 <<"__|__"<< jogador2 <<"___      X\n";
		cout << "                      X     Total | Total      X\n";
		cout << "                      X        "<< carta1 << "  |  "<< carta2 <<"         X\n";
		cout << "                      X                        X\n";    
		cout << "                      XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
		 
		if ((carta1 > carta2 && carta1 <= 21) || (carta2 > 21 && carta1 <= 21)) {
			aposta += 250 * rodada;
		cout << "Você Ganhou !\n";
		 cout << "Total da aposta: "<< aposta << endl;
		}
	
		else if ((carta2 > carta1 && carta2 <=21) || (carta1 > 21 && carta2 <= 21)) {
			aposta -= 150 / rodada;
		cout << "Você perdeu !\n";
		 cout << "Total da aposta: "<< aposta << endl;
		}
		
		else if (carta1 > 21 && carta1 < carta2){
			aposta += 250 * rodada;
		cout << "Você Ganhou !\n";
		 cout << "Total da aposta: "<< aposta << endl;
		}
	 
		else if (carta2 > 21 && carta2 < carta1){
			aposta -= 150 / rodada;
		cout << "Você perdeu !\n";
		 cout << "Total da aposta: "<< aposta << endl;	
		}
			
		else {
			 aposta =+ 0;
			 cout << "Vocês empataram !\n";
			}
	break;
	} 
	
	else {
		cout << "Deseja fazer outra jogada ? 1-(Sim), 2-(Não) \n";
		 cin >> i;
	 }
	 
	 if (i == 2) {
		
		cout << "                      XXXXXXXXXXXXXXXXXXXXXXXXXX\n";
		cout << "                      X  Jogador1   Computador X\n";
		cout << "                      X           |            X\n";
		cout << "                      X     ___"<< jogador1 <<"__|__"<< jogador2 <<"___      X\n";
		cout << "                      X     Total | Total      X\n";
		cout << "                      X        "<< carta1 << "  |  "<< carta2 <<"         X\n";
		cout << "                      X                        X\n";    
		cout << "                      XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n";
		 
		if ((carta1 > carta2 && carta1 <= 21) || (carta2 > 21)) {
			aposta += 1000;
		cout << "Você Ganhou !\n";
		 cout << "Total da aposta: "<< aposta << endl;
		}
	
		else if ((carta2 > carta1 && carta2 <=21) || (carta1 > 21)) {
			aposta -= 250;
		cout << "Você perdeu !\n";
		 cout << "Total da aposta: "<< aposta << endl;
		}
			
		else aposta =+ 0;
	  break;
	 }
		
	 
	 	} while (carta1 < 21 || carta2 < 21);
	 	
	 cout << "Deseja jogar novamente ? 1-(Sim), 2(Não)\n";
	  cin >> i;
	 
	 if (i == 1) {
		 carta1 = 0;
		 carta2 = 0;
		 jogador1 = 0;
		 jogador2 = 0;
		 rodada += 1;
		 goto voltar;
	 }
				
	return 0;
	}

