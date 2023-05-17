#include <iostream>
#include <vector>

using namespace std;

//Muestra el primer elemento de 5 palabras.

// Function prototypes

/**
 * @brief Pide las entradas al usuario y las guarda en un vector
 * @Input - void
 * @Output - vector<string>
 */
vector<string> get_words();

/**
 * @brief Recibe el vector y lo itera para solo mostrar el indice 0 de cada elemento
 * @Input - vector<string>
 * @Output - void
 */
void show_first_character(const vector<string>& words);

int main()
{
  vector<string> words;
  words = get_words();
  show_first_character(words);


  return 0;
}

// Function definitions

vector<string> get_words()
{
    string word;
    vector<string> a;
    for (int i = 0; i < 5; ++i){
        cin >> word;
        a.push_back(word);
    }
    return a;
}

void show_first_character(const vector<string>& words)
{
    for (int i = 0; i < words.size(); ++i){
        cout << words[i][0];
    }
}