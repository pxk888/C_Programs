#include <stdio.h>
int main(){
	char c;
	int Figures=0,BigLetters=0,SmallLetters=0,others=0,spaces=0;
	printf("����һ���ַ�");
	while((c=getchar())!='\n'){
		
		if(c>='0'&&c<='9')Figures++;
		else if(c==' ')spaces++;
		else if(c>='A'&&c<='Z')BigLetters++;
		else if(c>='a'&&c<='z')SmallLetters++;
		else others++;
		
		
	}
	printf("|������		%d��,\n|��д��ĸ��	%d��,\n|Сд��ĸ��	%d��\n|�ո���		%d��,\n|�����ַ���	%d��",Figures,BigLetters,SmallLetters,spaces,others);
	return 0;	
}
