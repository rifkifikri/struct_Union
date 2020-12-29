#include <iostream>
using namespace std;

typedef struct buku{
	char kode[20];
	char judul[50];
	char pengarang[20];
	char penerbit[50];
	int jmlHalaman;
}myBook;
union pembeli{
	float fiksi,sains,math,biologi,hasil;
}PembelianBuku;
int main(){
	buku myBook;
	pembeli PembelianBuku;
	PembelianBuku.fiksi=100;
	PembelianBuku.sains=89;
	PembelianBuku.math=80;
	PembelianBuku.biologi=98;
	PembelianBuku.hasil=(PembelianBuku.fiksi+PembelianBuku.sains+PembelianBuku.math+PembelianBuku.biologi)/4;
	
	cout<<"masukkan kode buku :";
	cin.getline(myBook.kode,20);
	cout<<"masukkan judul buku :";
	cin.getline(myBook.judul,50);
	cout<<"masukkan nama pengarang buku :";
	cin.getline(myBook.pengarang,20);
	cout<<"masukkan penerbit buku :";
	cin.getline(myBook.penerbit,50);
	fflush(stdin);
	cout<<"masukkan jumlah halaman buku :";
	cin>>myBook.jmlHalaman;
	
	cout<<endl;
	
	cout<<"kode buku anda "<<myBook.kode<<" yang berjudul "<<myBook.judul<<" pengarang "<<myBook.pengarang
	<<" penerbit "<<myBook.penerbit<<" berjumlah halaman "<<myBook.jmlHalaman;
	
	cout<<"\n\nrata rata pembelian buku di toko samudra adalah :"<<PembelianBuku.hasil;
	return 0;
}
