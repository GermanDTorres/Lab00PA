/*
 * JuegoMesa.cpp
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include "../headers/JuegoMesa.h"

JuegoMesa::JuegoMesa() {
	// TODO Auto-generated constructor stub

}

JuegoMesa::~JuegoMesa() {
	// TODO Auto-generated destructor stub
}

std::string JuegoMesa::to_string() {
		return "Nombre: " + this->nombre +
		            ", Año comprado: " + std::to_string(this->anocomprado) +
		            ", Estado: " + estado_to_string(this->estado) +
		            ", Edad Recomendada: " + std::to_string(this->EdadRecomendada) +
		            ", Cantidad de páginas: " + std::to_string(this->CantJugadores);
	}

