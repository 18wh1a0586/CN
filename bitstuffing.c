#include<stdio.h>
#include<string.h>
int main() {
	char flag[]  = "01111110";
        int n;
	scanf("%d", &n);
         char str[n];	
           scanf("%s", str);
	   int count = 0;
	   printf("%s",flag);
	   for(int i = 0; i < strlen(str); i++) {
		   if(str[i] == '1') {
                       count = count + 1;
		   }
		   else{
			   count = 0;
		   }
		   printf("%c", str[i]);
		   if(count == 5){
			   printf("0");
			   count = 0;
		   }
	   }
      printf("%s\n", flag);	   

	return 0;
}

