#include <iostream>
#include <conio.h>
#include <cctype>

using namespace std;

main(){
	
		char opc1;
		float tot,act,ant;
			cout<<"*****CALCULADORA BASICA*****"<<endl;
			cout<<"+) suma"<<endl;
			cout<<"-) resta"<<endl;
			cout<<"*) multiplicacion"<<endl;
			cout<<"/) division"<<endl;
			cin>>opc1;
			cout<<"Ingrese 1 numero"<<endl;
			cin>>act;
			cout<<"Ingrese un segundo numero"<<endl;
			cin>>ant;
			switch(opc1){
				case '+':
					tot=act+ant;
				break;
				case '-':
					tot=act-ant;
				break;
				case '*':
					tot=act*ant;
				break;
				case '/':
				if(ant==0){
						cout<<"No se pude dividir entre cero"<<endl;
					}else{
					tot=act/ant;
				}
				break;
				default:
					cout<<"Opcion incorrecta"<<endl;
				break;
			}
			cout<<"El resultado es: "<<tot<<endl;
} 