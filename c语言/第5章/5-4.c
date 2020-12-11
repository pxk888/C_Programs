#include <stdio.h>
int main(){
	char c;
	int Figures=0,BigLetters=0,SmallLetters=0,others=0,spaces=0;
	printf("输入一行字符");
	while((c=getchar())!='\n'){
		
		if(c>='0'&&c<='9')Figures++;
		else if(c==' ')spaces++;
		else if(c>='A'&&c<='Z')BigLetters++;
		else if(c>='a'&&c<='z')SmallLetters++;
		else others++;
		
		
	}
	printf("|数字有		%d个,\n|大写字母有	%d个,\n|小写字母有	%d个\n|空格有		%d个,\n|其他字符有	%d个",Figures,BigLetters,SmallLetters,spaces,others);
	return 0;	
}
