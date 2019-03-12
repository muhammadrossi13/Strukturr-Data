#include <conio.h>
#include <iostream.h>
#include <cstring.h>

struct mhs
{   string nama,jeniskelamin,jurusan;
    int nim,nh1,nh2,nh3,ratarata;
};

void nampil_data_semua (mhs mahasiswa[], int n)
{
 int i;
   cout<<"Hasilnya adalah : "<<endl;
 cout<<"----------------------------------------------------------------"<<endl;
 cout<<"|  No  |   NIM  |   Nama   |  Jenis Kelamin  |  Jurusan  |  NilaiHarian1  |  NilaiHarian2 |  NilaiHarian3 |  Rata-rata |"<<endl;
 cout<<"----------------------------------------------------------------"<<endl;
 for(i=1;i<=n;i++){
  cout<<"| "<<i<<" |  "<<mahasiswa[i].nim<<"  |   "<<mahasiswa[i].nama<<"   |   "<<mahasiswa[i].jeniskelamin<<"   |   "<<mahasiswa[i].jurusan<<"     |     "<<mahasiswa[i].nh1<<"    |     "<<mahasiswa[i].nh2<<"    |    "<<mahasiswa[i].nh3<<"   |   "<<mahasiswa[i].ratarata<<"|";
  cout<<endl;

 }
   cout<<"--------------------------------------------------------------"<<endl;
   cout<<endl<<endl;
}

void mencariDataSecaraSekuensial (mhs mahasiswa[], int n)
{
  //int i;
  char nim;
  int i;
    bool ketemu=false;
    int lokasi=-1;
    cout<<"Silakan masukkan nim yang ingin dicari : "; cin>>nim;
    for (int i=1;i<=n;i++)
    {
       if(nim==nim)
       {
          ketemu=true;
          lokasi=i;
       }
    }
    if (ketemu==true)
       cout<<nim<<" ditemukan pada Nomor ke- "<<lokasi<<endl;
    else
       cout<<"Maaf, nim "<<nim<<" tidak ada dalam list kami "<<endl;
}

void main()
{
  mhs mahasiswa[50];
    int n ;
    int i;
    int ratarata;
    cout<<"Masukan banyak data : "; cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
  cout<<"Masukan data ke-"<<i<<endl;
  cout<<"Masukan NIM            : ";cin>>mahasiswa[i].nim;
  cout<<"Masukan NAMA           : ";cin>>mahasiswa[i].nama;
  cout<<"Masukan Jenis Kelamin  : ";cin>>mahasiswa[i].jeniskelamin;
  cout<<"Masukan Jurusan        : ";cin>>mahasiswa[i].jurusan;
  cout<<"Masukan Nilai Harian 1 : ";cin>>mahasiswa[i].nh1;
  cout<<"Masukan Nilai Harian 2 : ";cin>>mahasiswa[i].nh2;
  cout<<"Masukan Nilai Harian 3 : ";cin>>mahasiswa[i].nh3;
  ratarata=((mahasiswa[i].nh1+mahasiswa[i].nh2+mahasiswa[i].nh3)/3);
  cout<<" Rata-rata  : "<<ratarata;
  cout<<endl;
  }
    nampil_data_semua (mahasiswa, n);
    mencariDataSecaraSekuensial (mahasiswa, n);
getch();
}