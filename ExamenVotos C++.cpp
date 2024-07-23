#include <iostream>
#include <string> //librerias

using namespace std;


string nombre[50], puesto[50];
	int partido [50],provincia[50];
	char opcion;
	int i = 0;
	int total = 0;
	bool encontrado = false;  
	int numCandidatos = 0,votos = 0;


void ingresarCandidato() { //Proceso para crear candidato
    do {
    	cout<<"----------------------"<<endl;
    	cout<<"REGISTRO DE CANDIDATOS"<<endl;
   cout << "Ingrese el nombre: ";
   cin >> nombre[i];
   
   cout << "Ingrese el partido: ";
   cout << "/1) Liberación Nacional / 2)Unión Liberal /3)Accion Ciudadana: ";
   cin >> partido[i];
   
   cout << "Ingrese la provincia: ";
   cout << "/1) San Jose / 2)Guanacaste /3)Alajusta /4)Cartago: ";
   cout << "/5) Heredia / 6)LLimon /7)Puntarenas: ";
   cin >> provincia[i];
   
   cout << "Ingrese el puesto para candidatura: ";
   cin>> puesto[i];
   
   cout << "Desea ingresar otro candidato?: (s/n)"<< endl;
   cin >> opcion;
   i++;
} while (opcion == 'S' || opcion == 's');
}

void mostrarCandidatos() {
    cout << "Nombre  Partido  Provincia   Puesto" << endl;
	cout <<  "------------------" << endl;
	for (int indice =0 ;(indice<i);indice++)
{
	cout<< nombre[indice];
	cout<< "    " <<partido[indice];
	cout<< "    " << provincia[indice];
	cout<< "    " << puesto[indice]<< endl;
	
}

cout <<  "------------------" << endl;

}
void editarCandidatos(){ //Proceso para editar candidato
	cout << "EDITAR CANDIDATO"<< endl;
	cout << "Escriba el nombre del candidato a Editar:";
cin >> nombre[i];
for (int indice =0 ;(indice<i);indice++)  
{                                         
	 if (nombre[i]==nombre[indice])
	   { 
	    cout << "Ingrese el nombre:"<< endl;
        cin >> nombre[indice];
        cout << "Ingrese el partido: ";
   		cout << "/1) Liberación Nacional / 2)Unión Liberal /3)Accion Ciudadana: ";
   		cin >> partido[i];
   
   		cout << "Ingrese la provincia: ";
   			cout << "/1) San Jose / 2)Guanacaste /3)Alajusta /4)Cartago: ";
   			cout << "/5) Heredia / 6)LLimon /7)Puntarenas: ";
   		cin >> provincia[i];
   
   		cout << "Ingrese el puesto para candidatura: ";
  		 cin>> puesto[i];
   	
   	
        
	    encontrado = true;
	 } 
}

if (encontrado==false){
	cout << "El candidato no existe";
	cout<<"------------------------------"<<endl;
}
}

void eliminarCandidatos(){
	
/* Borrar en un arreglo */
cout << "Digite un nombre buscar:";
cin >> nombre[i];
for (int indice =0 ;(indice<i);indice++)  // arreglo 0=a  1=b    2 = c
{                                         
	 if (nombre[i]==nombre[indice])
	   { 
	   
        nombre[indice]="vacio";
   
        partido[indice]=0;
        
        provincia[indice]=0;
        
        puesto[indice]="sin puesto";
        
        
	    encontrado = true;
	    cout<<"Registro vaciado existosamente"<<endl;
	    cout<<"------------------------------"<<endl;
	 } 
}

if (encontrado==false){
	cout << "El candidato no existe"<<endl;
	cout<<"------------------------------"<<endl;
}
}


void menu() {
    int opcion;
    do {
    	cout<<"------------------------------"<<endl;
    	
        cout << "INGRESE UNA OPCION:\n";
        cout << "1. Ingresar datos de un candidato\n";
        cout << "2. Mostrar datos de los candidatos\n";
        cout << "3. Editar candidatos \n";
        cout << "4. Borrar candidatos\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarCandidato();
                break;
            case 2:
                mostrarCandidatos();
                break;
            case 3:
                editarCandidatos();
                
                break;
            case 4:
                eliminarCandidatos();
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida. Por favor, seleccione nuevamente.\n";
        }
    } while (opcion != 5);
}

int main() {
		cout << "SISTEMA DE REGISTRO DE CANDIDATOS"<<endl;
    	cout<<"------------------------------"<<endl;
    menu();
    return 0;
}

  
    





