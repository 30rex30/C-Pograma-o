/*Escreva um programa em C++ que crie um registo com os seguintes dados paawra
3 alunos:

- Nome Aluno
- Número Aluno
- Idade Aluno

Peça os dados ao utilizador e no fim mostre-os.
*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string name;
    int n;
    int age;
};

int main() {
    Aluno alunos[3]; // ler os 3 alunos

    for(int i = 0; i < 3; i++) {
        cout << "Registo do aluno " << i + 1 << endl;
        cout << "Nome: ";
        cin.ignore(); 	
        getline(cin, alunos[i].name);
        cout << "Idade: ";
        cin >> alunos[i].age;
        cout << "Número do aluno: ";
        cin >> alunos[i].n;
    }

    cout << "\n--- Dados dos Alunos ---\n";
    for(int i = 0; i < 3; i++) {
        cout << "Aluno " << i + 1 << ":" << endl;
        cout << "Nome: " << alunos[i].name << endl;
        cout << "Idade: " << alunos[i].age << endl;
        cout << "Número: " << alunos[i].n << endl;
        cout << "------------------------\n";
    }

    return 0;
}
