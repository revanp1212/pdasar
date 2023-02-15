#include <iostream>

using namespace std;

int main()
{
    string nama;
    int umur;
    char jk;

    cout << "siapa namamu?" << endl;
    cout << "Jawab :";
    //cin >> nama;
    getline (cin, nama);

    cout << "Berapa umurmu?" << endl;
    cout << "Jawab :";
    cin >> jk;

    cout << "Kamu laki-laki atau perempuan (L/P)" <<endl;
    cout << "jawab :";
    cin >> jk;

    cout << "Salam kenal!" <<nama << "Anda berusia" << umur;
    cout << "dan Anda berjenis kelamin" << jk;
    return 0;
}
