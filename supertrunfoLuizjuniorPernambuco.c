#include <stdio.h>

int main(){

   char Carta [20] = "A01";
   char Estado [50] = "Pernambuco";
   char Cidade [20] = "Recife";

   float População = 9058155.000;
   float Área = 98067881;
   float PIB = 245828.000;
   float Turismo = 28;
   float Densidade;
   float renda;

   Densidade = (float) (Área / População);
   renda = (float) (População / PIB);
   
   printf("Carta: %s\n" , Carta);
   printf("Estado: %s\n" , Estado);
   printf("Cidade: %s\n" , Cidade);
   printf("População: %.3f\n" , População);
   printf("Área: %.3f Km²\n" , Área);
   printf("PIB: %.3f\n" , PIB);
   printf("Pontos Turísticos: %.0f\n" , Turismo);
   printf("Densidade populacional: %.3f\n" , Densidade);
   printf("PIB Per Capita: %.1f\n" , renda);





       
   
   
   return 0;

}
