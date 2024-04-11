/*
 * Libro.h
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#ifndef LIBRO_H_
#define LIBRO_H_

#include "Objeto.h"


class Libro : public Objeto{
private:
	string autor;
	int CantPag;
public:
	Libro();
	Libro(const string& nombre, int anocomprado, Estado estado, const string& autor, int CantPag)
	        : Objeto(nombre, anocomprado, estado), autor(autor), CantPag(CantPag) {}


	virtual ~Libro();
	virtual string to_string() override;
};

#endif /* LIBRO_H_ */
