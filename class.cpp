#include <iostream>
using namespace std;

class Mobil
{

public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void input_data()
    {
        cout << "masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void output_data()
    {
        cout << "masukkan harga mobil = " << harga_mobil << endl;
    }
};
int main()
{
    mobil sport;
    sport.input_data();                                  // methode
    cout << "nama mobil = " << sport.nama_mobil << endl; // input data
    cout << "tipe mobil = " << sport.tipe_mobil << endl;
    sport.output_data();
}
