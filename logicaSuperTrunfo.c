#include <stdio.h>
#include <string.h>

    int main(){    //VARIAVEIS//
        char estado[20], cidade[22], codigo[10], estado2[30], cidade2[40], codigo2[15];
        int pontosturisticos, pontosturisticos2;
        unsigned long int populacao, populacao2;
        float area, pib, area2, pib2;
        float densidade, densidade2, pibpercapita, pibpercapita2, superPoder1, superPoder2;
       
       //INSERÇÃO DE DADOS

        printf("Digite o código da carta 01:");
        fgets(codigo, sizeof (codigo), stdin);
        codigo[strcspn(codigo, "\n")] = 0; //REMOVE O \n
        
        printf("Digite seu estado:");
        fgets(estado, sizeof (estado), stdin);
        estado[strcspn(estado, "\n")] = 0;
        
        printf("Digite sua cidade:");
        fgets(cidade, sizeof (cidade), stdin);
        cidade[strcspn(cidade, "\n")] = 0;
        
        printf("Digite a população:");
        scanf("%lu", &populacao);
        getchar();

        printf("Digite a área:");
        scanf("%f", &area);
        getchar();

        printf("Digite o PIB:");
        scanf("%f", &pib);
        getchar();

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos);
        getchar();
               
        
        //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO O RESULTADO DA DIVISÃO PARA OBTER O RESULTADO ESPERADO

        densidade = populacao / area;
        pibpercapita = pib / populacao;
        superPoder1 = (populacao + area + pib + pontosturisticos + densidade + pibpercapita);

        printf("Digite o código da carta 02:");
        fgets(codigo2, sizeof (codigo2), stdin);
        codigo2[strcspn(codigo2, "\n")] = 0;
        
        printf("Digite seu estado:");
        fgets(estado2, sizeof (estado2), stdin);
        estado2[strcspn(estado2, "\n")] = 0;
        
        printf("Digite sua cidade:");
        fgets(cidade2, sizeof (cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = 0;

        printf("Digite a população:");
        scanf("%lu", &populacao2);
        getchar();

        printf("Digite a área:");
        scanf("%f", &area2);
        getchar();

        printf("Digite o PIB:");
        scanf("%f", &pib2);
        getchar();

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos2);
        getchar();
                
        
        //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO OPERADORES ARITMÉTICOS
        densidade2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        superPoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2); //CALCULO SUPER PODER



        //IMPRESSÃO DAS CARTAS COMPLETAS JÁ COM DADOS INSERIDOS
        printf("\n");
        printf("CARTA 1\n");
        printf("Código da carta: %s\n", codigo);
        printf("Nome do Estado: %s\n", estado);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %lu habitantes\n", populacao);
        printf("Área de: %.3f M²\n", area);
        printf("PIB de: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", densidade);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita);
        printf("Super Poder: %.2f", superPoder1);
    
        printf("\n\n");
        printf("CARTA 2\n");
        printf("Código da carta: %s\n", codigo2);
        printf("Nome do Estado: %s\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %lu habitantes\n", populacao2);
        printf("Área de: %.3f M²\n", area2);
        printf("PIB de: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita2);
        printf("Super Poder: %.2f\n\n", superPoder2);

        int opcao, opcao2;

        //INSERÇÃO DO MENU PARA QUE O ÚSUARIO SELECIONE O ATRIBUTO ESCOLHIDO

        printf("** MENU PARA SELEÇÃO DE ATRIBUTOS PARA COMPARAÇÃO**\n");
        printf("Selecione um atributo para comparação:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("Digite a primeira opção escolhida:");
        scanf("%d", &opcao);

        int resultado, resultado2;
        float somaCarta1 = 0, somaCarta2 = 0;

        switch (opcao){           //IMPLEMENTAÇÃO DO SWITCH     
        case 1:
               printf("Você escolheu: População.\n");
               printf("%s: %lu habitantes.\n", estado, populacao);
               printf("%s: %lu habitantes.\n", estado2, populacao2);

             resultado = (populacao > populacao2) ? 1 : (populacao < populacao2) ? 0 : -1;
             
             somaCarta1 += populacao; //Adiciona os valores para realizar a soma final dos atributos
             somaCarta2 += populacao2;
               
        break;
        case 2:
               printf("Você escolheu: Área.\n");
               printf("%s: %.3f M².\n", estado, area);
               printf("%s: %.3f M².\n", estado2, area2);

             resultado = (area > area2) ? 1 : (area < area2) ? 0 : -1;

             somaCarta1 += area;
             somaCarta2 += area2;
              
        break;
        case 3:
               printf("Você escolheu: PIB.\n");
               printf("%s: %.2f bilhões de reais.\n", estado, pib);
               printf("%s: %.2f bilhões de reais.\n", estado2, pib2);
 
             resultado = (pib > pib2) ? 1 : (pib < pib2) ? 0 : -1;

             somaCarta1 += pib;
             somaCarta2 += pib2;
                
        break;
        case 4:
               printf("Você escolheu: Pontos turísticos.\n");
               printf("%s: %d pontos turísticos.\n", estado, pontosturisticos);
               printf("%s: %d pontos turísticos.\n", estado2, pontosturisticos2);

             resultado = (pontosturisticos > pontosturisticos2) ? 1 : (pontosturisticos < pontosturisticos2) ? 0 : -1;

               somaCarta1 += pontosturisticos;
               somaCarta2 += pontosturisticos2;
                
        break;
        case 5:
               printf("Você escolheu: Densidade populacional.\n");
               printf("%s: %.2f hab/km².\n", estado, densidade);
               printf("%s: %.2f hab/km².\n", estado2, densidade2);

             resultado = (densidade < densidade2) ? 1 : (densidade > densidade2) ? 0 : -1;

               somaCarta1 += densidade;
               somaCarta2 += densidade2;
               

        break;
        default:
               printf("Opção inválida.\n");
        }      

        if (resultado == 1){
              printf("CARTA 01 - %s VENCEU!\n\n", estado);
  
              } else if (resultado == 0) {
                printf("CARTA 02 - %s VENCEU!\n\n",estado2);
  
              } else {
                printf("Atributo empatado!\n\n");  
              } 
       
        printf("Selecione um segundo atributo para comparação:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("Digite a segunda opção escolhida:");
        scanf("%d", &opcao2);

        if (opcao == opcao2){
            printf("Os atributos escolhidos são iguais.\n");
       
       }   else {
           switch (opcao2){
              case 1:
              printf("Você escolheu: População.\n");
              printf("%s: %lu habitantes.\n", estado, populacao);
              printf("%s: %lu habitantes.\n", estado2, populacao2);

            resultado2 = (populacao > populacao2) ? 1 : (populacao < populacao2) ? 0 : -1;

            somaCarta1 += populacao;
            somaCarta2 += populacao2;
              
       break;
       case 2:
              printf("Você escolheu: Área.\n");
              printf("%s: %.3f M².\n", estado, area);
              printf("%s: %.3f M².\n", estado2, area2);

            resultado2 = (area > area2) ? 1 : (area < area2) ? 0 : -1;

            somaCarta1 += area;
            somaCarta2 += area2;
             
       break;
       case 3:
              printf("Você escolheu: PIB.\n");
              printf("%s: %.2f bilhões de reais.\n", estado, pib);
              printf("%s: %.2f bilhões de reais.\n", estado2, pib2);

            resultado2 = (pib > pib2) ? 1 : (pib < pib2) ? 0 : -1;

            somaCarta1 += pib;
            somaCarta2 += pib2;
               
       break;
       case 4:
              printf("Você escolheu: Pontos turísticos.\n");
              printf("%s: %d pontos turísticos.\n", estado, pontosturisticos);
              printf("%s: %d pontos turísticos.\n", estado2, pontosturisticos2);

            resultado2 = (pontosturisticos > pontosturisticos2) ? 1 : (pontosturisticos < pontosturisticos2) ? 0 : -1;

            somaCarta1 += pontosturisticos;
            somaCarta2 += pontosturisticos2;
               
       break;
       case 5:
              printf("Você escolheu: Densidade populacional.\n");
              printf("%s: %.2f hab/km².\n", estado, densidade);
              printf("%s: %.2f hab/km².\n", estado2, densidade2);

            resultado2 = (densidade < densidade2) ? 1 : (densidade > densidade2) ? 0 : -1;

            somaCarta1 += densidade;
            somaCarta2 += densidade2;
              

       break;
       default:
              printf("Opção inválida.\n");
       }
       
       
       if (resultado2 == 1){
            printf("CARTA 01 - %s VENCEU!\n", estado);

            } else if (resultado2 == 0) {
              printf("CARTA 02 - %s VENCEU!\n",estado2);

            } else {
              printf("Atributo empatado!\n");  
            } 
       }
     

      printf("\n** RESULTADO FINAL DA RODADA **\n");
      printf("Soma dos atributos escolhidos para %s: %.2f\n", estado, somaCarta1);
      printf("Soma dos atributos escolhidos para %s: %.2f\n", estado2, somaCarta2);

      if (somaCarta1 > somaCarta2) {
          printf("CARTA 01 - %s VENCEU A RODADA!\n", estado);
      } else if (somaCarta1 < somaCarta2) {
          printf("CARTA 02 - %s VENCEU A RODADA!\n", estado2);
      } else {
          printf("A rodada terminou em EMPATE!\n");
}
           
  
}



