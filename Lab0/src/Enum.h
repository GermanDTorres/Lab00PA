/*
 * Enum.h
 *
 *  Created on: Apr 1, 2024
 *      Author: ivan
 */

#include <iostream>
using namespace std;

enum class Estado {
    Nuevo,
    BienConservado,
    Roto
};

string estado_to_string(Estado estado);

