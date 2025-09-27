/*
ce programme permet de trouver le plus grand diviseur commun en entre deux nombres 
*/
#include <stdlib.h>        // ici j'inclus un bibliothèque pour permettre l'utilisation de gérer la mémoire, convertir des chaines en nombre
#include <string.h>        // cette bibliothèque permet de manipuler des chaines de caractères
#include <stdio.h>         // permet de lire et écrire des donnée notament utile dans ce code pour la focntion printf
int gcd(int a, int b) {       // permet en utilisant la fonction gcd dans le terminal de rentrer deux donnée dans mon code soit a et b
  int r;                      // j'inclus la fonction r qui est le reste 
  while (b != 0) {            // b doit être différent de 0 
       r = a % b;             // permet de calculer le reste de la division 
       a = b;               
       b = r;
  }
  return a;                   // retourne le PGDC de deux chiffres entré plutôt
}

int main(int argc, char* argv[]) { // déclaration de la fonction main, argc = permet de compter le nbr d'argument, char* argv= permet de récupérer les valeur entrées dans le programme plutôt 
    if (argc <= 2) {                  
        return -1;          // permet de vérifier si il y à bien deux valeurs qui ont étées rentrées sinon cela quitte le programme  
    }

    int a = atoi(argv[1]); 
    int b = atoi(argv[2]);  // convertit en entier pour pouvoir l'utiliser dans les calculs

    int result = gcd(a, b); // le resulatat de la fonction gcd est stockée dans la variabée déclarée "result"

    printf("%d\n", result); // imprime la variable result dans le terminal
    
    return 0;   // fin du programme tout c'est bien passé 
}
 

