#include <iostream>
#include <string>
using namespace std;

int id;

class penerbit {
public:
	static int id_penerbit;
	string nama_penerbit;
	void setID();
	void printAll();
	penerbit(string pnama) :nama_penerbit(pnama) { setID(); }
};

class pengarang {
public:
	static int id_pengarang;
	string nama_pengarang;
	void setID();
	void printAll();
};

class buku {
public:
	static int id_buku;
	string judul_buku;
	string nama_penerbit;
	string nama_pengarang;
	void setID();
	void printAll();
};

int penerbit::id_penerbit = 0;
int pengarang::id_pengarang = 0;
int buku::id_buku = 0;

void penerbit::setID() {
	id = ++id_penerbit;
}

void penerbit::printAll() {
	cout << "nama penerbit = " << nama_penerbit << endl;
	cout << endl;
}

void pengarang::printAll() {
	cout << "nama pengarang = " << nama_pengarang << endl;
	cout << endl;
}

void buku::printAll() {
	cout << "judul buku = " << judul_buku << endl;
	cout << "nama pengarang = " << nama_pengarang << endl;
	cout << endl;
}

int main() {
	penerbit penerbit1("Gama Press");
	penerbit penerbit2("Intan Pariwara");

	pengarang pengarang1("joko");
	pengarang pengarang2("Lia");
	pengarang pengarang3("asroni");
	pengarang pengarang4("Giga");

	

	


}