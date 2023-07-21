//  ｡☆✼★━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━★✼☆｡


#include "kitap.h"

#include "kitap.h"
    kitap::kitap(){};
    kitap::kitap(string ad1,string yazar1,unsigned int basimTarih1,unsigned int baski1,unsigned int fiyat1)
    {
        setKitapAd(ad1);
        setYazar(yazar1);
        setBasimTarihi(basimTarih1);
        setBaski(baski1);
        setFiyat(fiyat1);
    }
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           SETTER METODLARI    
    void kitap::setKitapAd(string ad1)
    {
        kitapAd =ad1;
    }
    void kitap::setYazar(string yazar1)
    {
        yazar = yazar1;
    }
    void kitap::setBasimTarihi(unsigned int basimTarihi1)
    {
        basimTarihi = basimTarihi1;
    }
    void kitap::setBaski(unsigned int baski1)
    {
        baski = baski1;
    }
    void kitap::setFiyat(unsigned int fiyat1)
    {
        fiyat = fiyat1;
    }
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           GETTER METODLARI        
    string kitap::getKitapAd(){return kitapAd;}
    string kitap::getYazar(){return yazar;}
    
    unsigned int kitap::getBasimTarihi(){return basimTarihi;}
    unsigned int kitap::getBaski(){return baski;}
    unsigned int kitap::getFiyat(){return fiyat;}
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           DİĞER METODLAR
        void kitap::yazdir()
        {
            cout<<"Kitap adi: "<<getKitapAd()
            <<"\nKitap yazari: "<<getYazar()
            <<"\nBasim tarihi: "<<getBasimTarihi()
            <<"\nBaski: "<<getBaski()
            <<"\nFiyat: "<<getFiyat()<<endl;
        }

