#ifndef _STRUCT_TEST_H_
#define _STRUCT_TEST_H_

#include <string>

struct Empresa
{
protected:	
	std::string nome;
public:
	void setNomeEmpresa(std::string name);
	std::string getNomeEmpresa();
};

struct Funcionario
{
protected:
	std::string name;
	Empresa empresa;
public:
	void setNomeFuncionario(std::string name);
	std::string getNomeFuncionario();
	void setNomeEmpresa(std::string name);
	std::string getNomeEmpresa();
};







#endif // !_STRUCT_TEST_H_
