//Berapa kalikah C++ akan tercetak?
int counter = 1;
while (counter <= 4) {
    cout << "C++" << endl;
    counter += 1;
}
//c++ yang tercetak adalah 4 karena counter diinisialisasi dengan nilai 1 dan loop while akan terus berjalan selama counter kurang dari atau sama dengan 4. Mari kita analisis langkah-langkahnya:
///Iterasi Pertama: counter = 1 (cetak "C++", kemudian counter menjadi 2)
//Iterasi Kedua: counter = 2 (cetak "C++", kemudian counter menjadi 3)
//Iterasi Ketiga: counter = 3 (cetak "C++", kemudian counter menjadi 4)
//Iterasi Keempat: counter = 4 (cetak "C++", kemudian counter menjadi 5)
//Kondisi Berhenti: Sekarang counter = 5, sehingga loop berhenti.
//Output program akan menjadi:
//C++
//C++
//C++
//C++
