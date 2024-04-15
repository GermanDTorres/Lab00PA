/*
 * main.cpp
 *
 *  Created on: Apr 2, 2024
 *      Author: ivan
 */




#include <iostream>
using namespace std;
#include <vector>
#include "headers/Objeto.h"
#include "headers/Libro.h"
#include "headers/JuegoMesa.h"
#include "headers/Nino.h"
#include "DT/DTObjetoRoto.h"


///////////////////////////////  NUEVO  ///////////////////////////////////////////

///////////////////////////////  NUEVO  ///////////////////////////////////////////


int main() {

	vector<Objeto*> objetos;

	vector<DTObjetoRoto*> objetosRotos;

	vector<Nino*> ninos;

	    // Crear libros y agregarlos al vector
	objetos.push_back(new Libro("Nacidos de la bruma: El imperio final", 2022, Estado::Roto, "Brandon Sanderson", 688));
	objetos.push_back(new Libro("Las Malas", 2022, Estado::Nuevo, "Camila Sosa Villada", 240));
	objetos.push_back(new Libro("El cocodrilo al que no le gustaba el agua", 2016, Estado::Roto, "Gemma Merino", 32));

	objetos.push_back(new JuegoMesa("Juego Uno", 2022, Estado::Roto, 7, 10));
	objetos.push_back(new JuegoMesa("Mazo de Cartas", 2019, Estado::Nuevo, 7, 4));
	objetos.push_back(new JuegoMesa("Dados", 2020, Estado::Roto, 2, 6));

	ninos.push_back(new Nino("María Laura", 10, "Nueva Palmira 1521", "099298190"));
	ninos.push_back(new Nino("Alex", 5, "Humberto Primo 1501", "29094141"));




	    // Acceder a un libro en el vector
	    cout << objetos[0]->to_string() << endl;
	    cout << objetos[1]->to_string() << endl;
	    cout << objetos[2]->to_string() << endl;
	    cout << objetos[3]->to_string() << endl;
	    cout << objetos[4]->to_string() << endl;
	    cout << objetos[5]->to_string() << endl;

	    cout << endl;
	    cout << endl;

	    ninos[0]->agregarObjeto(objetos[4]);
	    ninos[0]->agregarObjeto(objetos[0]);
	    ninos[0]->agregarObjeto(objetos[5]);

	    ninos[1]->agregarObjeto(objetos[3]);
	    ninos[1]->agregarObjeto(objetos[2]);

	    objetos[0]->AgregarNino(ninos[0]);
	    objetos[1]->AgregarNino(ninos[0]);
	    objetos[5]->AgregarNino(ninos[0]);

	    objetos[2]->AgregarNino(ninos[1]);
	    objetos[3]->AgregarNino(ninos[1]);



	    vector<string> objetosPrestadosNino0 = ninos[0]->listarObjetosPrestados();

	    // Iterar sobre la lista de objetos prestados y mostrarlos
	    cout << "Objetos prestados al primer niño:" << endl;
	    for (const string& objeto : objetosPrestadosNino0) {
	        cout << objeto << endl;
	    }


	    cout << endl;
	    cout << endl;

	    // Obtener la lista de objetos prestados para el segundo niño (ninos[1])
	    vector<string> objetosPrestadosNino1 = ninos[1]->listarObjetosPrestados();

	    // Iterar sobre la lista de objetos prestados y mostrarlos
	    cout << "Objetos prestados al segundo niño:" << endl;
	    for (const string& objeto : objetosPrestadosNino1) {
	        cout << objeto << endl;
	    }

	    cout << endl;
	    cout << endl;

	    //g
	    for (const Objeto* pObjeto : objetos) {
	            // Verificar si el objeto está roto

	            if (pObjeto->GetEstado() == Estado::Roto) {

	                DTObjetoRoto* dtObjetoRoto = nullptr;
	                // Verificar si el objeto está prestado a un niño
	                if (pObjeto->GetNino() != nullptr) {

	                    // Si está prestado, establecer el campo Prestado en true y obtener el nombre del niño
	                	dtObjetoRoto= new DTObjetoRoto(pObjeto->GetNombre(),true,pObjeto->GetNino()->GetNombre());

	                } else {

	                    // Si no está prestado, establecer el campo Prestado en false
	                	dtObjetoRoto= new DTObjetoRoto(pObjeto->GetNombre(),false,"");
	                }

	                // Agregar el elemento de DTObjetoRoto al vector de objetos rotos
	                objetosRotos.push_back(dtObjetoRoto);
	            }
	    }


	    //Coutea objetos Rotos no va para la implementacion final solo para Test
	    cout<<"Objetos rotos:"<<endl;
	    for (const DTObjetoRoto* pObjetoRoto : objetosRotos) {
	        // Verificar si el puntero es válido
	        if (pObjetoRoto != nullptr) {
	            // Mostrar el nombre del objeto roto

	            std::cout << *pObjetoRoto << std::endl;
	        }
	    }


	    cout << endl;
	    cout << endl;
	    ///////////////////////////////  NUEVO  ///////////////////////////////////////////

	    // Eliminamos uno de los objetos prestados a Alex

	       cout << "Eliminamos el objeto " << objetos[3]->GetNombre() << endl;
	       Objeto *obj = objetos[3];
	       string nombreObj = obj->GetNombre();
	       ninos[1]->eliminoObjeto(objetos[3]);
	       delete objetos[3];
	               	       vector<Objeto*> nuevo_objetos;
	               	       for (int i = 0; i < (int)objetos.size(); i++)
	               	       {
	               	            if (objetos[i]->GetNombre() != nombreObj)
	               	            	nuevo_objetos.push_back(objetos[i]);
	               	       }


	               	    vector<DTObjetoRoto*> nuevo_objRotos;
	               	            for (int i = 0; i < (int)objetosRotos.size(); i++)
	               	            {
	               	                if (objetosRotos[i]->GetNombre() != nombreObj)
	               	                    nuevo_objRotos.push_back(objetosRotos[i]);
	               	            }


	               	    objetos = nuevo_objetos;
	               	    objetosRotos = nuevo_objRotos;
	               	    objetos[5]=nullptr;

	       cout << endl;
	       cout << endl;


	       cout << "Objetos rotos luego de borrar un juego de mesa: " << endl;
	           for (int i = 0; i < (int)objetosRotos.size(); i++)
	           {
	               cout << *objetosRotos[i] << endl;
	           }

	       cout << endl;
	       cout << endl;

	       cout << "Objetos prestados a Alex(2do nino) luego de borrar un juego de mesa: " << endl;
	       objetosPrestadosNino1 = ninos[1]->listarObjetosPrestados();
	       	       for (int j = 0; j < (int)objetosPrestadosNino1.size(); j++)
	       	       {
	       	           cout<<objetosPrestadosNino1[j] << endl;
	       	       }

	       ///////////////////////////////  NUEVO  ///////////////////////////////////////////




		    // Liberar memoria de los libros creados dinámicamente
		    for (auto libro : objetos) {
		        delete libro;
		    }

	return 0;
}
