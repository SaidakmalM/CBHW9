/*
 * 
 * 9_5.c
 * � 䠩�� .txt ���� ��ப� ᫮�,ࠧ�������� �஡�����.
 * ���� ��ᮥ ������� ᫮�� � �뢥�� ��� � 䠩� .txt.
 * ���砩, ����� ᠬ�� ������� ᫮� ����� ���� ��᪮�쪮, �� ��ࠡ��뢠��.
 * 
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char in_file[] = "in.txt", out_file[] = "out.txt";
	char in_str[1024], res_str[1024];
	FILE *f;
	int len, max_len = 0;
	f = fopen(in_file, "r");
	while (fscanf(f, "%s", in_str) == 1)
	{
		len = strlen(in_str);
		if (len > max_len)
		{
			max_len = len;
			strcpy(res_str, in_str);
		}
	}
	fclose(f);
	f = fopen(out_file, "w");
	fprintf(f, "%s", res_str);
	fclose(f);
	return 0;
}
