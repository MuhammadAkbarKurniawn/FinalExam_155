#include <iostream>
#include <string>
using namespace std;


class Node {
public:
	string name;
	int jumlah;
	string tipe;
	Node* next;
};


class ManajemenProduk {
private:
	Node* head;

public:
	ManajemenProduk() {
		head = NULL;
	}

	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);

		Node* newNode = new Node();
		newNode->name = nama;
		newNode->jumlah = jumlah;
		newNode->tipe = tipe;

		Node* nama = head;
		Node* jumlah = head;
		Node* current = head;

		cout << "Produk berhasil ditambahkan!" << endl;
	}

	void tampilkanSemuaProduk(string tipe, Node* nama, Node* jumlah) {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			while (current != NULL) {
				cout << "Nama Produk :" << current->name << endl;
				cout << "Jumlah Produk :" << current->jumlah << endl;
				cout << "Tipe Produk :" << current->tipe << endl;
				return;
			}
		}
	}

	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				cout << "Nama Produk :" << current->name << endl;
				cout << "Jumlah Produk :" << current->jumlah << endl;
				cout << "Tipe Produk :" << current->tipe << endl;
				return;
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}

	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		while (head != NULL) {
			cout << "Nama Produk :" << current->name << endl;
			cout << "Jumlah Produk :" << current->jumlah << endl;
			cout << "Tipe Produk :" << current->tipe << endl;
			return;
		}
	}
};

int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1: {
			manajemenProduk.tambahProduk();
			break;
		}
		case 2: {
			manajemenProduk.tampilkanSemuaProduk();
			break;
		}
		case 3: {
			manajemenProduk.cariProdukByNama();
			break;
		}
		case 4: {
			manajemenProduk.algorithmaSortByJumlahProduk();
			break;
		}
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;

	} while (pilihan != 5);
	return 0;
}