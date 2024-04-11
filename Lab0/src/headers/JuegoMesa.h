/*
 * JuegoMesa.h
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#ifndef JUEGOMESA_H_
#define JUEGOMESA_H_

#include "Objeto.h"

class JuegoMesa : public Objeto{
	private:
		int EdadRecomendada;
		int CantJugadores;
	public:
		JuegoMesa();

		JuegoMesa(const string& nombre, int anocomprado, Estado estado, int EdadRecomendada, int CantJugadores)
		        : Objeto(nombre, anocomprado, estado), EdadRecomendada(EdadRecomendada), CantJugadores(CantJugadores) {}

		virtual ~JuegoMesa();

		virtual string to_string() override;
};

#endif /* JUEGOMESA_H_ */
