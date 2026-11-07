#include<iostream>
using namespace std;
class calculadora{
	
private:
	float primero;
	float segundo;
	bool comprobar(){
		return segundo!=0;
	}
public:
	calculadora(){
		primero=0;
		segundo=0;
	}	
	void setnumeros(float a, float b){
		primero=a;
		segundo=b;
	}
	float getprimero(){
		return primero;
	}
	float getsegundo(){
		return segundo;
	}
	float sumar(){
		return primero+segundo;
	}
	float restar(){
		return primero-segundo;
	}
	float multiplicar(){
		return primero*segundo;
	}
	bool dividir(float& resultado){
		
		if(comprobar()){
			resultado=primero/segundo;
			return true;
		}
		return false;
	}
};
int main(){
	calculadora casio;
	int opcion;
	float a,b,resultado;
	do{
		cout<<"          CALCULADORA           "<<endl;
		cout<<"1. establecer numeros "<<endl;
		cout<<"2. sumar"<<endl;
		cout<<"3. restar"<<endl;
		cout<<"4. mutiplicar"<<endl;
		cout<<"5. dividir"<<endl;
		cout<<"6. consultar numeros"<<endl;
		cout<<"7. salir"<<endl;
		
		cout<<"seleccione una opcion"<<endl;
		cin>>opcion;
			switch(opcion) {
		case 1:
			cout<<"ingrese el primer numero";
			cin>>a;
			cout<<"ingrese el segundo numero";
			cin>>b;
			casio.setnumeros( a,b);
			cout<<"numeros almacenados correctamente"<<endl;
			break;
		case 2:
			cout<<"la suma es: "<<casio.sumar()<<endl;
			break;
		case 3:
			cout<<"la resta es:"<<casio.restar()<<endl;
			break;
		case 4:
			cout<<"la multiplicacion es:"<<casio.multiplicar()<<endl;
			break;
		case 5:
			if(casio.dividir(resultado)){
				cout<<"la dividion"<<resultado<<endl;
			}
			else{
				cout<<"error no se puede divir entre cero"<<endl;
			}
			break;
		case 6:
			cout<<"primero numero"<<casio.getprimero()<<endl;
			cout<<"segundo numero"<<casio.getsegundo()<<endl;
			break;
		case 7:
			cout<<"saliendo"<<endl;
			break;
		default:
			cout<<"opcion no valida"<<endl;
			
	}
	}while(opcion !=7);

	
	return 0;
	
}
