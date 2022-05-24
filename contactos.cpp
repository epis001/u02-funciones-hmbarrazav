#include<iostream>
using namespace std;
struct email{
    string usuario;
    string servidor;
};

struct contactoEmail{
    string nombres;
    char sexo;
    int edad;
    email correo;     
};

void agregarC(contactoEmail [], int &);

int main (){
    int op, n,contm;
    string rpta,ser;
    contactoEmail listaCont[50];
    n = 0;

    do{
        system("cls");
        cout<<"MENU DE OPCIONES"<<endl;
        cout<<"1. Agregar un contacto"<<endl;
        cout<<"2. Modificar un contacto"<<endl;
        cout<<"3. Listar contactos"<<endl;
        cout<<"4. Listar contactos por servidor"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elija una opcion: "; cin>>op;

        switch(op){
            case 1:
                agregarC(listaCont,n);
                break; 
            case 2:
                system("cls");
                cout<<"LISTA DE CONTACTOS"<<endl;
                for (int i=0;i<n;i++){
                    cout<<"Contacto" <<" "<<i<<":" <<" "<<listaCont[i].nombres<<endl;
                }
                cout<<"Ingrese el numero del contacto a modificar: "<<endl;
                cin>>contm;
                cout<<"EL CONTACTO"<<" "<<contm<<" "<<"SE MODIFICARA:"<<endl;
                cout<<"¿Desea modificar nombres? (S/N)"<<endl;
                cin>>rpta;
                if (rpta == "S" || rpta == "s"){
                    cout<<"Ingrese nombres: ";
                    fflush(stdin);
                    getline(cin,listaCont[contm].nombres);
                }
                rpta="";
                cout<<"¿Desea modificar edad? (S/N)"<<endl;
                cin>>rpta;
                if (rpta == "S" || rpta == "s"){
                    cout<<"Ingrese edad: ";
                    cin>>listaCont[contm].edad;
                }
                cout<<"¿Desea modificar el correo? (S/N)"<<endl;
                cin>>rpta;
                if (rpta == "S" || rpta == "s"){
                    cout<<"Ingrese usuario: ";
                    cin>>listaCont[contm].correo.usuario;
                    cout<<"Ingrese servidor: "; 
                    cin>>listaCont[contm].correo.servidor;
                }
                break;
            case 3:
                for (int i=0;i<n;i++){
                    cout<<"El nombre del contacto "<<" "<< i<<" "<<"es : ";
                    cout<<listaCont[i].nombres<<endl;
                    cout<<"El sexo del contacto "<<" "<< i<<" "<<"es : ";
                    cout<<listaCont[i].sexo<<endl;
                    cout<<"La edad del contacto "<<" "<< i<<" "<<"es : ";
                    cout<<listaCont[i].edad<<endl;
                    cout<<"El correo electronico "<<" "<< i<<" "<<"es : ";
                    cout<<listaCont[i].correo.usuario<<"@"<<listaCont[i].correo.servidor<<".com"<<endl;
                    cout<<endl;
                    cout<<endl;
                    
                }
                break;
            case 4: 
                system ("cls");
                cout<<"LISTA DE CONTACTOS SEGUN SERVIDOR"<<endl;
                cout<<"Ingrese sevidor (gmail/outlook/hotmail): "<<endl;
                cin>>ser;
                for(int i=0;i<n;i++){
                    if (listaCont[i].correo.servidor==ser){
                    cout<<"Los contactos con el servidor "<<" "<<ser<<" "<<"son : "<<endl;
                    cout<<"\n Nombre: "<<listaCont[i].nombres<<endl;
                    cout<<"Sexo: "<<listaCont[i].sexo<<endl;
                    cout<<"Edad: "<<listaCont[i].edad<<endl;
                    cout<<"Correo electronico: "<<listaCont[i].correo.usuario<<"@"<<listaCont[i].correo.servidor<<".com"<<endl;
                    }
                }
            case 0: 
                cout<<"Te esperamos en otra oportunidad"<<endl;
                break;
            default:
                cout<<"La opcion que elegiste no existe"<<endl;
                break;
        }
        system("pause");
    } while(op != 0);   
}

void agregarC(contactoEmail c[], int &n){
    cout<<"Ingrese nombres del contacto: "<<endl;
    fflush(stdin);
    getline(cin,c[n].nombres);
    cout<<"Ingrese sexo (M/F):"<<endl;
    cin>>c[n].sexo;
    cout<<"Ingrese edad: "<<endl;
    cin>>c[n].edad;
    cout<<"Ingrese correo electronico: "<<endl;
    cout<<"\tUsuario: ";
    cin>>c[n].correo.usuario;
    cout<<"\tServidor: ";
    cin>>c[n].correo.servidor;
    n = n + 1;
}