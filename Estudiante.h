#ifndef _ESTUDIANTE_
#define _ESTUDIANTE_
class Estudiante{
	long int codigo;
	char *nombre;
	char *carrera;
	short int edad;
	unsigned int dia;
	unsigned int mes;
	unsigned int anio;
	float promedio;
	Estudiante *sig;
	Estudiante *ant;
	public:
		Estudiante(bool);
		void crearCab(Estudiante *&);
		void agregarNodo(Estudiante *&);
		void crearLista(Estudiante *&);
		void mostrar(Estudiante *);
		void pruebaAca(Estudiante *);
		void tiempo(Estudiante *);
		void edadEstudiante(Estudiante *);
		int numeroNod(Estudiante *);
		void ordenarNod(Estudiante *);
		void borrarCodigo(Estudiante *&);
		void borrarCarrera(Estudiante *&);
		bool buscarCodigo(Estudiante *, int);
};
#endif
