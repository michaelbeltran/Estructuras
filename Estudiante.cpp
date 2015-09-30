#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Estudiante.h"
using namespace std;
Estudiante::Estudiante(bool crear){
	if(crear){
		do{
			cout<<"Ingrese su código: ";
			cin>>codigo;
			if(codigo <= 0)
				cout<<"ERROR"<<endl;
		}while(codigo <= 0);
		cin.ignore();
		cout<<"ingrese nombre: ";
		nombre = (char*)malloc(61);
		cin.getline(nombre,60);
		cout<<"ingrese carrera: ";
		carrera = (char*)malloc(61);
		cin.getline(carrera,60);
		do{
			cout<<"ingrese edad: ";
			cin>>edad;
			if(edad <= 0 || edad > 100)
				cout<<"ERROR"<<endl;
		}while(edad <= 0 || edad > 100);
		do{
			cout<<"ingrese día de ingreso: ";
			cin>>dia;
			if(dia <= 0 || dia > 31)
				cout<<"ERROR"<<endl;
		}while(dia <= 0 || dia > 31);
		do{
			cout<<"ingrese mes de ingreso: ";
			cin>>mes;
			if(mes <= 0 || mes > 12)
				cout<<"ERROR"<<endl;
		}while(mes <= 0 || mes > 12);
		do{
			cout<<"ingrese año de ingreso: ";
			cin>>anio;
			if(anio < 1990 || anio > 2015)
				cout<<"ERROR"<<endl;
		}while(anio < 1990 || anio > 2015);
		do{
			cout<<"ingrese promedio: ";
			cin>>promedio;
			if(promedio <= 0 || promedio > 5)
				cout<<"ERROR"<<endl;
		}while(promedio < 0 || promedio > 5);
	}	
}
void Estudiante::crearCab(Estudiante *&cab){
	cab = new Estudiante(true);
	cab->ant = cab->sig = NULL;
}
void Estudiante::agregarNodo(Estudiante *&cab){
	Estudiante *aux = cab, *nuevo = NULL;
	while(aux->sig)
		aux = aux->sig;
	nuevo = new Estudiante(true);
	aux->sig = nuevo;
	nuevo->sig = NULL;
	nuevo->ant = aux;
}
void Estudiante::crearLista(Estudiante *&cab){
	char op = 's';
	while(op == 'S' || op == 's'){
		if(!cab)
			crearCab(cab);
		else
			agregarNodo(cab);
		cout<<"Desea agregar otro usuario S/N: ";
		cin>>op;
	}
}
void Estudiante::mostrar(Estudiante *cab){
	Estudiante *aux = cab;
	cout<<"***************************************"<<endl;
	while(aux){
		cout<<"codigo: "<<aux->codigo<<endl;
		cout<<"Nombre: "<<aux->nombre<<endl;
		cout<<"Carrera:"<<aux->carrera<<endl;
		cout<<"Edad: "<<aux->edad<<endl;
		cout<<"Fecha de ingreso: "<<aux->dia<<"/"<<aux->mes<<"/"<<aux->anio<<endl;
		cout<<"Promedio: "<<aux->promedio<<endl;
		cout<<"***************************************"<<endl;
		aux = aux->sig;
	}
}
int Estudiante::numeroNod(Estudiante *cab){
	Estudiante *aux = cab;
	int contador=0;
	while(aux){
		contador++;
		aux = aux->sig;
	}
	return contador;
}
void Estudiante::ordenarNod(Estudiante *cab){
	Estudiante *aux = cab, *temp = NULL;
	int numero_nod = numeroNod(cab);
	/*for(int = 1; i<numero_nod; i++){
		temp = aux->sig;
		j = i-1;
		while(aux	)
	}*/

}
void Estudiante::borrarCodigo(Estudiante *cab, int codigo){
	Estudiante *aux = cab;
	while(aux){
		if(aux->codigo == codigo){
			if(aux == cab){
				cab = cab->sig;
				cab->ant = NULL;
			}else{
				aux->sig->ant = aux->ant;
				aux = aux->sig;
			}
				
			break;
		}else
			aux = aux->sig;
	}
}
void Estudiante::borrarCarrera(Estudiante *cab, char *carrera){
	Estudiante *aux = cab;
	while(aux){
		if(strcmp(aux->carrera, carrera) == 0){
			if(aux == cab){
				cab = cab->sig;
				cab->ant = NULL;
				aux = cab;
			}else{
				aux->sig->ant = aux->ant;
				aux = aux->sig;
			}
		}
		aux = aux->sig;
	}
}
