/***************************************
* EECS2031 – Lab3 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/

#include <stdio.h>

float fun_IF (int, char, float);
float fun_II (int, char, int);
float fun_FF (float, char, float);

int main() {
  float a, b, fun1, fun2, fun3;
  char operator; 
  
  printf("Enter operand_1 operator operand_2 separated by blanks ");
  scanf("%f %c %f", &a, &operator, &b); 
  
  while (a != -1 && b != -1){
    fun1 = fun_IF((int)a,operator,b);
    fun2 = fun_II((int)a,operator,(int)b);
    fun3 = fun_FF(a ,operator,b);

    printf("Your input '%f %c %f' results in %.6f (fun_IF) and %.6f (funII) and %.6f (fun_FF) \n", a, operator, b, fun1, fun2, fun3);
 

    printf("Enter operand_1 operator operand_2 separated by blanks ");
    scanf("%f %c %f", &a, &operator, &b); 
  }

  return 0;
}

float fun_IF (int a, char c, float b){
  float num;  
  if (c == '+'){
    num = a + b;
  }else if (c == '-'){
    num = a - b;
  }else if (c == '/'){
    num = a / b;
  }else if (c == '*'){
    num = a * b;
  } 
  return num; 
}

float fun_II (int a, char c, int b){
  float num;  
  if (c == '+'){
    num = a + b;
  }else if (c == '-'){
    num = a - b;
  }else if (c == '/'){
    num = a / b;
  }else if (c == '*'){
    num = a * b;
  } 
  return num; 
}

float fun_FF (float a, char c, float b){
  float num;  
  if (c == '+'){
    num = a + b;
  }else if (c == '-'){
    num = a - b;
  }else if (c == '/'){
    num = a / b;
  }else if (c == '*'){
    num = a * b;
  } 
  return num; 
}

