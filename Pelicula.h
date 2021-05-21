#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
class Pelicula
{
	private:
		string titulo;
		string director;
		string genero;
		int valoracion;
	public:
		Pelicula();
		Pelicula(string, string, string);
		void setTitulo(string);
		string getTitulo();
		void setDirector(string);
		string getDirector();
		void setGenero(string);
		string getGenero();
		void setValoracion(int);
		int getValoracion();
		void toString();
		~Pelicula();
	protected:
};

#endif