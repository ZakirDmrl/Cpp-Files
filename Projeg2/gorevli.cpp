//  ｡☆✼★━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━★✼☆｡


#include "gorevli.h"

    gorevli::gorevli(){}
    gorevli::gorevli(string ad,string soyad,unsigned int id,string mail,string sifre,unsigned int iseGirisTarihi1,unsigned int maas1,unsigned int haftalikIzinGunleri1[2],int yapilanYillikIzinSayisi1,string u)
    {
        setKisiAd(ad);
        setKisiSoyAd(soyad);
        setKisiID(id);
        setMail(mail);
        setPassword(sifre);
        setIseGirisTarihi(iseGirisTarihi1);
        setHaftalikIzinGunleri(haftalikIzinGunleri1);//pointer bu haliyle, biz ikinci indisi veya iki elemanı aynı anda gönderdik.
        setKalanYillikIzinSayisi(yapilanYillikIzinSayisi1);
        setMaas(maas1);
        setUnvan(u);
    }
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           SETTER METODLARI    
    void gorevli::setUnvan(string u)
    {
        unvan = u;
    }
    void gorevli::setIseGirisTarihi(unsigned int iseGirisTarihi1)
    {
        iseGirisTarihi = iseGirisTarihi1;
    }
    void gorevli::setMaas(unsigned int maas1)
    {
        maas = maas1;
    }
    void gorevli::setHaftalikIzinGunleri(unsigned int haftalikIzinGunleri1[2])
    {
        for(int i = 0 ; i < 2 ; i++)
        {
            haftalikIzinGunleri[i] = haftalikIzinGunleri1[i];
        }
    }
    void gorevli::setKalanYillikIzinSayisi(int yapilanYillikIzinSayisi1)
    {
        kalanYillikIzinSayisi = 30 - yapilanYillikIzinSayisi1;
    }
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           GETTER METODLARI
    string gorevli::getUnvan(){return unvan;}
    
    unsigned int gorevli::getIseGirisTarihi(){return iseGirisTarihi;}
    unsigned int gorevli::getMaas(){return maas;}
    unsigned int gorevli::getHaftalikIzinGunleri(){return haftalikIzinGunleri[2];}//ama indis döndürüyor bırak dondursun}
   
    int gorevli::getKalanYillikIzinSayisi(){return kalanYillikIzinSayisi;}
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           DİĞER METODLAR
        void gorevli::yazdir(){}
