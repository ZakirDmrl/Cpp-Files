//  ｡☆✼★━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━★✼☆｡


#include"musteri.h"

    
    musteri::musteri(){}
    musteri::musteri(string kisiad, string kisisoyad,unsigned int id,string mail,string pass,unsigned int alinanKitapSayisi1,unsigned int alinanKitabinKalanGunu1,unsigned int puan1,unsigned int kitapAlimTarihi1,unsigned int kitapSonTeslimtarihi1,unsigned int uyeOlmaTarihi1,unsigned int uyeKalinanGun1)
    {
        setKisiAd(kisiad);
        setKisiSoyAd(kisisoyad);
        setKisiID(id);
        setMail(mail);
        setPassword(password);
        setalinanKitabinKalanGunu(alinanKitapSayisi1);
        setalinanKitabinKalanGunu(alinanKitabinKalanGunu1);
        setPuan(puan1);
        setkitapAlimTarihi(kitapAlimTarihi1);
        setkitapSonTeslimtarihi(kitapSonTeslimtarihi1);
        setuyeOlmaTarihi(uyeOlmaTarihi1);
        setuyeKalinanGun(uyeKalinanGun1);
    }
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           SETTER METODLARI    
    void musteri::setalinanKitapSayisi(unsigned int alinanKitapSayisi1)
    {
        alinanKitapSayisi = alinanKitapSayisi1;
    }
    void musteri::setalinanKitabinKalanGunu(unsigned int alinanKitabinKalanGunu1)
    {
        alinanKitabinKalanGunu = alinanKitabinKalanGunu1;
    }
    void musteri::setPuan(unsigned int puan1)
    {
        puan = puan1;
    }
    void musteri::setkitapAlimTarihi(unsigned int kitapAlimTarihi1)
    {
        kitapAlimTarihi = kitapAlimTarihi1;
    }
    void musteri::setkitapSonTeslimtarihi(unsigned int kitapSonTeslimtarihi1)
    {
        kitapSonTeslimtarihi = kitapSonTeslimtarihi1;
    }
    void musteri::setuyeOlmaTarihi(unsigned int uyeOlmaTarihi1)
    {
        uyeOlmaTarihi = uyeOlmaTarihi1;
    }
    void musteri::setuyeKalinanGun(unsigned int uyeKalinanGun1)
    {
        uyeKalinanGun = uyeKalinanGun1;
    }
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           SETTER METODLARI    
    unsigned int musteri::getAlinanKitapSayisi(){return alinanKitapSayisi;}
    unsigned int musteri::getAlinanKitabinKalanGunu(){return alinanKitabinKalanGunu;}
    unsigned int musteri::getPuan(){return puan;}
    unsigned int musteri::getKitapAlimTarihi(){return kitapAlimTarihi;}
    unsigned int musteri::getKitapSonTeslimtarihi(){return kitapSonTeslimtarihi;}
    unsigned int musteri::getUyeOlmaTarihi(){return uyeOlmaTarihi;}
    unsigned int musteri::getUyeKalinanGun(){return uyeKalinanGun;}
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           DİĞER METODLAR
	   void musteri::yazdir(){}
