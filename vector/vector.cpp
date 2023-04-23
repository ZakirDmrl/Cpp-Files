#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int ogrenci = 5;
    int dersler = 5;
    int top = 0;
    float ort = 1;

    // vector<vector<int>> donem(ogrenci, vector<int>(dersler, 0));

    vector<vector<int>> donem
    {
        {78, 83, 82,89,96},
        {95, 85, 64,74,87},
        {40, 58, 74,48,64},
        {87, 85, 96,64,87},
        {74, 85, 95,85,78}
    };

    for (int i = 0; i < ogrenci; i++)
    {
        for (int j = 0; j < dersler; j++)
        {
            cout << donem[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int j = 0; j < dersler; j++)
    {
        for (int i = 0; i < ogrenci; i++)
        {
            top += donem[i][j];
        }
        ort = top / 5;
        if (j == 0)  cout << "BIM101 dersinin ortalamasi: " << ort;
        if (j == 1)  cout << "MAT115 dersinin ortalamasi: " << ort;
        if (j == 2)  cout << "TUR101 dersinin ortalamasi: " << ort;
        if (j == 3)  cout << "BIM103 dersinin ortalamasi: " << ort;
        if (j == 4)  cout << "FIZ105 dersinin ortalamasi: " << ort;

        top = 0;
        ort = 1;
        cout << endl;
    }

    return 0;
}