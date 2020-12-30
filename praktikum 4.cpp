#include <iostream>
using namespace std;
struct roti{
	char kode;
	string nama;
	int harga;
	int banyak;
	int total;
}jajan[20];
int main(){
	char pilihan;
	int counter=0;
	int tampung=0;
	int pajak;
	int hasilnya;
	cout<<"\tdaftar jajanan";
	cout<<"\n========================\n";
	cout<<"kode\tnama\t\tharga\n";
	cout<<"A\troti niyam\t5000\n";
	cout<<"B\troti bakery\t2000\n";
	cout<<"C\troti cannary\t4000\n";
	do {
	cout<<"masukkan kode jajan yang di pilih :";cin>>jajan[counter].kode;
	cout<<"masukkan banyaknya jumlah jajan  :";cin>>jajan[counter].banyak;
	
		if(jajan[counter].kode=='a'||jajan[counter].kode=='A'){
		jajan[counter].total=jajan[counter].banyak*5000;
		jajan[counter].nama="roti niyam";
		jajan[counter].harga=5000;
		cout<<"pesanan ke-"<<counter+1<<endl;
		cout<<"kode\tnama\t\tharga\tbanyak barang\ttotal harga\n";
		cout<<"A\troti niyam\t5000\t"<<jajan[counter].banyak<<"\t\t"<<jajan[counter].total;
		}
		else if(jajan[counter].kode=='b'||jajan[counter].kode=='B'){
		jajan[counter].total=jajan[counter].banyak*2000;
		jajan[counter].nama="roti bakery";
		jajan[counter].harga=2000;
		cout<<"pesanan ke-"<<counter+1<<endl;
		cout<<"kode\tnama\t\tharga\tbanyak barang\ttotal harga\n";
		cout<<"B\troti bakery\t2000\t"<<jajan[counter].banyak<<"\t\t"<<jajan[counter].total;
		}
		else if(jajan[counter].kode=='c'||jajan[counter].kode=='C'){
		jajan[counter].total=jajan[counter].banyak*4000;
		jajan[counter].nama="roti cannary";
		jajan[counter].harga=4000;
		cout<<"pesanan ke-"<<counter+1<<endl;
		cout<<"kode\tnama\t\tharga\tbanyak barang\ttotal harga\n";
		cout<<"C\troti cannary\t4000\t"<<jajan[counter].banyak<<"\t\t"<<jajan[counter].total;
		}
		counter++;
		cout<<"\n\napakah anda ingin memesan pesanan yang lain?? [y/n] :";
		cin>>pilihan;
	
	}while(pilihan=='y'||pilihan=='Y');
	
	
	cout<<"\nkode\tnama\t\tharga\tbanyak barang\ttotal harga\n";

	for(int x=0;x<counter;x++){
		cout<<jajan[x].kode<<"\t"<<jajan[x].nama<<"\t"<<jajan[x].harga<<"\t\t"<<jajan[x].banyak<<
		"\t"<<jajan[x].total<<endl;
		tampung+=jajan[x].total;
	}

	cout<<"\ndaftar pesanan yang di pilih \n";
	cout<<"total belanja :"<<tampung;
	pajak=tampung*0.1;
	cout<<"\ntotal dikenakan pajak 10% :"<<pajak;
	hasilnya=tampung+pajak;
	cout<<"\ntotal pembayaran keseluruhan :"<<hasilnya;

	return 0;
}
