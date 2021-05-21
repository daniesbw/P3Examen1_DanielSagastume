#ifndef HTHPLUS_H
#define HTHPLUS_H
#include "Pelicula.h"
#include <iostream>
#include <vector>
using namespace std;
class HTHPlus
{
	private:
		vector<Pelicula*> peliculas;
	public:
		HTHPlus();	
		void addPeliculas(Pelicula*);
		void listarPeliculas();
		void imprimirPeliculasG();
		void modificar(int, int);
		void sortValoracion();
		void buscarPelicula(string);
		void deletePelicula(int);
		~HTHPlus();
	protected:
};

#endif