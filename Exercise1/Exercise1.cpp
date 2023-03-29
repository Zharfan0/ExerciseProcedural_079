#include <iostream>
using namespace std;

string kandidat[20] = { "Zharfan", "Lina", "Tono", "Toni", "Budi", "Tiara", "Andi", "Bagas", "Bagus", "Eka", "Mira", "Lulu", "Andi", "Vira", "Rani", "Koko", "Hana", "Dodit", "Lala", "Bilal" };
int nilai_binggris[20];
int nilai_matematika[20];
int lulus = 0;
int tidak_lulus = 0;

void input() {
	for (int i = 0; i < 20; i++) {
		cout << "Masukkan Nilai Bahasa Inggris" << kandidat[i] << " : ";
		cin >> nilai_binggris[i];
		cout << "Masukkan Nilai Matematika" << kandidat[i] << ": ";
		cin >> nilai_matematika[i];
	}
}

void proses() {
	for (int i = 0; i < 20; i++) {
		if ((nilai_binggris[i] + nilai_matematika[i] / 2 >= 70 || nilai_matematika[i] > 80)) {
			cout << "kandidat" << kandidat[i] << "LULUS" << endl;
			lulus++;
		}
		else {
			cout << "kandidat" << kandidat[i] << "TIDAK LULUS" << endl;
			tidak_lulus++;
		}
	}
	//Menampilkan jumlah kandidat yang LULUS dan TIDAK LULUS
	cout << "\n\nJumlah kandidat lulus: " << lulus << endl;
	cout << " Jumlah kandidat yang tidak lulus: " << tidak_lulus << endl;
}

int main() {
	input();
	proses();
	return 0;
}