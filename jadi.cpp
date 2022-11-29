#include <iostream>
using namespace std;
string pilihanHari, pilihan = "ya";
int shift;

int main(){
    cout << "\n============================================================ JADWAL KULIAH TRIK IK1AA ============================================================\n" << endl;
    string jadwal[8][7] = {
        {"\tSesi | Hari\t","Senin\t\t\t","Selasa\t\t\t\t","Rabu\t\t\t","Kamis\t\t\t","Jum'at\n\n"},
        {"\t 1. \t\t","Praktikum Tekins\t","Elektronika Analog\t\t","Matek\t\t\t", "Gamtek\t\t\t","  -\n\n"},
        {"\t 2. \t\t","Praktikum Tekins\t","Tekins\t\t\t\t","Fistek\t\t\t","Gamtek\t\t\t  ","-\n\n"},
        {"\t 3. \t\t","Deselka\t\t\t ","-\t\t\t\t","Pemdas\t\t\t  ", "-\t\t\t"," RLDC\n\n"},
        {"\t 4. \t\t","Deselka\t\t\t ","-\t\t\t\t","Pemdas\t\t\t","Bingg\t\t\t  ","-\n\n"}
    };
    for(int i = 0; i < 8; i++){
		for(int j = 0; j < 7; j++){
			cout << jadwal[i][j];
		}
	}cout << endl;
    cout << "!Untuk mata kuliah gambar teknik diganti pada hari kamis jam 19.00 WIB" << endl;
    cout << "==================================================================================================================================================" << endl;
    cout << endl;
    while(pilihan == "ya"){
    cout << "Masukkan Hari  : ";
    cin >> pilihanHari;
        if(pilihanHari == "Senin"){
            cout << "Masukkan Shift : ";
            cin >> shift;
            cout << endl;
            if(shift == 1){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][1] << endl;
                cout << "Shift          : 1" << endl;
                cout << "Matkul         : " <<  jadwal[1][1] << endl;
            }else if(shift == 2){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][1] << endl;
                cout << "Shift          : 2" << endl;
                cout << "Matkul         : " <<  jadwal[2][1] << endl;
            }else if(shift == 3){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][1] << endl;
                cout << "Shift          : 3" << endl;
                cout << "Matkul         : " <<  jadwal[3][1] << endl;
            }else if(shift == 4){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][1] << endl;
                cout << "Shift          : 4" << endl;
                cout << "Matkul         : " <<  jadwal[4][1] << endl;
            }else{
                cout << "------ Shift Tidak Ditemukan ------" << endl;
            }
        }else if(pilihanHari == "Selasa"){
            cout << "Masukkan Shift : ";
            cin >> shift;
            cout << endl;
            if(shift == 1){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][2] << endl;
                cout << "Shift          : 1" << endl;
                cout << "Matkul         : " <<  jadwal[1][2] << endl;
            }else if(shift == 2){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][2] << endl;
                cout << "Shift          : 2" << endl;
                cout << "Matkul         : " <<  jadwal[2][2] << endl;
            }else if(shift == 3){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][2] << endl;
                cout << "Shift          : 3" << endl;
                cout << "Matkul         : " <<  jadwal[3][2] << endl;
            }else if(shift == 4){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][2] << endl;
                cout << "Shift          : 4" << endl;
                cout << "Matkul         : " <<  jadwal[4][2] << endl;
            }else{
                cout << "------ Shift Tidak Ditemukan ------" << endl;
            }
        }else if(pilihanHari == "Rabu"){
            cout << "Masukkan Shift : ";
            cin >> shift;
            cout << endl;
            if(shift == 1){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][3] << endl;
                cout << "Shift          : 1" << endl;
                cout << "Matkul         : " <<  jadwal[1][3] << endl;
            }else if(shift == 2){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][3] << endl;
                cout << "Shift          : 2" << endl;
                cout << "Matkul         : " <<  jadwal[2][3] << endl;
            }else if(shift == 3){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][3] << endl;
                cout << "Shift          : 3" << endl;
                cout << "Matkul         : " <<  jadwal[3][3] << endl;
            }else if(shift == 4){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][3] << endl;
                cout << "Shift          : 4" << endl;
                cout << "Matkul         : " <<  jadwal[4][3] << endl;
            }else{
                cout << "------ Shift Tidak Ditemukan ------" << endl;
            }
        }else if(pilihanHari == "Kamis"){
            cout << "Masukkan Shift : ";
            cin >> shift;
            cout << endl;
            if(shift == 1){
                cout << "================ Mata Kuliah ================" << endl;
                cout << "Hari           : " << jadwal[0][4] << endl;
                cout << "Shift          : 1" << endl;
                cout << "Matkul         : " <<  jadwal[1][4] << endl;
                cout << "!!! Gamtek dipindah hari kamis jam 19.00 WIB" << endl;
            }else if(shift == 2){
                cout << "================ Mata Kuliah ================" << endl;
                cout << "Hari           : " << jadwal[0][4] << endl;
                cout << "Shift          : 2" << endl;
                cout << "Matkul         : " <<  jadwal[1][4] << endl;
                cout << "!!! Gamtek dipindah hari kamis jam 19.00 WIB" << endl;
            }else if(shift == 3){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][4] << endl;
                cout << "Shift          : 3" << endl;
                cout << "Matkul         : " <<  jadwal[3][4] << endl;
            }else if(shift == 4){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][4] << endl;
                cout << "Shift          : 4" << endl;
                cout << "Matkul         : " <<  jadwal[4][4] << endl;
            }else{
                cout << "------ Shift Tidak Ditemukan ------" << endl;
            }
        }else if(pilihanHari == "Jum'at"){
            cout << "Masukkan Shift : ";
            cin >> shift;
            cout << endl;
            if(shift == 1){
                cout << "================ Mata Kuliah ================" << endl;
                cout << "Hari           : " << jadwal[0][5] << endl;
                cout << "Shift          : 1" << endl;
                cout << "Matkul         : " <<  jadwal[1][5] << endl;
            }else if(shift == 2){
                cout << "================ Mata Kuliah ================" << endl;
                cout << "Hari           : " << jadwal[0][5] << endl;
                cout << "Shift          : 2" << endl;
                cout << "Matkul         : " <<  jadwal[1][5] << endl;
            }else if(shift == 3){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][5] << endl;
                cout << "Shift          : 3" << endl;
                cout << "Matkul         : " <<  jadwal[3][5] << endl;
            }else if(shift == 4){
                cout << "========== Mata Kuliah ==========" << endl;
                cout << "Hari           : " << jadwal[0][5] << endl;
                cout << "Shift          : 4" << endl;
                cout << "Matkul         : " <<  jadwal[4][5] << endl;
            }else{
                cout << "------ Shift Tidak Ditemukan ------" << endl;
            }
        }
        cout << endl;
        cout << "Mau melihat jadwal lagi ?" << endl;
        cout << "Masukkan pilihan ya/tidak : ";
        cin >> pilihan;
        cout << endl;
    }
    
}