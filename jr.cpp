/*
Solucion: de Juan Carlos Resendiz Camacho
Proceso para resolver el problema:
Lo que yo pensé para resolver el ejercicio es primero en base a 'a' cubrir el lado n
con la condición de que mientras la suma de cada a sea menor a n se va a añadir otro a y a su vez se va a sumar.
Hice lo mismo para el lado m y por último los multiplique debido a que el área a cubrir es un rectángulo 
*/

// Solucion implementada:
// complejidad: O(n)
#include <iostream>
using namespace std;

int main(){
    int n, m, a, aux=0, c1=0, c2=0;
    cin>>n>>m>>a;
    while(aux<n){
        aux+=a;
        c1++;
    }
    aux=0;
    while(aux<m){
        aux+=a;
        c2++;
    }
    cout<<c1*c2;
    return 0;
}