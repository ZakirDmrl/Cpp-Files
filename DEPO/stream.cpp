
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int n = 15;
int main(){
	//�ntegral Stream Taban�:
cout<< hex<<n<<endl; //Hexadicimal
cout<< dec<<n<<endl; //dicimal
cout<< oct <<n<<endl; //octal
cout << setbase(8)<<n<<endl;

float a = 2.324345;
cout << setprecision(3)<< a<< endl;

Alan Geni�li�i(setw,width)
int w = 4;
char string[10];
cout<< "Enter a sentence:\n";
cin.width(5);
while(cin>>string){
	cout.width(w++);
	cout<< string<<endl;
	cin.width(5);
}

Stream Format Durumlar�(setf,unseft,flags)
setf-Bayraklar� or(|) ile birle�tirir.
unsetf-Bayraklar� s�f�rlar(yap�lan ayarlamalar� geri al�r)
setiosflags- bayrak ayarlar�n� yapmak i�in parametrele�mi� stream manipulat�r�)
resetiosflags- parametrele�tirilmi� stream manipat�r� = unsetf
showpoint bir ondal�kli say�n�n ondal�kl� k�sm�n�n s�f�rlar�yla beraber yaz�lmas�n� sa�lar.
cout.setf(ios::showpoint);
float a=79;
cout<< a<<endl;;//79.0000
internal say�lar�n i�areti sola dayal�
say�lar sa�a dayal� araya gelen bo�lular doldurma karakteri ile doldurulur.

static veri �ye ios::adjustfield(left right ve internal bayraklar�n� kapsar.
internal kullan�l�rsa setf'ye ikinci de�i�ken olmal�.
EX) cout.setf(ios::left,ios::adjustfield);
int x = 12345;
cout<<">Default is right justified:\n"
	<< setw(10) << x << "\n\nUSING MEMBER FUNCTIONS"
	<< "\nUse setf to set ios::left:\n"<< setw(10);
	cout.setf( ios::left, ios::adjustfield );
	cout<< x << "\nUse unsetf to restore default:�\n";
	cout.unsetf(ios::left);
	cout<< setw(10) << x
		<<"\n\nUSING PARAMETERIZED STREAM MANIPULATORS"
		<< "\nUse resetiosflags to restore default:\n"
		<< setw(10) << resetiosflags( ios::left )
		<< x << endl;
setfill doldurma karakteri ayarlamak i�in:
int x = 10000;
cout<< x << " printed as int  right and left justified\n"
	<<"and as hex with internal justificition.\n"
	<<"Using the defualt pad character (space):\n";
cout.setf( ios::showbase);
cout<< setw( 10 )<< x <<endl;
cout.setf( ios::left, ios::adjustfield);
cout<< setw(10) << hex << x;

cout<< "\n\nUsing various padding characters:\n";
cout.setf( ios::right, ios::adjustfield);
cout.fill('*');
cout<< setw(10)<< dec<< x <<endl;
cout.setf(ios::left, ios::adjustfield);
cout<< setw(10)<< setfill('%')<< x <<endl;
cout.setf(ios::internal, ios::adjustfield);
cout<< setw(10) << setfill('^') << hex << x <<endl;
basefield-adjustfield gibi ama varsay�lan stream ��kar�mlar� girilen forma ba�l�d�r ex) 0x.. 16l�k 0.. 8l�k gibi 
scientific- ondal�kl� say� bilimsel g�sterilim bi�iminde yazd�r�l�r.
floatfield ios::scientific ve fixed i kapsar(setf i�inde adjustfield ve basefield gibi kullan�l�r.
ex)cout.setf(ios::scientific, ios::floatfield); gibi
  cout.setf(0, ios::floatfield) kayan noktal� say�lar�n varsay�lan ��k�� �zelliklerine geri d�nmeyi sa�lar.
double x = .001234567, y= 1.946e9;
cout<< "Display in default format:\n"
	<< x << '\t' << y <<endl;
cout.setf( ios::scientific, ios::floatfield);
cout<< "Displayed in scientific format:\n"
	<< x << '\t' << y <<endl;
cout.unsetf( ios::scientific );
cout<< " Displayed in default format after unsetf:\n"
	<< x << '\t' << y <<endl;
cout.setf( ios::fixed, ios::floatfield);
cout << "Displayed in fixed format:\n"
	<< x << '\t' << y <<endl;

uppercase b�y�k harf

TEMPLATE
template< class T > 
void printArray( const T *array, const int count ) // T t�r de�i�keni T'nin t�r� bulunuyor 
ve fonksiyonun i�inde yerine konuyor.

{
	for ( int i=0 ;i<count; i++)
		cout<< array[i] << " ";
		
	cout<< endl;
}
*/	
return 0;
}
