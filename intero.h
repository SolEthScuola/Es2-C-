#include <iostream>
using namespace std;
class NumeroIntero {
	private:
		int numeroIntero;
	public:
		NumeroIntero(){
		}
		NumeroIntero(int valore){
			numeroIntero = valore;
		}
		void setNumero(int n){
			numeroIntero = n;
		};
		int getNumero(){
			return numeroIntero;
		};
		void stampaNumero(){
			cout << numeroIntero;
		};
};
