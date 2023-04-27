#include<iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
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
    
// cout<<"******VEKTORLERDE KUCUKTEN BUYUGE SIRALAMA******"<<endl;
// cout<<"************************************************"<<endl<<endl<<endl;
// int vsatir,vsutun;
// cout << "Boyut bilgini girin : ";
// cin>>vsatir >>vsutun;

// vector<vector<int>> v1(vsatir,vsutun);
// int sayac=0;
// int size = v1.size();
// cout<<"SIZE = "<<size;
// for(i=0;i<<size;i++){
//     if(sayac % vsutun == 0){
//         cout<<endl;
//         sayac=0;
//     }
//     sayi = (rand()%100)+1;
//     v1.at(v1[i]) = sayi;
//     cout<<v1.at(i);
//     sayac++;
// }
// cout<<endl;

    return 0;
}