/*
3. Escreva um programa que registe os dados de 5 alunos do 10H:

- Turma
- Nome
- N�mero
- Nota de PSI

O programa dever� mostrar quantos alunos est�o 'aprovados' � disciplina e
quantos est�o 'reprovados'. Dever� ainda mostrar o 'nome do aluno' que
teve a melhor nota escrevendo a seguinte mensagem (�Parab�ns XXXXXXX!
�s o maior!�).

*/

#include <iostream>
#include <string>
using namespace std;

struct aluno{
	string truma;
	char name;
	int n;
	int nota_psi;
};

	for(int i=0;i<5;i++)
	{
		cout<<"Aluno: "<< i + 1 <<endl;
		cout<<"Truma"<<endl;
		getline(cin,aluno[i].truma);
		cout<<"Nome"<<endl;
		cin>>aluno[i]
		
	}