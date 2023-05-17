#include <iostream>
#include <vector>
using namespace std;

/*
Escriba un programa que lea los títulos de tres libros, uno por línea, y los imprima en
orden inverso, también uno por línea. El título de un libro puede tener más de una palabra,
es decir el inicio del titulo de un nuevo libre no esta separado por espacios si no por una
nueva linea.
*/

// Function prototypes

/**
 * @brief Pide los nombres de los libros al usuario
 * @Input - void
 * @Output - vector<string>
 */
vector<string> get_names_books();

/**
 * @brief Imprime los libros en orden inverso
 * @Input - vector<string>&
 * @Output - void
 */
void show_reverse(const vector<string>& books);

int main()
{
  vector<string> books;
  books = get_names_books();
  show_reverse(books);

  return 0;
}

// Function definitions

vector<string> get_names_books()
{
    vector<string> names;
    string book;

    cout << "Nombra 3 libros:" << endl;
    for (int i = 0; i < 3; ++i){
        getline(cin, book);
        names.push_back(book);
    }
    return names;
}

void show_reverse(const vector<string>& books)
{
    for(int i = books.size() - 1; i >= 0; --i){
        cout << books[i] << endl;
    }
}