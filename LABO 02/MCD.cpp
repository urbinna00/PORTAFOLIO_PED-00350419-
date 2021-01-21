#include <iostream>

using namespace std;

int MCD(int a, int b){
	if(b==0){
		return a;
	}
	return MCD(b, a%b);
}

int main(void){
	int a=0, b=0;
	
	cout<<"ALGORITMO DE EUCLIDES"<<endl;
	
	do{
		cout<<"\nIngrese un numero: "; cin>>a;
	}while (a<0);
	
	do{
		cout<<"Ingrese otro numero: "; cin>>b;
	}while(b<0);
	
	if(a>=b){
		cout<<"\nEl MCD es: "<<MCD(a,b);
	}
	else if(b>a){
		cout<<"\nEl MCD es: "<<MCD(b,a);
	}
	
	
	return 0;
}
