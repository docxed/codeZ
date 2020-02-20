#include <stdio.h>
 
int main(){
  float matrix[3][3];
  int rows, cols;
  for (rows=0; rows<3; ++rows){
    for (cols=0; cols<3; ++cols){
      scanf("%f", &matrix[rows][cols]);
    }
  }
  if (matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2] && matrix[0][1]+matrix[0][2]+matrix[1][0]+matrix[1][2]+matrix[2][0]+matrix[2][1] == 0) printf("This is a scalar matrix");
  else printf("This is not a scalar matrix");
  return 0;
}