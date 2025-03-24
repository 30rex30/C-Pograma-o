/*
3. Escreva um programa que registe os dados de 5 alunos do 10H:

- Turma
- Nome
- Número
- Nota de PSI

O programa deverá mostrar quantos alunos estão 'aprovados' à disciplina e
quantos estão 'reprovados'. Deverá ainda mostrar o 'nome do aluno' que
teve a melhor nota escrevendo a seguinte mensagem (“Parabéns XXXXXXX!
És o maior!”).

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