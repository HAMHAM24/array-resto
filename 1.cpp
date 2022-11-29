#include <iostream>
using namespace std;

int main(){
    // Deklarasi
    int hasil, baris = 3, kolom = 3;
    int matriksA [3][3];
    int matriksB [3][3];
    int matriksC [3][3];

    cout << endl;
    cout << "==================================================" << endl;
    cout << "====== PROGRAM PERKALIAN MATRIKS ORDO 3 X 3 ======" << endl;
    cout << "=============== By Ilham Purnomo =================" << endl;
    cout << "==================================================" << endl;
    cout << endl;

    // Input Matriks A
    cout << "-------Matriks A-------" << endl;
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            cout << "Masukkan Baris ke " << i << " Kolom ke " << j << " : ";
            cin >> matriksA[i][j];
        }
    }
    cout << endl;

    // Input Matriks B
    cout << "-------Matriks B-------" << endl;
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            cout << "Masukkan Baris ke " << i << " Kolom ke " << j << " : ";
            cin >> matriksB[i][j];
        }
    }
    system("clear");

    // Proses Perkalian
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
        hasil = 0;
           for(int k = 1; k <= baris; k++){
            hasil = hasil + matriksA[i][k] * matriksB[k][j];
            matriksC [i][j] = hasil; 
           }
        }
    }

    // Menampilkan Matriks A
    cout << "------- Matriks A -------\n" << endl;
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            cout << matriksA[i][j] << "\t";
        }cout << endl;
    }
    cout << endl;

    // Menampilkan Matriks B
    cout << "------- Matriks B -------\n" << endl;
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= kolom; j++){
            cout << matriksB[i][j] << "\t";
        }cout << endl;
    }
    cout << endl;
    
    // Menampilkan Matriks C / hasil kali
    cout << "------- Hasil Kali -------\n" << endl;
    for(int i = 1; i <= baris; i++){
        for(int j = 1; j <= baris; j++){
            cout << matriksC[i][j] << "\t";
        } cout << endl;
    }
    return 0;
}