// include berfungsi untuk mengimport fungsi-fungsi yang disesdiakan oleh bahasa C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;


int main() // fungsi utama dalam program, akan di eksekusi pertama 
{
   string a,b,c,d,e,f;
   
   cout << "Nama Karyawan = ";
   cin >> a;
   
   cout << "NIK = ";
   cin >> b;
   
   cout << "Jabatan = ";
   cin >> c;
   
   cout << "Divisi = ";
   cin >> d;
   
   cout << "Job Desc = ";
   cin >> e;
   
   f = a+b+c+d+e;
   cout << a <<" Dengan Jabatan " << c << " berkerja di divisi " << d << "," << " dengan jobdesk sebagai berikut " << e << endl;
  
return 0; // Agar sebuah fungsi bisa mengembalikan nilai

}





