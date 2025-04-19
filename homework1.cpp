#include <iostream>
using namespace std;
class banka
{
public:
string hesapismi;
int hesapbakiyesi;
};
int main(){
 
 
banka musteri1;
 
cout<<"Hesap isminizi giriniz=";
 
 
cin>>musteri1.hesapismi;
 
cout<<"Banka hesap isminiz="<<musteri1.hesapismi<<endl;
 
 
cout<<"Baslangic bakiyenizi giriniz=";
 
cin>>musteri1.hesapbakiyesi;
 
cout<<"Baslangic bakiyeniz="<<musteri1.hesapbakiyesi<<endl;
 
 
banka musteri2;
 
cout<<"2.Hesap isminizi giriniz=";
 
 
cin>>musteri2.hesapismi;
 
cout<<"2.Banka hesap isminiz="<<musteri2.hesapismi<<endl;
 
 
cout<<"2.Baslangic bakiyenizi giriniz=";
 
cin>>musteri2.hesapbakiyesi;
 
cout<<"2.Baslangic bakiyeniz="<<musteri2.hesapbakiyesi<<endl;
 
 
 
cout<<"Hangi hesabinizla islem yapmak istersiniz"<<endl;
 
cout<<"1.hesabinizla islem yapmak istiyorsaniz 1 digeriyle yapmak icin 2 tuslayin=";
 
 
int secim;
 
cin>>secim;
 
if(secim<0 || secim>2)
 
{
 
cout<<"Gecerli bir deger giriniz";
 
}
 
 
if(secim==1)
 
{
 
cout<<"Yapmak istediginiz islem nedir?"<<endl;
 
 
cout<<"1.Para Cekme"<<endl;
 
cout<<"2.Para Yatirma"<<endl;
 
cout<<"3.Bakiye kontrol etme"<<endl;
 
cout<<"4.Diger hesabiniza para aktarma"<<endl;
 
int secim2;
 
cout<<"Istediginiz islem=";
 
cin>>secim2;
 
if(secim2<0 || secim2>4)
 
{
 
cout<<"Gecersiz bir deger girdiniz";
 
}
 
if(secim2==1)
 
{
 
cout<<"Cekiceginiz miktar=";
 
int cek;
 
cin>>cek;
 
musteri1.hesapbakiyesi=musteri1.hesapbakiyesi-cek;
 
cout<<"Yeni bakiyeniz="<<musteri1.hesapbakiyesi;
 
}
 
 
if(secim2==2)
 
{
 
cout<<"Yatiricaginiz miktar=";
 
int yatir;
 
cin>>yatir;
 
 
musteri1.hesapbakiyesi=musteri1.hesapbakiyesi+yatir;
 
cout<<"Yeni bakiyeniz="<<musteri1.hesapbakiyesi;
 
}
 
if(secim2==3)
 
{
 
cout<<"Bakiyeniz="<<musteri1.hesapbakiyesi;
 
}
 
if(secim2==4)
 
{
 
cout<<"Ne kadar para gondermek istersiniz=";
 
int gonder;
 
cin>>gonder;
 
musteri1.hesapbakiyesi=musteri1.hesapbakiyesi-gonder;
 
musteri2.hesapbakiyesi=musteri2.hesapbakiyesi+gonder;
 
cout<<"Yeni bakiyeniz="<<musteri1.hesapbakiyesi<<endl;
 
cout<<"Diger hesabin yeni bakiyesi="<<musteri2.hesapbakiyesi;
 
}
 
}
 
 
if(secim==2)
 
{
 
cout<<"Yapmak istediginiz islem nedir?"<<endl;
 
 
cout<<"1.Para Cekme"<<endl;
 
cout<<"2.Para Yatirma"<<endl;
 
cout<<"3.Bakiye kontrol etme"<<endl;
 
cout<<"4.Diger hesabiniza para aktarma"<<endl;
 
int secim2;
 
cout<<"Istediginiz islem=";
 
cin>>secim2;
 
if(secim2<0 || secim2>4)
 
{
 
cout<<"Gecersiz bir deger girdiniz";
 
}
 
if(secim2==1)
 
{
 
cout<<"Cekiceginiz miktar=";
 
int cek;
 
cin>>cek;
 
musteri2.hesapbakiyesi=musteri2.hesapbakiyesi-cek;
 
cout<<"Yeni bakiyeniz="<<musteri2.hesapbakiyesi;
 
}
 
 
if(secim2==2)
 
{
 
cout<<"Yatiricaginiz miktar=";
 
int yatir;
 
cin>>yatir;
 
 
musteri2.hesapbakiyesi=musteri2.hesapbakiyesi+yatir;
 
cout<<"Yeni bakiyeniz="<<musteri2.hesapbakiyesi;
 
}
 
if(secim2==3)
 
{
 
cout<<"Bakiyeniz="<<musteri2.hesapbakiyesi;
 
}
 
if(secim2==4)
 
{
 
cout<<"Ne kadar para gondermek istersiniz=";
 
int gonder;
 
cin>>gonder;
 
musteri2.hesapbakiyesi=musteri2.hesapbakiyesi-gonder;
 
musteri1.hesapbakiyesi=musteri1.hesapbakiyesi+gonder;
 
cout<<"Yeni bakiyeniz="<<musteri2.hesapbakiyesi<<endl;
 
cout<<"Diger hesabin yeni bakiyesi="<<musteri1.hesapbakiyesi;
 
}
 
}
return 0;
}