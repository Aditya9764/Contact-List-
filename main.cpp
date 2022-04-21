// including header file 
#include<iostream>
#include<conio.h>
using namespace std ; 

// Globle Variable ;  
// FirstName = Fname LastName = Lname 
string fname , lname , phone_num  ; 

// function 
void  addContact() ;
void searchContact() ;
void    help () ;   
void self_exit() ;
bool check_digts(string ) ;
bool check_number(string) ;


int main()
{
  short int choice ;
  system ("cls") ;
  system("color 0A ")  ;
  cout<<" \n\n\n\t\t\t contact manegment " ;
  cout<<" \n\n\t1. Add contact\n\t2. search contact\n\t3. Help\n\t4 Exit\n\t> " ;
  cin>>choice ;

  switch(choice)
  {
     case 1 :
       addContact() ;
     break ;

     case 2 :
     searchContact() ;
     break ;

     case 3 :
       help () ;
     break ; 

     case 4 :
      self_exit() ;
      break ;
    
    default :
      cout<<"\n\n\tInvalid Input  " ;
      cout<<"\n\tPress any key to continue.....  " ;

     getch() ;
     main() ;
  }
  
  
  
  
  return 0 ;
  
}

void self_exit() 
{
  system("cls ") ;
cout<<"\n\n\n\t\tThanks fo using !" ;
exit(1) ;
}

void help( ) 
{
 cout<<"this display Help " ; 
}
void addContact() 
{
  system("cls") ;
  cout<<"\n\n\tEnter the First Name " ;
  cin>>fname ;
  cout<<"\n\tEnter the Last  Name" ;
  cin>>lname ;
  cout<<"\n\tEnter 10 Digit Phone Number  " ; 
  cin>>phone_num ;

  if(check_digts(phone_num)==true)
  {
    if(check_number(phone_num) == true)
    {

    }
  }
  else 
  {
    cout<< "\n\tA Phone Number must Contain 10 Digits. " ; 
  }

}
void searchContact() 
{

}

bool check_digts(string x)
{
  if(x.length() == 10 )
  return true ;
  else 
  return false ;
}

bool check_number(string x )
{
  bool check = true ;
}