/*
 * Nino.cpp
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include "../headers/Nino.h"


Nino::Nino() {
	// TODO Auto-generated constructor stub

}

Nino::~Nino() {
	// TODO Auto-generated destructor stub
}

const std::vector<Objeto*>& Nino::getObjetos() const{
	return objetos;
}



vector<string> Nino::listarObjetosPrestados(){



	    // Obtener una referencia constante al vector de punteros a objetos
	    const std::vector<Objeto*>& objetos = this->getObjetos();

	    std::vector<std::string> objetosPrestados;

	    // Iterar sobre el vector de punteros a objetos
	    for (const Objeto* pObjeto : objetos) {
	        // Verificar si el puntero es válido
	        if (pObjeto != nullptr) {
	            // Construir la cadena de texto con la información del objeto
	        	std::string infoObjeto = "Nombre: " + pObjeto->GetNombre() + ", Año comprado: " + std::to_string(pObjeto->GetAnoComprado());
	            // Agregar la cadena al vector de objetos prestados
	            objetosPrestados.push_back(infoObjeto);
	        }
	    }

	    return objetosPrestados;

}

void Nino::agregarObjeto(Objeto* objeto){
	 objetos.push_back(objeto);
}

string Nino::GetNombre() const{
	return this->nombre;
}

