#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main (void)
{
 int cek = 0, data[8], x, hapus;
 char pil;
 do
 {
 cout << "Ujian Praktikum Struktur Data Queque" << endl;
  cout << endl;
  printf ("a. Masukan Data Antrian\n");
  printf ("b. Hapus Data Antrian\n");
  printf ("c. Lihat Data Antrian\n");
  printf ("d. Exit Program\n");
  cout << endl;
  printf ("Ketikan huruf dari salah satu pilihan diatas : ");
  pil = getche();
  cout << endl;
  if (pil != 'd' && pil != 'e' && pil != 'n' && pil != 'y')
   printf ("\n\nSalah ketik, ulangi lagi . . .\n");
   else
    {

     if (pil == 'd')  //PUSH
     {
      if (cek == 8)
       printf ("\nAntrian penih\n");
       else
       {
        printf ("\nMasukan angka-> ");  scanf ("%i", &x);
        data[cek] = x;
        cek++;
       }
     } 

   else
     {
      if (pil == 'e')  //POP
      {
       if (cek == 0)
        printf ("Maaf tidak ada antrian untuk dihapus\n\n");
        else
         {
          hapus = data[0];
          for (int v = 0; v < cek; v++)
          data[v] = data[v + 1];
          data[cek - 1] = NULL;
          cek--;
          cout << endl;
          printf ("Yakin anda ingin data ini dihapus ?");
          cout << endl;
          printf ("\nData dengan nilai = %i akan terhapus. [Tekan Enter]", hapus);
         }
        getch();
      }

      else
         {
          if (pil == 'n')  //mengecek data
          {
           if (cek == 0)
           printf ("\nMaaf tidak ada antrian untuk ditampilkan\n\n");
           else
            {
             printf ("\n");
             for (int z = 0; z < cek; z++)
             {
              printf (" { ");
              printf ("%i", data[z]);
              printf (" } ");
             }
            }
           getch();
          }
         }
     }
    }
 }

 while (pil != 'y');
 cout << endl;
 cout << endl;
 printf ("Yakin anda ingin keluar ? {{{Tekan Enter}}}");
 pil = getche();
}
