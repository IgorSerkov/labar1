#include <iostream>
#include <locale>
using namespace std;
class book{
private:
    char *avtor,*nazvanie, *izdatelstvo;
    int god,kolv;
public:
    book(char *avtor_,char *nazvanie_,char *izdatelstvo_,int god_,int kolv_){
        avtor =avtor_ ;
         nazvanie= nazvanie_;
        izdatelstvo = izdatelstvo_;
        god = god_;
        kolv = kolv_;}
   void get (){
       cout<<avtor<<" "<<nazvanie<<" "<<avtor<<" "<<izdatelstvo<<" "<<god<<" "<<kolv<<" "<<endl;
   }
   void f1(){
   if(avtor=="avtor1"){
    get();}
   }
   void f2(){
   if(izdatelstvo=="izd1"){
    get();}
   }
    void f3(){
    if(god>1985){
    get();}
   }


};
int main(){
    book bookmas[5]{
    book("avtor1","book1","izd1",1980,60),
    book("avtor1","book2","izd1",1981,67),
    book("avtor2","book3","izd2",1989,61),
    book("avtor3","book4","izd3",1990,65),
    book("avtor4","book5","izd4",1982,63)
    };
    for (int i=0;i<5;i++){
        bookmas[i].get();
    }
    cout<<endl;
     for (int i=0;i<5;i++){
        bookmas[i].f1();
    }
        cout<<endl;
    for (int i=0;i<5;i++){
        bookmas[i].f2();
    }
    cout<<endl;
    for (int i=0;i<5;i++){
        bookmas[i].f3();
    }
return 0;
}
