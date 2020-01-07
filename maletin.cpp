#include "maleta.h"

using namespace std;

maletin::maletin(short capacidad)
{
  this->abierta = false;
  this->capacidad = capacidad;
  this->numElementos = 0;
}

maletin::~maletin(){}

bool maletin::getAbierta()
{
  return this->abierta;
}

short maletin::getCapacidad()
{
  return capacidad;
}

short maletin::getNumElementos()
{
  return numElementos;
}

void maletin::setAbierta(bool abierta) {
  this->abierta = abierta;
}

void maletin::setCapacidad(short capacidad) {
  this->capacidad = capacidad;
}

void maletin::setNumero(short numElementos) {
  this->numElementos = numElementos;
}


void maletin::abrir()
{
  abierta = true;
}

void maletin::cerrar()
{
  abierta = false;
}

short maletin::guardar(short numElementos)
{
  int suma = this->numElementos + numElementos;
  if (abierta && suma <= capacidad)
  {
    this->numElementos = suma;
  }else {
    cout << "Ha ocupado la capacidad de la Maleta \n\n";
  }

  return this->numElementos;
}

short maletin::sacar(short numElementos)
{ 
  short n = this->numElementos - numElementos;
  if(this->abierta && (n >= 0)) {
    this->numElementos = n;
  }else {
    cout << "La maleta se encuentra cerrada o copo el limite permitido \n";
  }
  
  return this->numElementos;
}

void maletin::consutar() {
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
  cout << "\nEl estado actual es :" << this->abierta << "\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
  cout << "La capacidad actualmente es: " << this->capacidad << "\n\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
}