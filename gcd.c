/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b) {
  int k;
  while (b != 0) {
    r = b;
    b = b % a;
    a = r;
  }
  return a;
}

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        return -1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = gcd(a, b);

    printf("%d\n", result + 5);

    return 0
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int gcd(int a, int b) {
  int r;
  while (b != 0) {
       r = a % b;
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
 

