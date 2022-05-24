#include<iostream>
#define MAX 30
using namespace std;

struct libro{
    string titulo;
    string autor;
    string editorial;
    string anio;
    int existencias;
    float precio;
};

int main(){
    libro listaLibros[MAX];
    int cant = 0;
    char op;
    do{
        system("cls");
        cout<<"LIBRERIA EL RINCON DEL SABER ------------------"<<endl;
        cout<<endl;
        cout<<"Menu de opciones:"<<endl;
        cout<<"1. Registrar nuevo libro"<<endl;
        cout<<"2. Modificar libro existente"<<endl;
        cout<<"3. Listar libros existentes"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<endl<<"Selecciona una opcion valida: ";
        cin>>op;
        switch(op){
            case '1':
            break;
            case '0':
                cout<<"Hasta luego."<<endl;
            break;
            default:
                cout<<"La opcion elegida no es valida"<<endl;
            break;
        }
        cout<<endl;
        system("pause");
    }while(op != '0');
    return 0;   
}