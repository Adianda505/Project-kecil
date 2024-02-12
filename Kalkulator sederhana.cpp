#include <iostream>
using namespace std;
int main(){
	int angka1, angka2, jumlah, kurang, kali, bagi, modul;
	
	cout<<"Input angka pertama : ";
	cin>>angka1;
	cout<<"Input angka kedua   : ";
	cin>>angka2;
	
	jumlah = angka1 + angka2;
	kurang = angka1 - angka2;
	kali = angka1 * angka2;
	bagi = angka1 / angka2;
	modul= angka1 % angka2;
	
	cout<< angka1<<"+"<< angka2<< "="<< jumlah <<endl;
	cout<< angka1<< "-"<< angka2<< "="<< kurang<<endl;
	cout<< angka1<< "x"<< angka2<< "="<< kali  <<endl;
	cout<< angka1<< "/"<< angka2<< "="<< bagi  <<endl;
	cout<< angka1<< "%"<< angka2<< "="<< modul <<endl;
}

