#include <stdio.h>
#include <stdlib.h>

int main(){
    char p1='1', p2='2', p3='3', p4='4', p5='5', p6='6', p7='7', p8='8', p9='9';

    char jogador = 'X';
    int jogadas = 0;
    int ganhou = 0;
    int escolha;

    while (jogadas <9 && ganhou ==0){
        system("cls");


    //desenho do tabuleiro
    printf("\n JOGO DA VELHA \n\n");
    printf (" %c | %c | %c \n",  p1, p2, p3);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", p4, p5, p6);
    printf("---|---|---\n");
    printf(" %c | %c |  %c\n\n", p7, p8, p9);

    printf("Digite a sua escolha:\n");
    scanf("%d", &escolha);

    switch(escolha){
    case 1: if(p1 == '1'){
        p1=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 2: if(p2 == '2'){
        p2=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 3: if(p3 == '3'){
        p3=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 4: if(p4 == '4'){
        p4=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 5: if(p5 == '5'){
        p5=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 6: if(p6 == '6'){
        p6=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 7: if(p7 == '7'){
        p7=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 8: if(p8 == '8'){
        p8=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    case 9: if(p9 == '9'){
        p9=jogador;
        }else{
            printf("Jogada Inválida \n");
            system("pause");
            continue;
        }
        break;
    }
    //verificar ganhador na horizontal
    if(p1 == p2 && p2 == p3) ganhou = 1;
    if(p4 == p5 && p5 == p6) ganhou = 1;
    if(p7 == p8 && p8 == p9) ganhou = 1;
    //verificar ganhador na vertical
    if(p1 == p4 && p4 == p7) ganhou = 1;
    if(p2 == p5 && p5 == p8) ganhou = 1;
    if(p3 == p6 && p6 == p9) ganhou = 1;

    //verificar ganhador na diagonal
    if(p1 == p5 && p5 == p9) ganhou = 1;
    if(p1 == p5 && p5 == p7) ganhou = 1;

    if(ganhou !=1){
        if(jogador == 'X'){
            jogador = 'O';
    }else{
        jogador = 'X';
        }
    }else{
        printf("O jogador %c foi vitorioso.\n",jogador);
    }
    jogadas ++;
    }

    if(jogadas==9){
        printf("VELHA!!!\n");
    }
    system("pause");
    return 0;
}
