#include "empresa.h"

void Empresa::setNomeEmpresa(std::string name)
{
	this->nome = name;
}

std::string Empresa::getNomeEmpresa()
{
	return nome;
}

void Funcionario::setNomeFuncionario(std::string name)
{
	this->name = name;
}

std::string Funcionario::getNomeFuncionario()
{
	return name;
}

void Funcionario::setNomeEmpresa(std::string name)
{
	empresa.setNomeEmpresa(name);
}

std::string Funcionario::getNomeEmpresa()
{
	return empresa.getNomeEmpresa();
}
