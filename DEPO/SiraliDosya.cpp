#include <iostream>
using std ::cout;
using std ::cin;
using std ::ios;
using std ::cerr;
using std ::endl;

#include <fstream>

using std::ifstream;
#include <iomanip>

using std::setiosflags;
using std::resetiosflags;
using std::setw;
using std::setprecision;

#include <cstdlib>
enum RequestType { ZERO_BALANCE = 1 , CREDIT_BALANCE,
                    DEBIT_BALANCE, END};
int getRequest();
bool shouldDisplay(int, double);
void outputLine (int , const char * const , double);

int main(){
    ifstream inClientFile("clients.dat" , ios::in);
    if( !inClientFile ){
        cerr<<"File could not be opened"<< endl;
        exit(1);
    }
    int account;
    char name[30];
    double balance;

    cout<< "Enter requrst\n"
        <<"1 - List accounts with zero balances\n"
        <<"2 - List acounts with credit balances "
        <<"3 - List accounts with debit balances"
        <<"4 - Ent of run"
        << setiosflags( ios::fixed | ios::showpoint );
    int request = getRequest();

    while ( request != END ){
        switch (request)
        {
        case ZERO_BALANCE: 
            cout << "\nAccounts with zero balances:\n";
            break;
        case CREDIT_BALANCE:
            cout << "\nAccounts with credit balances:\n";
            break;
        case DEBIT_BALANCE:
            cout << "\nAccounts with debit balances:\n";
            break;
        default:
            break;
        }
    }
    inClientFile >> account >> name >> balance;
    while ( !inClientFile.eof()){
        if( shouldDisplay( request , balance))
        outputLine(account, name , balance);
    }   
    inClientFile >> account >> name >> balance;
    inClientFile.clear();
    inClientFile.seekg(0);
    request = getRequest();
    cout<< "End of run."<< endl;
    return 0;
}
int getRequest() 
{ 
int request; 
do { 
cout << "\n? "; 
cin >> request; 
} while( request < ZERO_BALANCE && request > END ); 

return request; 
} 
bool shouldDisplay( int type, double balance ) 
{ 
    if ( type == CREDIT_BALANCE && balance < 0 ) 
    return true; 
    if ( type == DEBIT_BALANCE && balance > 0 ) 
    return true; 

    if ( type == ZERO_BALANCE && balance == 0 ) 
    return true;
return false;
}
void outputLine( int acct, const char * const name, double bal ) 
{ 
cout << setiosflags( ios::left ) << setw( 10 ) << acct 
<< setw( 13 ) << name << setw( 7 ) << setprecision( 2 ) 
<< resetiosflags( ios::left ) 
<< bal << '\n'; 
}
