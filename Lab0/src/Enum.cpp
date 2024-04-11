/*
 * Enum.cpp
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include "Enum.h"


string estado_to_string(Estado estado) {
    switch (estado) {
        case Estado::Nuevo:
            return "Nuevo";
        case Estado::BienConservado:
            return "Bien Conservado";
        case Estado::Roto:
            return "Roto";
        default:
            return "Desconocido";
    }
}
