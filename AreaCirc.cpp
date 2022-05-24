//Tarea: Calcule el factorial de n --> factorial.cpp
#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;

float AreaCirc(float);

int main(){
    int radio, area;
    cout<<"Ingrese el radio: "; cin>>radio;
    area = AreaCirc(radio);
    cout<<"El area del circulo es: "<<area;
    return 0;
}

float AreaCirc(float r){
    return PI * pow(r,2);
}