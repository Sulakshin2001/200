#include <stdio.h> 
#define TIL 9 
#define NUM 200 
#define STATES 3 
#define DO(n,x) {int i=0,_n=(n);for(;i<_n;++i){x;}} 
 
char array_[TIL];     
char* array = &array_[0]; 
 
int pow_(int n, int exp) { 
 int j = 1; 
 if (!exp) 
  return 1; 
 DO(exp,j*=n); 
 return j; 
} 
 
void arrprint(char *array) { 
 DO(TIL,    
  printf("%i", TIL-i); 
  if (array[TIL-i-1] == 1)  
   printf("+"); 
  if (array[TIL-i-1] == 2)  
   printf("-")) 
 printf("0\n"); 
 fflush(stdout); 
} 
 
long long decs(long long num) { 
 long long i; 
 for (i = 10; num/10; i*=10); 
 return i; 
} 
 
long long eq(char* array) { 
 long long prev = 0, cur = TIL; 
 char a = 1; 
 
 DO(TIL,  
  if (!array[TIL-1-i]) 
   cur = cur*decs(TIL-1-i)+TIL-1-i; 
  else { 
   prev += (a == 1 ? cur : -cur); 
   a = array[TIL-1-i]; cur = TIL-1-i; 
  }) 
 
 return (prev += (a == 1 ? cur : -cur)); 
} 
 
void state(char* array) { 
 DO(TIL,  
  if (array[i] >= 2)  
   array[i] = 0; 
  else { 
   array[i]++; 
   break; 
  }) 
} 
 
int cycle(int state_max) { 
 int cnt = 0; 
 
 DO(state_max,   
  if (eq(array) == NUM)  { 
   arrprint(array); 
   cnt++; 
  } 
  state(array)) 
 return cnt; 
} 
 
int main() 
{ 
 printf("\n_%d ways to get %d\n", cycle(pow_(STATES, TIL)), NUM); 
 return 0; 
}