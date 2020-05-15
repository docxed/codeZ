//ss
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(double on, double off){
  int exp;
  if((on >= 7.00 && on <= 8.30) && (off >= 16.00 && off <= 18.00)){
    exp = 1;
  }else if((on >= 8.31 && on <= 9.00) && (off >= 16.00 && off <= 18.00)){
    exp = 2;
  }else if((on >= 9.01 && on <= 12.00) && (off >= 16.00 && off <= 18.00)){
    exp = 3;
  }else if((on >= 7.00 && on <= 8.30) && (off > 12.00 && off < 16.00)){
    exp = 4;
  }else if((on >= 8.31 && on <= 9.00) && (off > 12.00 && off < 16.00)){
    exp = 5;
  }else if((on >= 9.01 && on <= 12.00) && (off > 12.00 && off < 16.00)){
    exp = 6;
  }else{
    exp = 7;
  }

  return exp;
}

int main(){

  
  int amount;
  scanf("%d", &amount);

  struct people{
    char name[1001];
    double on, off;
  } people[amount];

  int t1, t2, t3, t4, t5, t6, t7, back;
  t1 = t2 = t3 = t4 = t5 = t6 = t7 = 0;
  for(int i=0; i<amount; ++i){
    scanf("%s %lf %lf", people[i].name, &people[i].on, &people[i].off);
    back = count(people[i].on, people[i].off);
    if (back == 1){ ++t1;}
    else if (back == 2){ ++t2;}
    else if (back == 3){ ++t3;}
    else if (back == 4){ ++t4;}
    else if (back == 5){ ++t4;}
    else if (back == 6){ ++t6;}
    else{ ++t7;}
  }

  t1 == 0 ? printf("N -\n") : printf("N %d\n", t1); 
  t2 == 0 ? printf("L -\n") : printf("L %d\n", t2); 
  t3 == 0 ? printf("LM -\n") : printf("LM %d\n", t3); 
  t4 == 0 ? printf("LA -\n") : printf("LA %d\n", t4);
  t6 == 0 ? printf("A -\n") : printf("A %d\n", t6); 
  t7 == 0 ? printf("E -\n") : printf("E %d\n", t7);  


    return 0;
}