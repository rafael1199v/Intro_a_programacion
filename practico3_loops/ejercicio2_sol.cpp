using namespace std;
int main() {
    int x, y, z, sum = 0; //Creamos las 3 variables pedidas, ademas de una que guardara la suma entre x, y
    cin >> x >> y >> z;
    if ((x >= -1000000 && x <= 1000000) && (y >= -1000000 && y <= 1000000) && (z >= -1000000 && z <= 1000000)){ //Restringimos los valores de los datos de entrada
        
        sum = x + y; //Guardamos la suma de x, y en la variable sum
        
        if (sum != z){ //Si la suma no es igual a la variable 7, te muestra el resultado correcto
            cout << "Error.The sum of " << x << " and " << y << " is " << sum << "." << endl;
        }
    }
    return 0;
}