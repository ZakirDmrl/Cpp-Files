#include <iostream>
#include <vector>//vektörleri kullanabilmek için
#include <time.h>//randomun çalışması için 
#include <algorithm>//vektörleri sıralama fonksiyonu için 
using namespace std;

int main(){
    cout<<"******ARRAYLERDE KUCUKTEN BUYUGE SIRALAMA******"<<endl;
    cout<<"***********************************************"<<endl;
    int satir,sutun;
    int i,j;
    cout << "Boyut bilgini girin : ";
    cin>>satir >>sutun;
    int array[satir][sutun];
    int sayi;
    srand(time(NULL));
    //deger atama
    for(i=0;i<=satir;i++){
        for(j=0;j<=sutun;j++){
            sayi = (rand()%100)+1;    
            array[i][j]=sayi;
         }
    }
    // ilk halini yazdirma
    cout<<"Siralanmadan onceki hali:"<<endl;
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;
    int temp = 0;
    for(int k=0;k<=sutun;k++)
    {
        for(i=0;i<satir;i++){
            for(j=0;j<sutun;j++){
            if(array[i][j] != array[i][sutun-1]){
                if(array[i][j]>array[i][j+1]){
                    
                    temp = array[i][j];
                    array[i][j] = array[i][j+1];
                    array[i][j+1] = temp;
            
                    
                }
               // cout<<array[i][j]<<" ";   //ADIMLAR İÇİN
            }
            else{
                //cout<<array[i][j]<<" ";   //ADIMLAR İÇİN
            }
             
            }
            //cout<<endl; //ADIMLAR İÇİN
        }
       // cout<<"----------"<<endl; //ADIMLAR İÇİN
    }
cout<<"----SON HALI----"<<endl;
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
cout<<"******VEKTORLERDE KUCUKTEN BUYUGE SIRALAMA******"<<endl;
cout<<"************************************************"<<endl;
cout<<"1 BOYUTLU VEKTORLER ICIN"<<endl;
int boyut,temp2;
cout<<"Vektorun buyutunu giriniz : ";
cin>> boyut;
vector<int>v;
// vector<vector<int>>::iterator it;// vektor iteratorü tanımı
// for(it=v.begin();it!=v.end();it++){
//     cout<< *it <<" ";
// }
cout<<"Vektorun siralanmadan onceki hali:"<<endl;
for(int i = 0; i < boyut; i++){
    v.push_back((rand()%100)+1);
    cout<<v[i]<<" ";
}
for(int j = 0 ; j<boyut ; j++) // İşlemi garantilemek için
    for(int i = 0 ; i<boyut ; i++){
        if(v[i] != v[i+1]){
            if(v[i]>v[i+1]){
                            
            temp2 =v[i];
            v[i] = v[i+1];
            v[i+1] = temp2;
            }
        }
    }
cout<<"\nVektorun siralanmis hali"<<endl;

for(int i = 0; i < int(v.size()); i++){
    cout<<v[i]<<" ";
}
cout<<"\n2 BOYUTLU VEKTORLER ICIN"<<endl;
int vsatir,vsutun;
vector<vector<int>>v; //iki boyutku bir vektor tanımı
for(int i = 0; i < boyut; i++){
    v.push_back((rand()%100)+1);
    cout<<v[i]<<" ";
}

    return 0;
}