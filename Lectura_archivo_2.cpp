//escritura de archivos desde c++
#include<iostream>
#include<cmath>
#include<fstream>
#include<cstring>
#include<stdio.h>
#include<cstring>
using namespace std;
int main () {
	//forma actual o moderna de abrir un archivo
	ofstream archivo;
	string caracter;
	archivo.open("Funcion.dat");//entre parentesis el nombre del archivo que queremos abrir 
    while(getline(archivo,caracter)){
		cout<<caracter<<endl;
		
		
		
		
		
	}
	archivo.close();
}