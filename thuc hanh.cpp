#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang :"); 
	scanf("%d",&n);
	int  numbers[n];
	  for (int i = 0; i < n; i++) {
    printf("numbers [%d]=",i);
    scanf("%d",&numbers[i]);
  }
    float sumNumbers = 0;
  for(int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
    sumNumbers + numbers[i];
  } 
} 
