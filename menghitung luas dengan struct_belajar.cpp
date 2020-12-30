#include <iostream>
#include <stdio.h>
using namespace std;

struct menghitung
{
	float jarijari;
	float keliling;
	float luas;
}lingkaran;
int main(){
	char pilihan;
	do{
	float input;
	menghitung lingkaran;
	lingkaran.jarijari=input;
	cout<<"masukkan jari jari  :";
	cin>>lingkaran.jarijari;
	
	lingkaran.keliling=(lingkaran.jarijari+lingkaran.jarijari)*3.14;
	lingkaran.luas=(lingkaran.jarijari*lingkaran.jarijari)*3.14;
	cout<<"nilai jari jarinya adalah :"<<lingkaran.jarijari<<endl;
	cout<<"kelilingnya adalah :"<<lingkaran.keliling<<endl;
	cout<<"Luas nya adalah adalah :"<<lingkaran.luas<<endl;
	cout<<"\napakah anda ingin mengulang? [y/n]:";cin>>pilihan;
	system("cls");
	}while(pilihan=='y'||pilihan=='Y');
	
	return 0;
}
