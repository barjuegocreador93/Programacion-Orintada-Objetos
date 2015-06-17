/**Vamos a Crear el objeto empleado*/
#include <iostream>
#include <string.h>
using namespace std;

class empleado
{
	public:
		empleado(string=" ",string=" ",int=18,float=200000);
		void pedirEmpleado();
		void mostrarEmpleado();
	private:
		string codigo;
		string nombre;
		int edad;
		float sueldo;	
};
empleado::empleado(string _codigo, string _nombre, int _edad, float _sueldo)
{
	codigo=_codigo;
	nombre=_nombre;
	edad=_edad;
	sueldo=_sueldo;
}

void empleado::pedirEmpleado()
{
	cout<<"Entrar un empleado: \n\n";
	cout<<"Nombre: ";cin>>nombre;
	cout<<"Codigo: ";cin>>codigo;
	cout<<"edad: ";cin>>edad;
	cout<<"sueldo: ";cin>>sueldo;
}

void empleado::mostrarEmpleado()
{
	cout<<"Empleado: \n\n";
	cout<<"Nombre: "<<nombre<<"\n";
	cout<<"Codigo: "<<codigo<<"\n";
	cout<<"Edad: "<<edad<<"\n";
	cout<<"Sueldo: "<<sueldo<<"\n";
}


int main()
{
	empleado a;
	a.perdirEmpleado();
	a.mostrarEmpleado();	
	return 0;
}