
/*
Solucion: de Manuel Contreras Covarrubias
Proceso para resolver el problema:
primero nos damos cuenta que la primera formula es n*m y la segunda es a*a si queremos buscar cuantos cuadrados caben en el rectángulo te das cuenta que multiplicar (n/a)(m/a) 
te da el resultado de cuadrados que caben en  en el rectángulo pero esto sin contar que no se pueden cortar ni encimar en si, 
por lo tanto utilizas la misma formula pero al hacer cada división debes hacer
q se eleven al siguiente entero por ejemplo 1.5 a 2 para que ahora si cuando haces la multiplicación 
recibas el output de 4 ya que es (n/a)=1.5 pero lo elevas 2 y (m/a)=1.5= 2 y 2*2=4 que es el que se buscaba
*/

// Solucion implementada:
// complejidad: O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    //variables
	double n,m,a,x,y;
    //leer
    cin >> n >> m >> a;
    // variable = valor
     //logica resultado
    long long r=ceil(n/a)*ceil(m/a);
	
	cout <<r<<endl;
	
	//imprimir
   
    return 0;
}