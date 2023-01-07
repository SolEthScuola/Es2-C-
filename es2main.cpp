#include <iostream>
#include "intero.h"
using namespace std;
class Prova{
	private:
		NumeroIntero n1, n2;
	
	public:
		Prova(int num1, int num2){
			n1 = NumeroIntero(num1);
			n2 = NumeroIntero(num2);
		}
		
		void cambiaValori(int num1, int num2){
			n1.setNumero(num1);
			n2.setNumero(num2);
		}
		
		int* getValori(){
			static int arr[2];
			arr[0] = n1.getNumero();
			arr[1] = n2.getNumero();
			return arr;
		}
		void stampaValori(){
			n1.stampaNumero();
			cout << endl;
			n2.stampaNumero();
		}
};
int main(){
	cout << "Inserisci 2 valori per la classe 'Prova', che verranno definiti come 'NumeroIntero'\n\n";
	int a, b;
	cin >> a >> b;
	Prova obj = Prova(a, b);
	cout << "\nQui sotto mostro i valori attuali tramite il metodo getValori() di 'Prova', ritorna un array che prende i valori dal metodo 'getNumero()' di 'NumeroIntero'\n\n";
	int* array = obj.getValori();
	for(int i=0; i<2; i++){
		cout << array[i] << " ";
	}
	cout << "\n\n";
	cout << "Cambia adesso i valori delle due variabili, con il metodo 'cambiaValori()' che utilizza 'setNumero()' di 'NumeroIntero'\n";
	cout << "Inserisci di nuovo due numeri:\n\n";
	cin >> a >> b;
	obj.cambiaValori(a, b);
	cout << "\nAdesso mostro i nuovi valori aggiornati tramite il metodo 'stampaValori()', che riprende 'stampaNumero()' di 'NumeroIntero'\n\n";
	obj.stampaValori();	
}
