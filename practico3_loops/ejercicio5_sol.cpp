//Solucion ejericio 5
#include <iostream>
using namespace std;
int main() {
    int a, b; //Declaramos 2 variables
    cin >> a >> b;

    if ((a >= 0) && (b >= 0) && (a <= b)){
        for (int i = a; i <= b; ++i){ //Mientras a sea menor o igual que b a la variable i se le sumara +1
            cout << i << endl;
        }
    }
    return 0;
}