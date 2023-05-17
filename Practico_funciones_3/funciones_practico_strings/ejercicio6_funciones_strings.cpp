#include <iostream>
#include <vector>
using namespace std;

/*
Martha perdió a su gato Marqués. Escribe un programa que, basado en el testimonio de un transeúnte, ayude a Martha a
decidir a cuál de las tres casas entrar.
//color1 piso1 color2 piso2 color3 piso3 color_t piso_t
    /0/   |0|    /1/   |1|   /2/    |2|    /3/    |3|
*/

// Function prototypes

/**
 * @brief Obtiene la informacion dada por el transeunte y devuelve la informacion de pisos y color de casa por medio de un paso por referencia
 * @Input - vector<string>&, vector<int>&
 * @Output - void
 */
void get_information(vector<string>& colors, vector<int>& floors);

/**
 * @brief Con los datos recibidos, muestra el numero de casa a visitar
 * @Input - const vector<string>&, const vector<int>&, bool&, bool&
 * @Output - void
 */
void show_results(const vector<string>& colors, const vector<int>& floors, bool& color_t, bool& floor_t);

int main()
{
  vector<string> colors;
  vector<int> floors;
  bool color_t = false, floor_t = false;

  get_information(colors, floors);
  show_results(colors, floors, color_t, floor_t);


  return 0;
}

// Function definitions

void get_information(vector<string>& colors, vector<int>& floors)
{
    string a;
    int b;
    cout << "Introduce la informacion: " << endl;
    for (int i = 0; i < 4; ++i){
        cin >> a;
        colors.push_back(a);
        cin >> b;
        floors.push_back(b);
    }
}

void show_results(const vector<string>& colors, const vector<int>& floors, bool& color_t, bool& floor_t)
{
    if (colors[3] == "?"){
        color_t = true;
    }

    if (floors[3] == -1){
        floor_t = true;
    }

    if (color_t && floor_t){
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;

        return;
    }

    //Si la anterior condicion era falsa, se ejecuta el siguiente codigo que itera entre la cadena de strings y la cadena de enteros, buscando una similitud, entre el ultimo elemento y su respectiva cadena.
    //Verifica tambien si las variable booleanas son verdaderas para saber escribieron "?" o un -1.
    //Si encuentra una coincidencia pasa al siguiente paso de verificar en que posicion de la iteracion esta el programa y con eso devuelve un numero entre 1 y 3
    for (int i = 0; i < 3; ++i){
        if (((colors[i] == colors[3]) || color_t == true) && ((floors[i] == floors[3]) || floor_t == true)){
            if(i == 0){
                cout << 1 << endl;
            }
            if(i == 1){
                cout << 2 << endl;
            }
            if(i == 2){
                cout << 3 << endl;
            }
        }
    }
}