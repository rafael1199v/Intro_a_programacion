#include <iostream>

using namespace std;

//Se muestra un robot en pantalla con el uso del blindaje

// Function prototypes
/**
 * @brief Muestra el robot en la consola
 * @Input - void
 * @Output - void
 */
void print_robot();

int main()
{
  print_robot();

  return 0;
}

// Function definitions

void print_robot()
{
    cout<<"_____________"<<endl;
    cout<<"|  /\"\"\"\"\"\\  |"<<endl;
    cout<<"| /       \\ |"<<endl;
    cout<<"| | 0   0 | |"<<endl;
    cout<<"| |   v   | |"<<endl;
    cout<<"| \\  ___  / |"<<endl;
    cout<<"|  \\_____/  |"<<endl;
    cout<<"-------------"<<endl;
}