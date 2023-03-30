#include <iostream>
using namespace std;

void descending(int* jml, int nilai);
void Findvalue(int* pointer, int nilai, int value);

int main() {
    cout << " TUGAS PRAKTIKUM 3 ";
    cout << "\n Iqbal Faris Ihsani ";
    cout << "\n IF05 - 22.11.4850 ";
    cout << "\n=======================================";

    int nilai, i, value, *jml;
    cout << "\n\nTentukan jumlah nilai: ";
    cin >> nilai;
    jml = new int[nilai];
    int* pointer = jml;

    for (i = 0; i < nilai; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> jml[i];
    }
    descending(jml, nilai);
    cout << "\nNilai setelah diurutkan secara menurun: ";
    for (i = 0; i < nilai; i++) {
        cout << jml[i] << " "; 
    }
    cout << "\n=======================================";
    cout << "\n\nTentukan nilai yang ingin dicari: ";
    cin >> value;
    Findvalue(pointer, nilai, value);
    return 0;
}

void Findvalue(int* pointer, int nilai, int value) {
    int i, flag = 0;
    for (i = 0; i < nilai; i++) {
        if (*pointer == value) {
            cout << "\nNilai " << value << " terletak pada bagian Nilai ke-" << i + 1 << endl;
            flag = 1;
            break;
        }
        pointer++;
    }
    if (flag == 0) {
        cout << " \nError 404 " << endl;
        cout << "Nilai " << value << " tidak ditemukan." << endl;
    }
}

void descending(int* jml, int nilai) {
    int i, j, temp;
    for (i = 0; i < nilai; i++) {
        for (j = i + 1; j < nilai; j++) {
            if (jml[i] < jml[j]) {
                temp = jml[i];
                jml[i] = jml[j];
                jml[j] = temp;
            }
        }
    }
}

