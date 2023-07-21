#ifndef FONKSIYONLAR_H
#define FONKSIYONLAR_H
#include "tamzamanli.h"
#include "yarizamanli.h"
#include <fstream>
using namespace std;

void dosyaOku(string fileName,vector<Calisan*>&liste,vector<Calisan*>::iterator &ptr){
   ifstream file(fileName,ios::in);
    string a,b,c,d,e;
    int f;
    if(!file){
        cout<<"Dosya acilmadi"<<endl;
    }
    else{
        int count=0;
        while(file>>a>>b>>c>>d>>e){
            file>>f;
            if(f==0){
                cout<<f<<endl;
                liste.push_back(new Tamzamanli(a,b,c,d,e));
                
                // file.seekg((count+2)*sizeof(Yarizamanli),ios::cur);
            }
            else{
                cout<<f<<endl;
                liste.push_back(new Yarizamanli(a,b,c,d,e,f));
            }
            count++;
                // file.ignore();
                // f=1;
        }
        cout<<count<<endl;
    }
ptr = liste.begin();
}
void dosyayaYazY(string fileName,Yarizamanli y ){
     ofstream file(fileName,ios::app);
    
    if(!file){
        cout<<"Dosya acilmadi"<<endl;
    }
    else{
     
            file<<y.getAd()<<" "<<y.getSoyad()<<" "<<y.getTelefonNumarasi()<<" "<<y.getEposta()<< " "<< y.getKimlikNo()<< " " <<y.getCalistigiGun()<<endl;
        
        
        
    }
}
void dosyayaYazT(string fileName,Tamzamanli t ){
     fstream file(fileName,ios::app);
    
    if(!file){
        cout<<"Dosya acilmadi"<<endl;       
        
    }
     file<<t.getAd()<<" "<<t.getSoyad()<<" "<<t.getTelefonNumarasi()<<" "<<t.getEposta()<< " "<< t.getKimlikNo() <<" "<<"0" <<endl;
}




#endif
