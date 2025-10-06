#include <stdio.h>
#include <string.h>


struct Carta {
    char nome[50];        
    char estado[4];       
    char codigo[10];      
    int populacao;        
    float area;           
    float pib;            
    int pontosTuristicos; 
    float pibPerCapita;   
    float densidade;      
};


void mostrarCarta(struct Carta c, int numero) {
    printf("\nCARTA %d:\n", numero);
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nome);
    printf("População: %d habitantes\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.2f reais\n", c.pibPerCapita);
}


void compararCartas(struct Carta c1, struct Carta c2, int escolha) {
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    if (escolha == 1) {
        printf("Atributo: População\n");
        printf("%s: %d habitantes\n", c1.nome, c1.populacao);
        printf("%s: %d habitantes\n", c2.nome, c2.populacao);
        if (c1.populacao > c2.populacao)
            printf(" %s venceu!\n", c1.nome);
        else if (c2.populacao > c1.populacao)
            printf(" %s venceu!\n", c2.nome);
        else
            printf(" Empate!\n");
    }
    else if (escolha == 2) {
        printf("Atributo: Área\n");
        printf("%s: %.2f km²\n", c1.nome, c1.area);
        printf("%s: %.2f km²\n", c2.nome, c2.area);
        if (c1.area > c2.area)
            printf(" %s venceu!\n", c1.nome);
        else if (c2.area > c1.area)
            printf(" %s venceu!\n", c2.nome);
        else
            printf(" Empate!\n");
    }
    else if (escolha == 3) {
        printf("Atributo: PIB\n");
        printf("%s: %.2f bilhões de reais\n", c1.nome, c1.pib);
        printf("%s: %.2f bilhões de reais\n", c2.nome, c2.pib);
        if (c1.pib > c2.pib)
            printf(" %s venceu!\n", c1.nome);
        else if (c2.pib > c1.pib)
            printf(" %s venceu!\n", c2.nome);
        else
            printf(" Empate!\n");
    }
    else if (escolha == 4) {
        printf("Atributo: Pontos Turísticos\n");
        printf("%s: %d pontos\n", c1.nome, c1.pontosTuristicos);
        printf("%s: %d pontos\n", c2.nome, c2.pontosTuristicos);
        if (c1.pontosTuristicos > c2.pontosTuristicos)
            printf(" %s venceu!\n", c1.nome);
        else if (c2.pontosTuristicos > c1.pontosTuristicos)
            printf(" %s venceu!\n", c2.nome);
        else
            printf(" Empate!\n");
    }
    else if (escolha == 5) {
        printf("Atributo: Densidade Populacional (menor vence)\n");
        printf("%s: %.2f hab/km²\n", c1.nome, c1.densidade);
        printf("%s: %.2f hab/km²\n", c2.nome, c2.densidade);
        if (c1.densidade < c2.densidade)
            printf(" %s venceu! (menor densidade)\n", c1.nome);
        else if (c2.densidade < c1.densidade)
            printf(" %s venceu! (menor densidade)\n", c2.nome);
        else
            printf(" Empate!\n");
    }
    else {
        printf(" Opção inválida! Escolha um número do menu.\n");
    }
}


int main() {
    printf("==============================\n");
    printf("     SUPER TRUNFO CIDADES     \n");
    printf("==============================\n");

   
    struct Carta carta1 = {
        "São Paulo", "A", "A01",
        12325000, 1521.11, 699.28, 50,
        56724.32, 8102.47
    };

    struct Carta carta2 = {
        "Rio de Janeiro", "B", "B02",
        6748000, 1200.25, 300.50, 30,
        44532.91, 5622.24
    };

    int cartaEscolhida, opcao;

    do {
        printf("\n=== ESCOLHA SUA CARTA ===\n");
        printf("1 - Carta 1 (%s)\n", carta1.nome);
        printf("2 - Carta 2 (%s)\n", carta2.nome);
        printf("0 - Sair do jogo\n");
        printf("Digite o número da sua carta: ");
        scanf("%d", &cartaEscolhida);

        if (cartaEscolhida == 0) {
            printf("\n Saindo do jogo... Até logo!\n");
            break;
        }

        
        struct Carta jogador, oponente;
        if (cartaEscolhida == 1) {
            jogador = carta1;
            oponente = carta2;
        } else if (cartaEscolhida == 2) {
            jogador = carta2;
            oponente = carta1;
        } else {
            printf(" Opção inválida! Tente novamente.\n");
            continue;
        }

        
        do {
            printf("\n--- MENU DE COMPARAÇÃO ---\n");
            printf("1 - Comparar População\n");
            printf("2 - Comparar Área\n");
            printf("3 - Comparar PIB\n");
            printf("4 - Comparar Pontos Turísticos\n");
            printf("5 - Comparar Densidade Populacional\n");
            printf("6 - Mostrar todas as cartas\n");
            printf("0 - Trocar de carta ou sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);

            if (opcao >= 1 && opcao <= 5)
                compararCartas(jogador, oponente, opcao);
            else if (opcao == 6) {
                mostrarCarta(carta1, 1);
                mostrarCarta(carta2, 2);
            }
            else if (opcao == 0)
                printf("Voltando ao menu principal...\n");
            else
                printf(" Opção inválida! Tente novamente.\n");

        } while (opcao != 0);

    } while (cartaEscolhida != 0);

    return 0;
}
