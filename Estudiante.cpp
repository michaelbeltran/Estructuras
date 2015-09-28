#include <iostream>
#include <stdio.h>
#include "Estudiante.h"
using namespace std;
Estudiante::Estudiante(bool crear){
	if(crear){
		char temp[60];
		cout<<"Ingrese su código: ";
		cin>>codigo;
		cout<<"ingrese nombre: ";
		gets(temp);
		nombre = temp;
		puts(nombre);
		cout<<"ingrese carrera: ";
		gets(temp);
		carrera = temp;
		puts(carrera);
		cout<<"ingrese edad: ";
		cin>>edad;
		cout<<"ingrese día de ingreso: ";
		cin>>dia;
		cout<<"ingrese mes de ingreso: ";
		cin>>mes;
		cout<<"ingrese año de ingreso: ";
		cin>>anio;
		cout<<"ingrese promedio: ";
		cin>>promedio;
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
	while(aux){
		cout<<"codigo: "<<aux->codigo<<endl;
		cout<<"Nombre: "<<*aux->nombre<<endl;
		cout<<"Carrera:"<<*aux->carrera<<endl;
		cout<<"Edad: "<<aux->edad<<endl;
		cout<<"Fecha de ingreso: "<<aux->dia<<"/"<<aux->mes<<"/"<<aux->anio<<endl;
		cout<<"Promedio: "<<aux->promedio<<endl;
		aux = aux->sig;
	}
}
