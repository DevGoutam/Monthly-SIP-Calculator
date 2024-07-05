#include <iostream>
using namespace std;

double SipCalculator( double anualinterestrate, double monthlyinvestment, int years){
    double monthlyinterestrate = anualinterestrate/12/100;
  int totalmonthes = years*12;
      double total = 0;
      for(int i=0; i<totalmonthes; i++){
        total = (total + monthlyinvestment)*(1+monthlyinterestrate);
      }
      return total;
}
 int main(){
  double anualinterestrate ;
  cout<<"Enter anualinterestrate: "<<endl;
cin>>anualinterestrate;

double monthlyinvestment;
cout<<"Enter mothlyinvestment: "<<endl;
cin>> monthlyinvestment;

int years;
cout<<"Enter years: "<<endl;
cin>> years;

    double siplelo = SipCalculator(anualinterestrate, monthlyinvestment, years);
    cout<<siplelo<<endl;
 }