#include<iostream>
using namespace std;

void suma(int,int); //prototipo

int main(){
    int p,q;
    cin>>p>>q;
    suma(p,q);
    return 0;
}

void suma(int a, int b){
    cout<<a+b;
}