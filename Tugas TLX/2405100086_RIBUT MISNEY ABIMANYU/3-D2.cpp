/*Berapa kalikah C++ akan tercetak?*/
int counter = 1;
while (counter < 4) {
    cout << "C++" << endl;
    counter += 1;
}
//c++ tercetak 3 karena counter diinisialisasi dengan nilai 1. Loop while akan terus berjalan selama counter kurang dari 4. Mari kita lihat bagaimana loop ini berfungsi:
//Iterasi Pertama: counter = 1 (cetak "C++", kemudian counter menjadi 2)
//Iterasi Kedua: counter = 2 (cetak "C++", kemudian counter menjadi 3)
//Iterasi Ketiga: counter = 3 (cetak "C++", kemudian counter menjadi 4)
//Kondisi Berhenti: Sekarang counter = 4, sehingga loop berhenti.
//Output program akan menjadi:
//C++
//C++
//C++
