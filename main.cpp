#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(){
	Estudiante *cab = NULL, objeto = NULL;
	int i, caso;;
	do{
		i=0;
		cout<<++i<<") Crear lista estudiantes."<<endl;
		cout<<++i<<") Mostrar estudiantes."<<endl;
		cout<<++i<<") Borrar estudiante por codigo."<<endl;
		cout<<++i<<") Borrar estudiante por carrera."<<endl;
		cout<<++i<<") Tiempo estudiante carrera."<<endl;
		cout<<++i<<") Edad estudiante."<<endl;
		cout<<++i<<") Estudiantes en prueba academica."<<endl;
		cout<<++i<<") Salir"<<endl;
		cout<<">> ";
		cin>>caso;
		switch(caso){
			case 1:
				objeto.crearLista(cab);
				break;
			case 2:
				objeto.mostrar(cab);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				cout<<"Adios"<<endl;
				break;
		}
	}while(caso != 8);
	return 0;
}
