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
};
inta main()

    // introduceOOP_0004