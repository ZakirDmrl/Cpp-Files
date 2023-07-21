#include "fonksiyonlar.h"
int main(){
Yarizamanli y("ali","star","12345678","alistar@3123","123534425432",20);
Yarizamanli y2("alisdas","swdtar","1232345678","alistar@3123","123534425432",30);

Tamzamanli t("cevat","tavuk","5432453","cavahtavuk@3123","21421313123");
Tamzamanli t2("cedsadvat","tavusdask","5432453","cavahtavuk@3123","21421313123");

vector<Calisan*>liste; // * koyarak alt sınıfları tek vektörde
vector<Calisan*>::iterator ptr;
string fileName = "final.txt";

dosyayaYazY(fileName,y);
dosyayaYazY(fileName,y2);
dosyayaYazT(fileName,t2);
dosyayaYazT(fileName,t);
dosyayaYazY(fileName,y2);

dosyaOku(fileName,liste,ptr);
for(int i = 0; i<int(liste.size());i++){
    (*(ptr+i))->yazdir();
}




    return 0;
}
