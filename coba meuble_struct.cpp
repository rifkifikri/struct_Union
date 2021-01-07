#include <iostream>
#include <stdio.h>
using namespace std;
struct toko{
	int banyak,total,harga;
	char merk;
	string kode,label;
	char type;
	int jml;
};
int main()
{
	toko furniture[20];
	string nama;
	int tampung =0;
	int bayar;
	int kembalian;
	int bts;
	int parameter=0;
	cout<<"=====================================================================\n";
	cout<<"\t\tToko Bejo Meuble\n";
	cout<<"=====================================================================\n";
	cout<<"type\t Merek-1\t harga\n";
	cout<<"A\t Maspion\t 1000000\n";
	cout<<"B\t Maspion\t 1500000\n";
	cout<<"C\t Maspion\t 900000\n";
	cout<<"\ntype\t Merek-2\t harga\n";
	cout<<"A\t Samsung\t 800000\n";
	cout<<"B\t Samsung\t 700000\n";
	cout<<"C\t Samsung\t 600000\n";
	cout<<"=====================================================================\n";
	
	fflush(stdin);
	cout<<"Masukkan Nama Kasir \t=";
	getline(cin,nama);
	fflush(stdin);
	cout<<"Masukkan banyak jenis \t=";cin>>bts;
	for(int x=0;x<bts;x++){
		cout<<"\n\nfurniture ke-"<<x+1<<endl;
		cout<<"Pilih Merk [M/S]	:";cin>>furniture[x].merk;
		cout<<"Pilih type [A/B/C]	:";cin>>furniture[x].type;
		cout<<"Jumlah beli	:";cin>>furniture[x].banyak;
		if((furniture[x].merk=='M'||furniture[x].merk=='m')&&(furniture[x].type=='A'||furniture[x].type=='a')){
			furniture[x].kode="A";
			furniture[x].label="Maspion";
			furniture[x].harga=1000000;
			furniture[x].total=furniture[x].banyak*1000000;
		}
		else if((furniture[x].merk=='M'||furniture[x].merk=='m')&&(furniture[x].type=='B'||furniture[x].type=='b')){
			furniture[x].kode="B";
			furniture[x].label="Maspion";
			furniture[x].harga=1500000;
			furniture[x].total=furniture[x].banyak*1500000;
		}
		else if((furniture[x].merk=='M'||furniture[x].merk=='m')&&(furniture[x].type=='C'||furniture[x].type=='c')){
			furniture[x].kode="C";
			furniture[x].label="Maspion";
			furniture[x].harga=900000;
			furniture[x].total=furniture[x].banyak*900000;
		}
		else if((furniture[x].merk=='S'||furniture[x].merk=='s')&&(furniture[x].type=='A'||furniture[x].type=='a')){
			furniture[x].kode="A";
			furniture[x].label="Samsung";
			furniture[x].harga=800000;
			furniture[x].total=furniture[x].banyak*800000;
		}
		else if((furniture[x].merk=='S'||furniture[x].merk=='s')&&(furniture[x].type=='B'||furniture[x].type=='b')){
			furniture[x].kode="B";
			furniture[x].label="Samsung";
			furniture[x].harga=700000;
			furniture[x].total=furniture[x].banyak*700000;
		}
		else if((furniture[x].merk=='S'||furniture[x].merk=='s')&&(furniture[x].type=='C'||furniture[x].type=='c')){
			furniture[x].kode="C";
			furniture[x].label="Samsung";
			furniture[x].harga=600000;
			furniture[x].total=furniture[x].banyak*600000;
		}
	}
	system("cls");
	
	cout<<"=====================================================================\n";
	cout<<"\t\tToko Bejo Meuble\n";
	cout<<"=====================================================================\n";
	cout<<"Nama Kasir :"<<nama;
	cout<<"\n=====================================================================\n";
	cout<<"No.\ttype\t Merek-1\t harga satuan\tharaga total\n";
	for(int x=0;x<bts;x++){
		cout<<x+1<<"\t"<<furniture[x].kode<<" \t"<<furniture[x].label<<" \t "<<furniture[x].harga<<"\t\t"<<furniture[x].total<<endl;
		tampung +=furniture[x].total;
	}
	cout<<"\n=====================================================================\n";
	cout<<"\t\t\ttotal pembelian :"<<tampung;
	cout<<"\n\t\t\tbayar \t\t:";
	cin>>bayar;
	kembalian=bayar-tampung;
	
	cout<<"\t\t\tkembali \t:"<<kembalian;

}	
