/*
 * DTObjetoRoto.h
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#ifndef DTOBJETOROTO_H_
#define DTOBJETOROTO_H_


#include <iostream>
using namespace std;

class DTObjetoRoto {
private:
	string NombreObjetoRoto;
	bool Prestado;
	string NombreNino;
public:
	DTObjetoRoto();
	virtual ~DTObjetoRoto();
	DTObjetoRoto(const std::string& nombreObjetoRoto, bool prestado, const std::string& nombreNino)
	        : NombreObjetoRoto(nombreObjetoRoto), Prestado(prestado), NombreNino(nombreNino) {}
	string GetNombre() const;
	string GetNombreNino() const;
	bool GetPrestado() const;
};

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& dtObjetoRoto) ;



#endif /* DTOBJETOROTO_H_ */
