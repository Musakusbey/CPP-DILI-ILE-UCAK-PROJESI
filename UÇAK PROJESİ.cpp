#include <iostream>
#include<math.h>

using namespace std;

/* h=5000metre 
   v0=405,5metre
   t=?
   g=9.81m/s^2
   Xmenzil=V0.t
   h=1/2gt2
   25,30,35km uzaklýktaki hedefler vurulacaktýr. Ýlk konumdan ne kadar uzak olmalýyýz? */
   
int main ()
 { 
    float       v0=405.5,h=5000,t,menzil,g=9.81,birincihedef,ikincihedef,ucuncuhedef;
      
      cout<<"Ucagin yerden yuksekligi: h=5000;"<<endl;

      cout<<"Ucagin hizi:v0=405.5"<<endl;
      
      cout<<"Yer cekimi ivmesi: g=9.81;"<<endl;
      
	    t = sqrt((2*h)/g); //sqrt karekok dýsýna çýkartýr  sqrt(144) -> 12
	 
    	menzil = v0*t;
      
      cout<<"Bombanin havada kalma suresi:"<<t<<endl;
      
      cout<<"Bombanin dusecegi mesafe:"<<menzil<<endl;
      
      cout<<"Hedeflenen 3 konumun sizden uzakliklari 25,30 ve 35km dir"<<endl;
      
      birincihedef=25000-menzil;
      
      ikincihedef=30000-menzil;
      
      ucuncuhedef=35000-menzil;
      
      cout<<"Birinci hedefi vurmak icin:"<<birincihedef<<"m ilerleyip atesleme yapmalisiniz:"<<endl;
      
      cout<<"Ýkinci hedefi vurmak icin"<<ikincihedef<<"m ilerleip atesleme yapmalisiniz:"<<endl;
      
      cout<<"Ucuncu hedefi vurmak icin"<<ucuncuhedef<<"m ilerleyip atesleme yapmalisiniz:"<<endl;
      
	return 0;
 }
