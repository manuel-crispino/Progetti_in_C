#include <stdio.h>

;
void another(void);
int n = 1 ; 

  void array( int number[],int count){
    int sumOfElements;
    printf(" sum of elements before 0 = %d\n",sumOfElements);
     sumOfElements= 0 ;
    for(int i = 0 ; i < count;i++){
      printf("number %d\n",number[i]);
      sumOfElements += number[i];
    };
    printf("sum of elements is = %d\n", sumOfElements);
  }
int main (){
  int count = 0 ; 
  int numbers[5];
  int number;
    printf("ready %i \n", n);
    another();
    printf("start write numbers \n");
  while( count < 5 ){
      scanf("%d",&number);
      printf("adding %d to the array\n",number);
      numbers[count]= number;
      count++;   
  }
  array(numbers,count);


    return 0; 
};
