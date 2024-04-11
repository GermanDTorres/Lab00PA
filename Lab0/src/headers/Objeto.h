/*
 * Objeto.h
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#ifndef OBJETO_H_
#define OBJETO_H_

#include <iostream>
using namespace std;
#include "../Enum.h"


class Nino;
class Objeto {
	protected:
		Nino * nino;


		string nombre;
		int anocomprado;
		Estado estado;
	public:

	Objeto();
	Objeto(const string& nombre, int anocomprado, Estado estado)
	        : nombre(nombre), anocomprado(anocomprado), estado(estado) {}

	virtual ~Objeto();

	void AgregarNino(Nino* nino);

	Nino* GetNino() const;
	virtual string to_string() = 0;
	string GetNombre() const;
	int GetAnoComprado() const;
	Estado GetEstado() const;
};
#include "../headers/Nino.h"
#endif /* OBJETO_H_ */
