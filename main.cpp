#include <iostream>

using namespace std;

int main(){
  char choice;
  cout <<"--GOES Launcher 0.1 (Alpha)--\n\n"
       <<"(1) Oyunlar\n"
       <<"(2) Plartformlar\n"
       <<"(3) Ayarlar\n"
       <<"(Q) Çıkış\n\n";
  cout <<"Seçim = ";
  cin  >> choice;
switch (choice){
  case '1':printf("Oyunlar");break;
  case '2':printf("Plartformlar");break;
  case '3':printf("Ayarlar");break;
  case 'Q':case 'q':printf("Çıkış");break;
  default:printf("hata");break; 
}
return 0;

}

