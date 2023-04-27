#include<iostream>

using namespace std;
void fonk1(){
    int a = 0 ;
    a++;
    cout <<"fonk1 :"<< a <<endl;
}
void fonk2(){
    static int a; // static variablelar program bitene kadar ölmez globalden önce localden sonra destuctorları çalışır. 
    a++;
    cout <<"fonk2 :"<< a <<endl;
}
void fonk3(){
    static int a; // isimlerinin aynı olması önemli değil derleyici ayrı ayrı işlem yapıyor
    a++;
    cout <<"fonk3 :"<< a <<endl;
} 
int main(){
fonk1(); // fonk1 her çalıştığında yeni bir a değeri ile gelir bu yüzden hep 1 yazar yani fonk bitiminde değişken ölür.
fonk1();
fonk1();
cout<<endl;
fonk2(); // fonk2 her çalıştığında a için ilk başta oluşturulan değişken kullanılır ve program bitiminde ölür.  
fonk2();
fonk2();
cout<<endl;
fonk3(); // değişkenin adı önemli olmayıp kendi içindeki a değeri ile program sonuna kadar işlemlerini gerçekleştir.
fonk3();
cout<<endl;
fonk2(); // fonk2 deki a değeri yazılır 








    return 0;
}