#include <iostream>
#include <string>
using namespace std;
//Herhangi bir cümledeki kelimelerin ilk harfleri Büyük harflere çevir.(var oaln üzerinde)(upper)
void stringWordsUpper(string s1){
    char c1 =toupper(s1[0]);
    s1.insert(1,1,c1);
    int size=0;
    char c;
    c = s1[0];
    while(c != '\0'){
        size++;
        c = s1[size];

    }
    
    for(int i = 0; i<size;i++){
        if(s1[i]==' '){
            cout<<char(toupper(s1[i+1]));
        }
        else{
            cout<<s1[i+1];
        }
    }
    cout<<endl;
}
//Bir cümlede bulunan bir kelimelerin sayısını ve harf sayısını bulur.
void how_Many_Word_in_String(string s2){
    int word = 1;
    int size=0;
    char *c = &s2[0];
    while(*c != '\0'){
        if(*c == ' ' ){
            word++;
        }
        size++;
        c = &s2[size];
        
    }
    cout<<"Harf Sayisi : "<<size-(word-1)<< " Kelime sayisi : "<<word<<endl;
}
//Bir stringi ters çevirir( var olan üzerinde işlem yaparak).
// void reverseWord(string s3){
    
// }
int main(){
    string s1,s2;
    cout<<"SORU 1\n"<<"Cumle girin: ";
    getline(cin,s1);
    cout<<s1<<endl;
    stringWordsUpper(s1);
    cout<<"SORU 2\n"<<"Cumle girin: ";
    getline(cin,s2);
    cout<<s2<<endl;
    how_Many_Word_in_String(s2);
    // cout<<"SORU 3\n"<<"Cumle girin: ";
    // getline(cin,s3);
    // cout<<s3<<endl;
    // cout<<s3.erase(3,5)<<endl; // 3. indirsten itibaten 5 indisi siler.
    // cout<<s3.insert(3,5,'a')<<endl; // 3.indisten itibaren 5 tane 5 ekler.
    // cout<<s3.append("aaaa")<<endl;  // sonuna aaaa ekler.
    // s3.push_back('b'); // sonuna sadece 1 karakter ekler ( bu örnekte b eklemiş)
    // cout<<s3<<endl;
    // s3.replace(5,3,s1); // 5. indisten itibaren 3 eleman yerine s1 i yaziyor ama s1 in alanı 3 den büyükse fazlalıkla beraber yaziyor sonuç olarakta dizin uzuyor.
    // cout<<s3<<endl;
    return 0;
}
