#include "HTHPlus.h"
#include <iostream>
#include "Pelicula.h"
#include <vector>
#include <cstdlib>
using namespace std;
HTHPlus::HTHPlus() {

}

void HTHPlus::addPeliculas(Pelicula* peli) {
	peliculas.push_back(peli);
}

void HTHPlus::listarPeliculas() {
	cout<<"\n===PELICULAS ACTUALES==="<<endl;
	for(Pelicula* pe: peliculas) {
		pe->toString();
	}
}

void HTHPlus::imprimirPeliculasG() {
	vector<string> generos;//Todos los generos actuales:
	int i=0;
	for(Pelicula* pe: peliculas) {
		string genero= "";
		genero= pe->getGenero();
		generos.push_back(genero);
	}

	for(string g: generos) {
		cout<<g<<": "<<endl;//Imprimir categoria
		for(Pelicula* pe: peliculas) {
			//Recibir los datos de la pelicula
			string titulo= "";
			titulo=pe->getTitulo();

			string director= "";
			director= pe->getDirector();

			int valoracion=0;
			valoracion=pe->getValoracion();
			cout<<titulo<<" - "<<director<<" "<<valoracion<<"/5"<<endl;//imprimir pelicula

			delete pe;
			pe=NULL;
		}
	}
}//fin imprimir por genero

void HTHPlus::modificar(int pos, int op) {

	if(op==1) {//Modificar titulo
		string tit="";
		cout<<"Ingrese el nuevo titulo de la pelicula: ";
		cin>>tit;
		peliculas[pos]->setTitulo(tit);
		cout<<"Modificacion exitosa"<<endl;
	} else if(op==2) { //Modificar director
		string dic="";
		cout<<"Ingrese el nuevo director de la pelicula: ";
		cin>>dic;
		peliculas[pos]->setDirector(dic);
		cout<<"Modificacion exitosa"<<endl;
	} else if(op==3) { //Modificar genero
		string gen="";
		cout<<"Ingrese el nuevo genero de la pelicula: ";
		cin>>gen;
		peliculas[pos]->setGenero(gen);
		cout<<"Modificacion exitosa"<<endl;
	} else if(op==4) { //Modificar valoracion
		int var=0;
		var=(rand()%5)+1;
		peliculas[pos]->setValoracion(var);
		cout<<"Modificacion exitosa"<<endl;
	}
}

void HTHPlus::deletePelicula(int pos) { //Delete pelicula
	delete[] peliculas[pos];
	peliculas.erase(peliculas.begin()+pos);
}

void HTHPlus::sortValoracion() {

	for(int i=5; i>0; i++) {
		for(Pelicula* pe:peliculas) {
			int valActual=0;
			valActual=pe->getValoracion();
			if(valActual==i){
				pe->toString();
			}
			delete pe;
			pe=NULL;	
		}
	}

}//Fin sortValoracion

void HTHPlus::buscarPelicula(string palabra){
	for(Pelicula* pe: peliculas){
		string titulo="";
		titulo=pe->getTitulo();
		cout<<"Peliculas encontradas: "<<endl;
		if(titulo.find(palabra) != string::npos){
			pe->toString();
		}
		delete pe;
		pe=NULL;
	}
}

HTHPlus::~HTHPlus() {
	
}