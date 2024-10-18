#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
using namespace std;
void menu()
{
	cout<<"(1) Calcular la sumatoria, a partir de k=1, de e^(k^2/n^2)"<<endl;
	cout<<"(2) Calcular la sumatoria de sen( pi x )"<<endl;
	cout<<"(3) Salir"<<endl;
}
void sumatoria_e()
{
	string o;
	char e[64]="";
	double n;
	cout<<"Ingrese el valor de \"n\": ";
	cin>>n;
	float sumatoria=0;
	cout<<"Desea que la sumatoria solo llegue a \"n-1\"? (s/n): ";
	cin.ignore();
	cin.getline(e,64);
	o=e;
	while (o!="s" && o!="n"){
		cout<<"Opcion invalida, intente nuevamente: ";
		cin>>o;
	}
	if (o=="s"){
		for(double k=1;k<=n-1;k++)
	{
		sumatoria=sumatoria+static_cast<float>(exp(pow(k,2)/pow(n,2)));
	}
			
	}
	if (o=="n") {
	for(double k=1;k<=n;k++)
	{
		sumatoria=sumatoria+static_cast<float>(exp(pow(k,2)/pow(n,2)));
	}
	}
	cout<<"El resultado es: "<<sumatoria<<endl;
}
void sumatoria_sin()
{
	cout<<"No hay nada aqui"<<endl;
}
void Salir()
{
	exit(0);
}
int main()
{
	int o;
	while (true)
	{
	menu();
	cout<<"Escoja una opcion: ";
	cin>>o;
	while (o<1 || o>3)
	{
		cout<<"Opcion invalida , intente nuevamente: ";
		cin>>o;
	}
	switch(o)
	{
		case 1:{
			sumatoria_e();
			break;
		}
		case 2:{
			sumatoria_sin();
			break;
		}
		case 3:{
			Salir();
			break;
		}
	}
	system("pause");
	system("cls");
	}
}
