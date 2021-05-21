#include "Pelicula.h"
#include <string>
#include <iostream>
#include<cstdlib>
#include <ctime> 
using namespace std;
Pelicula::Pelicula()
{
	int valoracion=0;
}

//Constructor sobrecargado
Pelicula::Pelicula(string titulo, string director, string genero)
{
	srand((unsigned)time(0)); 
	this->titulo=titulo;
	this->director=director;
	this->genero=genero;
	this->valoracion=(rand()%5)+1;
}

void Pelicula::setTitulo(string titulo)
{
	this->titulo=titulo;
}

string Pelicula::getTitulo(){
	return titulo;
}

void Pelicula::setDirector(string director)
{
	this->director=director;
}

string Pelicula::getDirector(){
	return director;
}

void Pelicula::setGenero(string genero)
{
	this->genero=genero;
}

string Pelicula::getGenero(){
	return genero;
}

void Pelicula::setValoracion(int valoracion)
{
	this->valoracion=valoracion;
}

int Pelicula::getValoracion(){
	return valoracion;
}

void Pelicula::toString(){
	cout<<"||Pelicula||= "<<titulo<<" - "<<director<<" - "<<genero<<" - "<<valoracion<<"/5"<<endl;
}

Pelicula::~Pelicula()
{
	string titulo=NULL;
	string genero=NULL;
	string director=NULL;
	int valoracion=0;
}