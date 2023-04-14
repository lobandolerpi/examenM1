#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>

namespace fs = std::filesystem;

int main() {
   // Aquí només agafo el codi d'usuari per veure que s'està executant OK.
   int uidReal = getuid();
   int udeE = geteuid();
   printf("L'usuari número %d\n", uidReal);
   printf("Executa aquest arxiu com si fos l'usuari  %d\n", udeE);
   // Declaro variables
   std::fstream varFile;
   std::string varLine, varString;
   std::string pathFile;

   pathFile = "kk"

   varFile.open(pathFile, ios::in | ios::app);
   if (varFile
}
