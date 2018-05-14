#include <iostream>
#include <cstdlib>
struct Date{
    int year;
    int month;
    int day;
};

i
  } else {
      std::cout << "tarin uni 12 amis";
      exit(0);
  }
   std::cout << "Amsativ   ";
  std::cin >> dy;
  if( dy <= days[mt] && dy > 0){
     first.day = dy; 
  } else {
      std::cout << "Oreri qanak@ sxal e";
      exit(0);
  }
  std::cout << first.year << first.month << first.day;
  
  
  
  Date sec;//2nd date
   std::cout << "Taretiv2  ";
  std::cin >> yr;
  if( 1980 < yr &&  2100 > yr && yr <=  first.year){
  sec.year=yr;
  } else {
      std::cout << "@ntreq urish taretiv";
      exit(0);
  }
  std::cout << "Amis2   ";
  std::cin >> mt;
  if( 0 < mt && 13 > mt ){
     sec.month = mt; 
  } else {
      std::cout << "tarin uni 12 amis";
      exit(0);
  }
   std::cout << "Amsativ   ";
  std::cin >> dy;
  int dcont;
  int dcont1;
  if( dy <= days[mt] && dy > 0){
     sec.day = dy; 
  } else {
      std::cout << "Oreri qanak@ sxal e";
      exit(0);
  }
    
    if(sec.month > first.month && sec.day > first.day){
        for(int i = first.month - 1 ; i <= sec.month; ++i) {
            dcont += days[i];
        }
        std::cout << "Oreri qanak@= " << (sec.year - first.year) * 365 + dcont + (sec.day - first.day);
    }else if(sec.year > first.year && sec.month < first.month && sec.day > first.day ){
         for(int i = first.month - 1 ; i < 12; ++i){
             dcont += days[i];
         }
         for
        std::
    }
    
    
    
    
       std::cout << sec.year << sec.month << sec.day;
 return 0;  
}
