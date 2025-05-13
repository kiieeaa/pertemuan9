#include <iostream>
using namespace std;

class BangunDatar;


class persegiPanjang{
    public:
        void inputData(BangunDatar &bd);
        void outputData(BangunDatar &bd);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
        float hitungkeliling(){
            return 2 * (panjang + lebar);
        };
    public:
         //untuk mengakses panjang dan lebar
         friend void persegiPanjang::inputData(BangunDatar &bd);
         //untuk mengakses fungsi
         friend void persegiPanjang::outputData(BangunDatar &bd);

};

void persegiPanjang::inputData(BangunDatar &bd){
    cout << "masukan panjang : ";
    cin >> bd.panjang;
    cout << "masukan lebar : ";
    cin >> bd.lebar;

}

void persegiPanjang::outputData(BangunDatar &bd){
    cout << "Luas : " << bd.hitungLuas() << endl;
    cout << "keliling : " << bd.hitungkeliling() << endl;
};

int main() {
    persegiPanjang pP;
    BangunDatar bD;
    pP.inputData(bD);
    pP.outputData(bD);
};