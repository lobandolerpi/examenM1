#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>


int main() {
   // Aquí només agafo el codi d'usuari per veure que s'està executant OK.
   int uidReal = getuid();
   int uidE = geteuid();
   printf("L'usuari número %d\n", uidReal);
   printf("Executa aquest arxiu com si fos l'usuari  %d\n", uidE);

   // Creo el path al directori
   std::ofstream myfile;
   myfile.open("directori_personal/arxiuP");  
   //myfile.open("arxiuP");  
   myfile << "He creat el fitxer sent l'usuari " << std::to_string(uidReal)  << std::endl;
   myfile << "Amb els permisos de l'usuari " << std::to_string(uidE)  << std::endl;
   myfile.close();  
}
// Per compilar amb iostream
// gcc create_arxiuP.cpp -lstdc++ -o create_arxiuP
