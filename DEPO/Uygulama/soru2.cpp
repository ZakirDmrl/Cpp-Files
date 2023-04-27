#include <iostream>
using namespace std;

class Hamburger{
public:
    Hamburger(){} // default constractor
    Hamburger(char,int);
    char getAd(){return menuAdi;}
    int getBoyut(){return menuBoyutu;}
    float getFiyati(){return menuFiyati;}
    float menuAl(char,int);

private:
char menuAdi;
int menuBoyutu;
float menuFiyati;
};
Hamburger::Hamburger(char ad, int boyut){
    menuAdi = ad;
    menuBoyutu = boyut;
    menuFiyati = menuAl(ad,boyut);
}
float Hamburger::menuAl(char ad,int boyut){
    switch (boyut){
        case 1:
            if(ad == 'A')
                return 15.0;
                
            else
                return 20.0;
            
            break;
        case 2:
            if(ad == 'B')
                return 27.0;
            else
                return 22.0;
            
            break;
        default:
            break;
    }
    return 0;
}

int main(){
Hamburger h1('A',1);
Hamburger h2('A',2);

Hamburger h3('B',1);

Hamburger h4('B',2);
cout<<h1.getAd()<<" menüsü"<<h1.getBoyut() <<" boyutu "<<h1.getFiyati()<<" TL."<<endl;
cout<<h2.getAd()<<" menüsü"<<h2.getBoyut() <<" boyutu "<<h2.getFiyati()<<" TL."<<endl;
cout<<h3.getAd()<<" menüsü"<<h3.getBoyut() <<" boyutu "<<h3.getFiyati()<<" TL."<<endl;
cout<<h4.getAd()<<" menüsü"<<h4.getBoyut() <<" boyutu "<<h4.getFiyati()<<" TL."<<endl;


    return 0;
}