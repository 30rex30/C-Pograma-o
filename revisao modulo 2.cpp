/*
2. Crie em C++ um registo com os seguintes dados de 3 pessoas:

- Nome
- Idade
- Sexo

Calcule a média de todas as idades introduzidas. Calcule o número de pessoas
de cada sexo. Verifique se há alguma pessoa com a primeira letra do nome “A”
e em caso afirmativo, mostre o seu nome.
*/

#include <iostream>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
//------variantes-----
int soma=0;
int media=0;

//---------------------

	struct Pessoa {
		string name;
		int age;
		char sexo;
		
	};

int main()
{
	//ler pessoas
	
	Pessoa pessoa[3];
	
	for(int i = 0; i < 3; i++) 
	{
		cout<<"Registo de Pessoas "<< 1 + i<<endl;
		cout<<"Nome: "<<endl;
		getline(cin, pessoa[i].name);
		
		cout<<"Idade: "<<endl;
		cin>> pessoa[i].age;
		cout<<"Sexo: "<<endl;
		cin>>pessoa[i].sexo;
		cin.ignore();
	}
	system("cls");
	//mostra as pessoas
	for(int i = 0; i < 3; i++)
	{
	cout << "Aluno " << i + 1 << ":" << endl;
	cout<<"Nome: "<<pessoa[i].name<<endl;	
	cout<<"Idade: "<<pessoa[i].age<<endl;
	cout<<"Sexo: "<<pessoa[i].sexo<<endl;
		
	}
	
	//fazer a soma
	for(int i = 0; i < 3; i++)
	{
		soma = soma + pessoa[i].age;
	}
	media = soma/3;
	
	cout<<"A media das idades e: "<<media<<endl;
	//vereficar letra 'A'
	int letra=0;
	for(int i=0; i < 3 ; i++)
	{
		if(pessoa[i].name[0] == 'A')
		{				
			cout<<"O Nome que tem a letra 'A' e o: "<< pessoa[i].name <<endl; // criar variavel 
		}
			
	} 
	 
	// Vereficar o numero de pessoas para cada sexo
	int M=0;//Masculino 
	int F=0;//Femenino
	for(int i=0;i<3;i++)
	{
		if(pessoa[i].sexo == 'M')
		{
			M= M + 1 ; // ou ( M++)
		}

		if(pessoa[i].sexo == 'F')
		{
			F= F + 1;// ou ( M++)
		}
	}
		cout<<"Numero de Pessoas com o Sexo 'M': "<< M <<endl;
		cout<<"Numero de Pessoas com o Sexo 'F': "<< F <<endl;
		
	
return 0;	
}