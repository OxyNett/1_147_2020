#include <iostream>
using namespace std;

class Telephone
{
public:
 void changeNumber(long number){
     if (number>0){
         this -> number = number;
     }
 }
 void display(){
     cout << region << "\t" << number << endl;
 }
 Telephone(string region, long number){
     this -> region = region;
     if (number > 0){
         this -> number = number;
     }
     else{
         this -> number = 0;
         }
 }
 private:
  long number;
  string region;
};

int main(){
   Telephone *my_telephone = new Telephone("Russia", 222222);
   Telephone *second_telephone = new Telephone("USA", -454545);
   my_telephone -> display();
   my_telephone -> changeNumber(554433);
   my_telephone -> display();
   my_telephone -> changeNumber(-333333);
   my_telephone -> display();
   second_telephone -> display();
    return 0;
}