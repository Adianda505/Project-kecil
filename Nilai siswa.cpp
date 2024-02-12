#include<iostream>
using namespace std;
int main(){
cout<<"===== Nilai minimal siswa sesuai jurusan=====\n";
cout<<"-> Bahasa = 80\n";
cout<<"-> IPS    = 85\n";
cout<<"-> MIPA   = 90\n";
cout<<"================================================\n";

int nilai,pilihan;
string nama;
cout<<"Masukan Nama siswa : ";
cin>>nama;
cout<<"Masukan Nilai      : ";
cin>>nilai;

cout<<"List Jurusan :\n";
cout<<"1. Bahasa\n";
cout<<"2. IPS\n";
cout<<"3. MIPA\n";

cout<<"Pilih Jurusan anda : ";
cin>>pilihan;

switch(pilihan){
case 1 :
	if(nilai >= 80){
		cout<<"Anda Lulus dari Jurusan bahasa";
		cout<<endl;
	}else{
		cout<<"Anda mengulang tahun depan";
		cout<<endl;
	}
	break;
case 2 :
	if(nilai >= 85){
		cout<<"Anda Lulus dari Jurusan IPS";
		cout<<endl;
	}else{
		cout<<"Anda mengulang tahun depan";
		cout<<endl;
	}
	break;
case 3 :
	if(nilai >= 90){
		cout<<"Anda Lulus dari Jurusan MIPA";
		cout<<endl;
	}else{
		cout<<"Anda mengulang tahun depan";
		cout<<endl;
	}
	break;
}
}
