#include "civilizacion.h"

Civilizacion::Civilizacion() {}

Civilizacion::Civilizacion(const string &nombre, int ubicacionX, int ubicacionY, int puntuacion) {
    this -> nombre = nombre;
    this -> ubicacionX = ubicacionX;
    this -> ubicacionY = ubicacionY;
    this -> puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string &v) {
    nombre = v;
}

void Civilizacion::setUbicacionX(int v) {
    ubicacionX = v;
}

void Civilizacion::setUbicacionY(int v) {
    ubicacionY = v;
}

void Civilizacion::setPuntuacion(int v) {
    puntuacion = v;
}

string Civilizacion::getNombre() {
    return nombre;
}

int Civilizacion::getUbicacionX() {
    return ubicacionX;
}

int Civilizacion::getUbicacionY() {
    return ubicacionY;
}

int Civilizacion::getPuntuacion() {
    return puntuacion;
}