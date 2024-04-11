/*
 * DTObjetoRoto.cpp
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include "DTObjetoRoto.h"

DTObjetoRoto::DTObjetoRoto() {
	// TODO Auto-generated constructor stub

}

DTObjetoRoto::~DTObjetoRoto() {
	// TODO Auto-generated destructor stub
}

string DTObjetoRoto::GetNombre() const{

	return this->NombreObjetoRoto;
}


bool DTObjetoRoto::GetPrestado() const{
	if(this->Prestado==true){
		return true;
	}
	else{
		return false;
	}
}

string DTObjetoRoto::GetNombreNino() const{
	return this->NombreNino;
}

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& dtObjetoRoto) {
    os << dtObjetoRoto.GetNombre() << ", Prestado ";
    if (dtObjetoRoto.GetPrestado()) {
        os << "SI";
        if (!dtObjetoRoto.GetNombre().empty()) {
            os << ", " << dtObjetoRoto.GetNombreNino();
        }
    } else {
        os << "NO";
    }
    return os;
}
