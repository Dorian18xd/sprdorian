#include <iostream>

using namespace std;

double metry(double n)
{
   return n*3.28084;
}

double mile(double n)
{
   return n/0.621371;
}

int main()
{
   int opcja;
   double n;
   cout<<"Wybierz opcje: (wcisnij 1 lub 2 i zatwierdz enterem)"<< endl<<"1. metry na stopy angielskie"<<endl<<"2. kilometry na mile angielskie"<<endl;
   cin>>opcja;
   switch(opcja)
   {
   case 1:
       system("cls");
       cout<<"Podaj wartosc w metrach: ";
       cin>>n;
       cout<<"Po przeliczeniu na stopy angielskie: " << metry(n) << endl;
       break;
       
   case 2:
       system("cls");
       cout<<"Podaj wartosc w kilometrach: ";
       cin>>n;
       cout<<"Po przeliczeniu na mile angielskie: "<<mile(n)<<endl;
       break;
       
   default:
       system("cls");
       cout<<"Wybrano nieprawidlowa opcje" << endl;
       break;
}
}

