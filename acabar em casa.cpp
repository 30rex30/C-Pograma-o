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
//----------------------------
// Nota Max = 20
//
// Nota Min = 1
//
//----------------------------
#include <iostream>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


using namespace std;

struct Aluno{
	string name;
	string truma;
	int n; // numero 
	int nota_psi;
	
};


int main()
{
	// ler valores 
	Aluno aluno[5];
	for(int i=0; i < 5 ; i++)
	{
		cout<<"Aluno "<< i + 1 <<endl;
		cout<<"Nome:"<<endl;
		getline(cin, aluno[i].name);
		cout<<"Truma:"<<endl;
		getline(cin, aluno[i].name);
		cout<<"Numero:"<<endl;
		cin>>aluno[i].n;
		cout<<"Nota a PSI:"<<endl;
		cin>>aluno[i].nota_psi;
		cin.ignore();
		system("cls");
		

	}
		int P=0; // contar as positivas 
		int N=0; // contar as negativas
		int melhor_aluno=0;
		string maior_nota;
		
	
		for(int i=0; i < 5; i++)
		{
			if(aluno[i].nota_psi >=10 )
			{	
				
			P = P + 1;
			
			}
			
			if(aluno[i].nota_psi <=8) // 8 e o valor max da negativa 
			{
				N = N + 1;
			}
		}
		cout<<"O numero de Positivas: "<< P <<endl;
		cout<<"O numero de negativas: "<< N <<endl;
		
			for(int i=0; i  < 5; i++)
			{
				if(aluno[i].nota_psi > aluno[i].nota_psi)
				{
					
				}
			}

	
}
