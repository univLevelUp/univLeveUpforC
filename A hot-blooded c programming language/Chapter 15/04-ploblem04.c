#include <stdio.h>
#include <string.h>

int main(void) {
	char ary[10];
	int i, len;
  int j = 0;

	printf("문자열 입력: ");
	scanf("%s", ary);
	len = strlen(ary);
	for (i = 0; i < len / 2; i++)
  {
	  if( ary[i] != ary[len-i-1] ) 
		    j += 1;
    else		
	      j += 0;
	}
  if(j==0)				
    printf("회문입니다.");
	else					
    printf("회문이 아닙니다.");
	return 0;
}
 