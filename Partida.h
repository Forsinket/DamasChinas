#ifndef PARTIDA_H
#define PARTIDA_H

class Partida{

    private:
    

    public:
    //Constructor y destructor
    Partida();
    ~Partida();

    //Metodos
    void IniciarPartida(void generalTablero);
    void GuardarPartida();
    void CargarPartida();

}


#endif