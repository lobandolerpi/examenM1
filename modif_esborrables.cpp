#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>


int main() {
   // Aquí només agafo el codi d'usuari per veure que s'està executant OK.
   int uidReal = getuid();
   int uidE = geteuid();
   std::string line;
   printf("L'usuari número %d\n", uidReal);
   printf("Executa aquest arxiu com si fos l'usuari  %d\n", uidE);

   // Creo el path al directori
   std::fstream myfile;
   
   // GRUPS W
   myfile.open("directori_esborrable_grups/arxiuW"); 
   std::getline(myfile,line); // Conservo 1 linia només.
//   myfile << line << std::endl;
   myfile << "L'usuari " << std::to_string(uidE)  << "ha modificat això " << std::endl;     //{
   myfile.close();  

   std::remove("directori_esborrable_grups/arxiuD"); 

   // PROPIETARI W
   myfile.open("directori_esborrable_propietari/arxiuW");
   std::getline(myfile,line); // Conservo 1 linia només.
//   myfile << line << std::endl;
   myfile << "L'usuari " << std::to_string(uidE)  << "ha modificat això " << std::endl;     //{
   myfile.close();  

   std::remove("directori_esborrable_propietari/arxiuD"); 
}
// Per compilar amb iostream
// gcc create_arxiuP.cpp -lstdc++ -o create_arxiuP
