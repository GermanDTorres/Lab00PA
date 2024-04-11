/*
 * Libro.cpp
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include "../headers/Libro.h"

Libro::Libro() {
	// TODO Auto-generated constructor stub

}

Libro::~Libro() {
	// TODO Auto-generated destructor stub
}

std::string Libro::to_string() {
	return "Nombre: " + this->nombre +
	            ", Año comprado: " + std::to_string(this->anocomprado) +
	            ", Estado: " + estado_to_string(this->estado) +
	            ", Autor: " + this->autor +
	            ", Cantidad de páginas: " + std::to_string(this->CantPag);
}
