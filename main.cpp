#include <iostream>
#include <string>
#include "HTHPlus.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string leerCadena();

int menuPrincipal();

int menuMod();
using namespace std;
int main(int argc, char** argv) {
	int op=0;
	HTHPlus* var=new HTHPlus();
	while(op!=8) {
		switch(op=menuPrincipal()) {
			case 1: {
				cin.ignore();
				string titulo="";
				string genero="";
				string director="";
				cout<<"Ingrese el titulo de la pelicula: ";
				getline(cin,titulo);

				cout<<"Ingrese el director de la pelicula: ";
				getline(cin,director);


				cout<<"Ingrese el genero de la pelicula: ";
				getline(cin,genero);

				cout<<genero<<endl;
				var->addPeliculas(new Pelicula(titulo, director, genero));

				cout<<"Pelicula agregada exitosamente"<<endl;
				break;
			}//Fin caso 1

			case 2: {//Modificar
				int opMod=0;
				opMod=menuMod();//Elegir que quiere modificar
				cout<<"\n";
				var->listarPeliculas();
				int pos=0;
				cout<<"Ingrese la posicion de la pelicula que quiere modificar: ";
				cin>>pos;
				var->modificar(pos, opMod);
				break;
			}//Fin caso 2

			case 3: {//eliminar pelicula
				var->listarPeliculas();
				int pos=0;
				cout<<"Ingrese la posicion de la pelicula que quiere eliminar: ";
				cin>>pos;
				var->deletePelicula(pos);
				break;
			}//Fin caso 3

			case 4: {//Imprimir peliculas por fenero
				var->imprimirPeliculasG();
				break;
			}//Fin caso 4

			case 5: {
				cin.ignore();
				string palabra="";
				cout<<"Ingrese el titulo de la pelicula que quioere buscar: "<<endl;
				getline(cin,palabra);
				var->buscarPelicula(palabra);
				break;
			}//Fin caso 5

			case 6: {
				var->sortValoracion();
				break;
			}//Fin caso 6

			case 7: {
				var->listarPeliculas();
				break;
			}

		}//Fin del switch
	}//Fin del while
	delete var;
	var=NULL;
	return 0;
}//Fin del main

int menuPrincipal() {
	int op=0;
	while(true) {//si no presione el 4 va a seguir el menu
		cout<<"===================="<<endl
		    <<"	MENU"<<endl
		    <<"1. Agregar Pelicula"<<endl
		    <<"2. Modificar Pelicula"<<endl
		    <<"3. Eliminar Pelicula"<<endl
		    <<"4. Imprimir peliculas por genero"<<endl
		    <<"5. Buscar Pelicula"<<endl
		    <<"6. Imprimir peliculas ordenadas por valoracion"<<endl
		    <<"7. Imprimir peliculas"<<endl
		    <<"8. Salir"<<endl;
		cout<<"Ingrese la opcion: ";
		cin>>op;
		if(op>0&&op<9)
			return op;
	}
}

int menuMod() {
	int op=0;
	while(true) {//si no presione el 4 va a seguir el menu
		cout<<"===================="<<endl
		    <<"	MENU"<<endl
		    <<"1. Modificar titulo"<<endl
		    <<"2. Modificar Director"<<endl
		    <<"3. Modificar genero"<<endl
		    <<"4. Modificar valoracion"<<endl;
		cout<<"Ingrese la opcion: ";
		cin>>op;
		if(op>0&&op<5)
			return op;
	}
}



