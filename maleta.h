#include <iostream>

class maletin
{
  private:  //Clase privada
    bool abierta;
    short capacidad;
    short numElementos;

  protected:

  public:
    // Constructores y Destructores
    maletin(short capacidad);
    maletin();
    ~maletin();

    // sets y gets
    bool getAbierta();
    short getCapacidad();
    short getNumElementos();

    void setAbierta(bool abierto);
    void setCapacidad(short capacidad);
    void setNumero(short numElementos);

    // metodos
    void abrir();
    void cerrar();
    short guardar(short numElementos);
    short sacar(short numElementos);
    void consutar();
};