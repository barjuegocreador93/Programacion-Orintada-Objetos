/**Vamos a Crear el objeto empleado*/
class empleado
{
	public:
		empleado(string=" ",string=" ",int=18,float=200000);
		void pedirEmpleado();
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

