#include "Persona.cpp"
#include <iostream>
using namespace std;

class personas : Persona {
	//atributos
	private : string nit;
	
	//constructor
	public :
		personas (){
		}
		persona(string nom,string ape,string dir,int tel,string nac) : Persona(nom,ape,dir,tel,nac){
			nit = n;
		}
		// metodos
		// set (modificar)
		void setnit(string n){nit = n;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
		void setfecha_de_nacimiento(string nac){fecha_de_nacimiento = nac;}
		// get (mostrar)
		string getnit(){return nit}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		int getTelefono(){return telefono;}
		string getfecha_de_nacimiento(){return fecha_de_nacimiento;}
		//metodos
		void mostrar(){
			cout<<"________________________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_de_nacimiento<<endl;
		}
};
