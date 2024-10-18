#include <iostream> 
#include <string>
#include <windows.h>
#define uwu "_"
#define UwU "#"
#include <unistd.h>
using namespace std;
void gotoxy(int x,int y);
int main()
{
	char a=186; // Largo
	char b=205; // Ancho
	char c=201; // Borde superior izquierdo
	char d=187; // Borde superior derecho
	char e=188; // Borde inferior derecho
	char f=200; // Borde inferior izquierdo
	const float con=(100)/(90);
	int x=0,y=0;
	gotoxy(5,5);
	gotoxy(51,3);
	cout<<"Loading..."<<endl;
	for (x=0;x<=102;x++)
	{
		gotoxy(x+5,5);
		cout<<b;
		gotoxy(x+5,8); cout<<b;
	}	
	gotoxy(4,8);cout<<f;
	gotoxy(108,8);cout<<e;
	gotoxy(4,5);cout<<c;
	gotoxy(108,5); cout<<d; 
	for (y=0;y<=1;y++)
	{
		gotoxy(4,6+y);
		cout<<a;
		gotoxy(x+5,6+y);
		cout<<a;
	}

	x=0;

	y=0;
	int i=0;
	float ant=0;
	while (x<=100)
	{
		for (y=0;y<2;y++)
		{
		gotoxy(x+6,y+6);
		cout<<UwU;
		}
		usleep(10000);
		i++;
		x++;
		gotoxy(6,10);
		cout<<"           ";
		gotoxy(6,10);
		cout<<ant<<"% ...";
		ant=ant+1;
		if (i==30) sleep(2);
		if (i==50) sleep(3);
	}
	system("cls");
	gotoxy(51,3);
	cout<<"Listo"<<endl;
	cout<<'\n';
	gotoxy(0,30);
	system("Pause");
	system("cls");
	//system("C:\\Users\\user\\Desktop\\Project\\\"Ejercicios Programacion Basica\"\\\"Semana 9 10 11 12 13\"\\\"Clase arbol\".exe");
    return 0;
}
void gotoxy(int x,int y)
{
	HANDLE consola;
	consola= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordenadas;
	coordenadas.X=x;
	coordenadas.Y=y;
	SetConsoleCursorPosition(consola,coordenadas);
}
