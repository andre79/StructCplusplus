#include <iostream>
#include <string>
#include "empresa.h"

using namespace std;

struct Curso
{
	string nome;
	double preco;
};

struct Estudante
{
	string nome;
	Curso curso;
};

struct Unversidade
{
	string nome;
};

struct Pessoa
{
	string nome;

	struct Carro
	{
		double preco;
	};

	struct Casa
	{
		double preco;
	};

	struct Carro carro;
	struct Casa casa;
};

struct Aluno
{
	string nome;
	Unversidade universidade;
};

//prototipo
void construindoFuncionario(Funcionario& funcionario, std::string nome_funcionario, std::string nome_empresa);
void exibeFuncionario(Funcionario& funcionario);

int main(int argc, char *argv[])
{
	Estudante e;

	e.nome = "André";
	e.curso.nome = "C++ para iniciantes";
	e.curso.preco = 10;

	cout << "Nome do pessoa:" << e.nome << endl;
	cout << "Nome do curso:" << e.curso.nome << endl; 
	cout << "Valor R$:" << e.curso.preco << endl;

	Pessoa p;
	p.nome = "André Lima";
	p.carro.preco = 25000.00;
	p.casa.preco = 200000.00;

	cout << "Nome da pessoa:" << p.nome << endl;
	cout << "Preço do carro:" << p.carro.preco << endl;
	cout << "Preço da caso:" << p.casa.preco << endl;

	Aluno a = { "Andre", {"UNIFOR"} };
	Aluno* ptr_aluno = &a;

	cout << "Nome do Aluno:" << ptr_aluno->nome << endl;
	cout << "Nome da universidade:" << ptr_aluno->universidade.nome << endl;

	Funcionario f;

	f.setNomeFuncionario("André");
	f.setNomeEmpresa("FUNCEME");

	cout << "Qual o nome do funcionario: " << f.getNomeFuncionario() << endl;
	cout << "Qual o nome da empresa: " <<f.getNomeEmpresa() << endl;

	cout << "Construindo o Funcionario" << endl;
	
	Funcionario* func = &f;
	construindoFuncionario(f, "funcionario1", "empresa1");
	exibeFuncionario(f);

	cin >> p.casa.preco;
	return 0;
}

void construindoFuncionario(Funcionario& funcionario, std::string nome_funcionario, std::string nome_empresa) 
{
	funcionario.setNomeFuncionario(nome_funcionario);
	funcionario.setNomeEmpresa(nome_empresa);
}

void exibeFuncionario(Funcionario& funcionario)
{
	cout << "Qual o nome do funcionario: " << funcionario.getNomeFuncionario() << endl;
	cout << "Qual o nome da empresa: " << funcionario.getNomeEmpresa() << endl;
}




