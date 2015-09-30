#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(){
	Estudiante *cab = NULL;
	Estudiante objeto = NULL;
	objeto.crearLista(cab);
	objeto.mostrar(cab);
	return 0;
}
