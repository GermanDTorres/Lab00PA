/*
 * Nino.h
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#ifndef NINO_H_
#define NINO_H_

#include <iostream>
using namespace std;
#include <vector>
#include "Objeto.h"

class Nino {
	private:
		vector<Objeto*> objetos;

		string nombre;
		int edad;
		string direccion;
		string telefono;

	public:
		Nino();
		Nino(const std::string& nombre, int edad, const std::string& direccion, const std::string& telefono)
		        : nombre(nombre), edad(edad), direccion(direccion), telefono(telefono) {}
		virtual ~Nino();

		string GetNombre() const;
		void agregarObjeto(Objeto* objeto);

		vector<string> listarObjetosPrestados();
		 // Función que permite acceder al vector de punteros desde fuera de la clase
		    const std::vector<Objeto*>& getObjetos() const;
};

#endif /* NINO_H_ */
