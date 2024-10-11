//Berapa kalikah C++ akan tercetak?
int counter = 1;
while (counter <= 6) {
    cout << "C++" << endl;
    counter += 2;
}
// c++ yang tercetak adalah 3 karena variabel counter diinisialisasi dengan nilai 1 dan loop while akan terus berjalan selama counter kurang dari atau sama dengan 6. Mari kita analisis langkah-langkahnya:
//Iterasi Pertama: counter = 1 (cetak "C++", kemudian counter menjadi 3)
//Iterasi Kedua: counter = 3 (cetak "C++", kemudian counter menjadi 5)
//Iterasi Ketiga: counter = 5 (cetak "C++", kemudian counter menjadi 7)
//Kondisi Berhenti: Sekarang counter = 7, sehingga loop berhenti.
//Output program akan menjadi:
//C++
//C++
//C++
