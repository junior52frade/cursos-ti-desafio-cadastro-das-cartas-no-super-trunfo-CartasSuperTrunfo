#include <stdio.h>

int main(){


   char Carta [20] = "A02";
   char Estado [50] = "Ceará";
   char Cidade [20] = "Fortaleza";

  
   float População = 8794957.000;
   float Área = 148894442;
   float PIB = 213601.00;
   float Turismo = 16;
   float Densidade;
   float Renda;

   Densidade = (float) (Área / População);
   Renda = (float) (População / PIB);
   
   printf("Carta: %s\n" , Carta);
   printf("Estado: %s\n" , Estado);
   printf("Cidade: %s\n" , Cidade);
   printf("População: %.3f\n" , População);
   printf("Área: %.3f Km²\n" , Área);
   printf("PIB: %.3f\n" , PIB);
   printf("Pontos Turísticos: %.0f\n" , Turismo);
   printf("Densidade populacional: %.3f\n" , Densidade);
   printf("PIB Per Capita: %.1f\n" , Renda);

   
   return 0;

   

  


}