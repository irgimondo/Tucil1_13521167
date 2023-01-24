#include <iostream>   
#include <time.h>     
using namespace std;

// GLOBAL VARIABLES
float a, b, c, d;
int temp = 0;

int e[25], f[25], g[25], h[25];
int n = 0;

void tambaharr(int a, int b, int c, int d);


void baca();


void testangka (int w, int x, int y, int z);


void hasil (int w, int x, int y, int z, int i, int j, int k);


float hitung (float a, float b, int masukan);


char output (int masukan);


// PROGRAM UTAMA
int main()
{
  // KAMUS
  int i;

  // ALGORITMA


  cout << "24 GAME" << endl << endl;
  baca
();

 
  clock_t start = clock();


  tambaharr(c, b, a, d);
  tambaharr(c, b, d, a);
  tambaharr(c, d, a, b);
  tambaharr(c, d, b, a);
  tambaharr(d, a, b, c);
  tambaharr(d, a, c, b);
  tambaharr(d, b, a, c);
  tambaharr(d, b, c, a); 
  tambaharr(d, c, a, b);
  tambaharr(d, c, b, a);
  tambaharr(a, b, c, d);
  tambaharr(a, b, d, c);
  tambaharr(a, c, b, d);
  tambaharr(a, c, d, b);
  tambaharr(a, d, b, c);
  tambaharr(a, d, c, b);
  tambaharr(b, a, c, d);
  tambaharr(b, a, d, c);
  tambaharr(b, c, a, d);
  tambaharr(b, c, d, a);
  tambaharr(b, d, a, c);
  tambaharr(b, d, c, a);
  tambaharr(c, a, b, d);
  tambaharr(c, a, d, b);

  for (i = 1; i <= n; i++)
  {
    testangka
  (e[i], f[i], g[i], h[i]);
  }



  cout << endl << "Hasil =  " << temp << " buah solusi" << endl;

  // Waktu

  printf("Waktu: %.5fs\n", (float)(clock() - start)/CLOCKS_PER_SEC);

  return 0;
}


void baca()
{
  cout << "Masukkan Angka :" << endl;
  cin >> a >> b >> c >> d;
  cout << "diproses..." << endl;
  cout << a << ", " << b << ", " << c << ", dan " << d << endl << endl;
}


void tambaharr(int a, int b, int c, int d)
{
  // Kamus 
  int i;
  bool tepat;

  // ALGORITMA
  tepat = false;
  i = 1;

  while (i <= n && not tepat)
  {
    if (a == e[i] && b == f[i] && c == g[i] && d == h[i])
    {
      tepat = true;
    }
    else
    {
      i++;
    }
  }


  if (not tepat)
  {
    n++;
    e[n] = a;
    f[n] = b;
    g[n] = c;
    h[n] = d;
  }
}



void testangka (int w, int x, int y, int z)
{
  int o, p, q;

  for (o = 1; o <= 4; o++)
  {
    for (p = 1; p <= 4; p++)
    {
      for (q = 1; q <= 4; q++)
      {
        hasil (w, x, y, z, o, p, q);
      }
    }
  }
}



void hasil (int w, int x, int y, int z, int i, int j, int k)
{
  // Float ini berfungsi menyimpan hasil perhitungan
  float a;


  a = hitung(hitung(hitung((float)w, (float)x, i), (float) y, j), (float)z, k);
  if (a > 23.99999 && a < 24.00001)
  {
    temp++;
    cout << "((" << w << " " << output(i) << " " << x << ") " <<
      output(j) << " " << y << ") " << output(k) << " " << z << endl;
  }

  a = hitung(hitung((float)w, (float)x, i), hitung((float) y, (float) z, k), j);
  if (a > 23.99999 && a < 24.00001)
  {
    temp++;
    cout << "(" << w << " " << output(i) << " " << x << ") " <<
      output(j) << " (" << y << " " << output(k) << " " << z << ")" << endl;
  }

  a = hitung(hitung((float)w, hitung((float)x, (float)y, j), i), (float) z, k);
  if (a > 23.99999 && a < 24.00001)
  {
    temp++;
    cout << "(" << w << " " << output(i) << " (" << x << " " << output(j) <<
      " " << y << ")) " << output(k) << " " << z << endl;
  }

  a = hitung((float)w, hitung(hitung((float)x, (float)y, j), (float)z, k), i);
  if (a > 23.99999 && a < 24.00001)
  {
    temp++;
    cout << w << " " << output(i) << " ((" << x << " " << output(j) << " " <<
      y << ") " << output(k) << " " << z << ")" << endl;
  }

  a = hitung((float)w, hitung((float)x, hitung((float)y, (float)z, k), j), i);
  if (a > 23.99999 && a < 24.00001)
  {
    temp++;
    cout << w << " " << output(i) << " (" << x << " " << output(j) << " (" <<
      y << " " << output(k) << " " << z << "))" << endl;
  }
}


float hitung (float a, float b, int masukan)
{
  if (masukan == 1)
  {
    return (a + b);
  }
  else if (masukan == 2)
  {
    return (a - b);
  }
  else if (masukan == 3)
  {
    return (a * b);
  }
  else if (masukan == 4)
  {
    return ((float)a / (float)b);
  }
}


char output (int masukan)
{
  if (masukan == 1)
  {
    return ('+');
  }
  if (masukan == 2)
  {
    return ('-');
  }
  if (masukan == 3)
  {
    return ('*');
  }
  if (masukan == 4)
  {
    return ('/');
  }
}