
/*
Solucion: de Jonathan Rafael Arreola Ramirez

Proceso para resolver el problema:
1. Comprender el problema y datos de entrada
2. Calcular lozas para un eje y despues para el otro, al final multiplicar ambos resultados
*/

// Solucion implementada:
// complejidad: O(1)

# include <iostream>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    int output;
    cin >> a >> b >> c;

    // EJE X --> output
    output = (a/c);
    if(a%c > 0) output++;
    // EJE Y --> temp
    int temp = (b/c);
    if(b%c > 0) temp++;
    // Multiplicacion
    output *= temp;

    cout << output << endl;
    return 0;
}
