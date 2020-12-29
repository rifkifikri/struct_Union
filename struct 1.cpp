#include<stdio.h>

#include<iostream>
using namespace std;

 typedef struct Mahasiswa
{
  char Nim[20];
  char Nama[25];
  char Alamat[40];
  int Umur;
}Mhs;
union UnionKu
{
	int x;
	int y;
}data;

int main()
{
  Mahasiswa Mhs;
  UnionKu data;
  data.x =10;
  
  cout<<"Nim  : ";
  cin.getline(Mhs.Nim,20);
  cout<<"Nama  : ";
  cin.getline(Mhs.Nama,25);
  cout<<"Alamat  : ";
  cin.getline(Mhs.Alamat,40);
   fflush(stdin);
  cout<<"Umur  : ";
  cin>>Mhs.Umur;
  // fflush(stdin);
   
  cout<<"\n\n\nNim  : "<<Mhs.Nim<<" Nama  : "<<Mhs.Nama
  <<" Alamat  : "<<Mhs.Alamat<<" Umur  : "<<Mhs.Umur;
  
  cout<<"\nNilai varibel dengan Union "<<endl;
      cout<<"-------------------------- "<<endl;
      cout<<"Nilai x = "<<data.x<<endl;
      cout<<"Nilai y = "<<data.y<<endl;
  return 0;
}
