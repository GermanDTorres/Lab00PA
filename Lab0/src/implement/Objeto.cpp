/*
 * Objeto.cpp
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include "../headers/Objeto.h"

Objeto::Objeto() {
	// TODO Auto-generated constructor stub

}

Objeto::~Objeto() {
	// TODO Auto-generated destructor stub
}

string Objeto::GetNombre() const{
	return this->nombre;
}
int Objeto::GetAnoComprado() const{
	return this->anocomprado;
}

Estado Objeto::GetEstado() const{
	return this->estado;
}


Nino* Objeto::GetNino() const{
	return this->nino;
}


void Objeto::AgregarNino(Nino* nino){
	this->nino=nino;
}
