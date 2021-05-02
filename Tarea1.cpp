/* Programa para encontrar su Masa Corporal*/
#include <iostream> //operaciones entrada y salida//
#include <string>  //Almacenamiento de Variables//
using namespace std;
//inicio de funcion//
int main() {
	float peso, altura, BMI;
	string obsPeso;

	cout << "Ingrese su peso en Kilogramos: ";cin >> peso;
	cout << "\nIngrese su estatura en Metros: ";cin >> altura;

	BMI = ((peso)) / ((altura) * (altura));


	if (BMI <= 18.5)
	{
		obsPeso = "Alerta  Bajo Peso";
	}
	else if (BMI > 18.5 && BMI < 24.9) {
		obsPeso = "muy bien peso  normal";
	}
	else if (BMI > 24.9 && BMI < 29.9) {
		obsPeso = "Cuidado  Sobrepeso";
	}
	else {
		obsPeso = "Alerta usted esta Obeso";
	}
	cout << "\nSu BMI dio como resultado: " << BMI;

	cout << "\nY su indice de masa corporal es: " << obsPeso;

	cout << "\n\nValores de BMI ";

	cout << "\nBajo peso ---> 18.5" << endl;

	cout << "Peso normal ---> 18.5 y 24.9" << endl;

	cout << "Sobrepeso ---> 24.9 y 29.9 " << endl;

	cout << "Obeso ---> 30 o mas " << endl;

	return 0; //fin de la funccion//
}
