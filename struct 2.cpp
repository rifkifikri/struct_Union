#include <iostream>
using namespace std;

struct mahasiswa{
	char nama[30];
	struct{
		int tanggal;
		int bulan;
		int tahun;
	}tgllahir;
}mhs[5];

int main(){
	mahasiswa mhs[5];
	for(int n=0;n<5;n++){
		fflush (stdin);
	cout<<"\nmasukkan nama anda :";
	cin.getline(mhs[n].nama,30); 
	cout<<"masukkan tanggal lahir anda  :";
	cin>>mhs[n].tgllahir.tanggal;
//	fflush (stdin);
	cout<<"masukkan bulan kelahiran anda  :";
	cin>>mhs[n].tgllahir.bulan;
	cout<<"masukkan tahun kelahiran anda  :";
	cin>>mhs[n].tgllahir.tahun;
	}
	cout<<endl<<endl;
	for(int p=0;p<5;p++){
		cout<<"\nnama anda :"<<mhs[p].nama,30;
	cout<<"\nanda lahir tanggal  :"<<mhs[p].tgllahir.tanggal<<endl;
	cout<<"bulan kelahiran anda adalah :"<<mhs[p].tgllahir.bulan<<endl;
	cout<<"tahun kelahiran anda  adalah :"<<mhs[p].tgllahir.tahun<<endl;
	}
return 0;
}
