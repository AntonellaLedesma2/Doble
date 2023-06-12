#include <iostream>
using namespace std;
int CalcularDoble(int n);
int main(){
	int n, doble;
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	doble=CalcularDoble(n);
	cout<<"el doble es:"<<doble<<endl;
	
	return 0;
}
int CalcularDoble(int n){
	int doble;
	doble=n*2;
	return doble;

}
