#include <iostream>
#include <string>
#include <conio.h>
 
using namespace std;
 
struct KTM
{
    string nim;
    string nama;
    string ttl;
    string jenis_kelamin;
    string prodi;
    string agama;
    string pekerjaan;
};
 
 
 
 
int main()
{
    cout<<"\t\n\t---------Program  Pointer--------- \n\n\n";

    //Isi data Kartu Tanda Mahasiswa
    struct KTM *identitas, kartu;
    kartu.nim = "20170801253";
    kartu.nama = "Galang";
    kartu.ttl = "Serang, 03-04-1998";
    kartu.jenis_kelamin = "Laki-Laki";
    kartu.prodi = "Teknik Informatika (FAKULTAS ILMU KOMPUTER)";
    kartu.agama = "Islam";
    kartu.pekerjaan = "Mahasiswa";
      //Variabel pointer identitas
    //Diatur menunjuk ke variabel kartu
    identitas = &kartu;
 
    //Mengakses data melalui variabel pointer identitas
    cout<<" Nomor Induk Mahasiswa\t	: " <<identitas->nim <<endl;
    cout<<" Nama\t\t\t\t: " <<identitas->nama <<endl;
    cout<<" Tempat / Tanggal Lahir\t\t: " <<identitas->ttl <<endl;
    cout<<" Jenis Kelamin\t\t\t: " <<identitas->jenis_kelamin <<endl;
    cout<<" Prodi\t\t\t\t: " <<identitas->prodi <<endl;
    cout<<" Agama\t\t\t\t: " <<identitas->agama <<endl;
    cout<<" Pekerjaan\t\t\t: " <<identitas->pekerjaan <<endl;
 
    getch();
}
