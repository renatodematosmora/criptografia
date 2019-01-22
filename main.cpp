#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include "Criptoteca.h"

using namespace std;

int main()
{
    int opcao;
    char conteudo[1000];
    FILE *arq, *arq2, *arq3;
    setlocale(LC_ALL, "Portuguese");
    do{
        system("cls");
        printf("-=-=-=-=-=-=-=-=-=-=- MENU =-=-=-=-=-=-=-=-=-=-");
        printf("\n");
        printf("\n1 - Visualizar dados do arquivo");
        printf("\n2 - Criptografar dados do arquivo");
        printf("\n3 = Decriptografaz dados do arquivo");
        printf("\n\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printf("\n");
        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);
        printf("\n\n");

        switch(opcao){
            case 1:
                arq = fopen("arquivo.txt", "r");
                if(!arq){
                    perror("Erro! Impossivel abrir o arquivo!\n");
                    exit(0);
                }
                while(!feof(arq)){
                    fgets(conteudo, 1000, arq);
                    printf(conteudo);
                }
                fclose(arq);
                break;
            case 2:
                arq = fopen("arquivo.txt", "r");
                if(!arq){
                    perror("Erro! Impossivel abrir o arquivo!\n");
                    exit(0);
                }
                Criptografar(arq, arq2);
                fclose(arq);
                break;
            case 3:
                arq2 = fopen("arquivocriptografado.txt", "r");
                if(!arq2){
                    perror("Erro! Impossivel abrir o arquivo!\n");
                    exit(0);
                }
                Decriptografar(arq2, arq3);
                fclose(arq2);
                break;
            default:
                if(opcao != 0){
                    printf("Opcao invalida!");
                }
                break;
        }
        getch();
    }while(opcao != 0);
}
