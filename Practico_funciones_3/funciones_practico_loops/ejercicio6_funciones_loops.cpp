#include <iostream>
using namespace std;

// Function prototypes
/*
 * Solicita una entrada al usuario para calcular una potencia y luego recibir la entrada, procesarla y la retorna. En este caso es la base de la potencia
 * @Input  - void
 * @Output - float
*/
float user_input_base();

// Function prototypes
/*
 * Recibe 2 valores flotantes el cual el primero es la base de la potencia y el otro es el valor del exponente. Con eso calcula el valor de una pontecia "a" elevado a "n"
 * @Input  - float&, int&
 * @Output - float
*/
float potenciador(const float& base ,const int& exponente);

// Function prototypes
/*
 * Solicita la entradaal usuario del valor del exponente al que se va a elevarla base
 * @Input  - void
 * @Output - float
*/
int user_input_exponente();

// Function prototypes
/*
 * Recibe el resultado y lo imprime en pantalla
 * @Input  - void
 * @Output - float
*/
void imprimir_resultado(const float& resultado);

int main() {
    float a, resultado;
    int b;
    a = user_input_base();
    b = user_input_exponente();
    resultado = potenciador(a, b);
    imprimir_resultado(resultado);

    return 0;
}

// Function definitions
float user_input_base(){
    float a;
    cout << "Ingrese la base: "; cin >> a;
    return a;
}

int user_input_exponente(){
    int b;
    cout << "Ingrese el exponente: "; cin >> b;
    return b;
}


float potenciador(const float& base ,const int& exponente){
    float resultado = 1;
    if (base == 0 && exponente == 0){ //Descartamos posibles errores
        return 0;
    }
    else if (base != 0 && exponente >= 0){ //Hacemos un loop para multiplicar el mismo numero "b" veces
        for (int i = 1; i <= exponente; ++i){
            resultado *= base;
        }
    }
    else if (base != 0 && exponente < 0){ // si b es negativo cambiamos algunos parametros pero sigue siendo practicamente lo mismo
        for (int i = -1; i >= exponente; --i){
            resultado *= (1/base);
        }
    }
    return resultado;
}

void imprimir_resultado(const float& resultado){
    if (resultado == 0){
        cout << "Indeterminado" << endl;
    }
    else{
        cout << resultado << endl;
    }
}