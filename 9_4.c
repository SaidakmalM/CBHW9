/*
 * 
 * 9_4.c
 * � 䠩�� .txt ��ப� �� �����쪨� � ������ ������᪨� �㪢, ������
 * �९������ � �஡����. �ॡ���� 㤠���� �� ��� �������騥�� ᨬ���� 
 * � �� �஡���. ������� ������� � 䠩� .txt.
 * 
 */

#include <stdio.h>

int main()
{
char in_file[] = "in.txt", out_file[] = "out.txt";
FILE *fi = fopen(in_file, "r"), *fo = fopen(out_file, "w");
int i = -1;
int j;
char str[1024];
char c;
	fgets(str, 1024, fi);
	while (str[++i] != '\0')
	{
		c = str[i];
		j = i;
		while(str[++j] != '\0')
			if (str[j] == c)
				str[j] = ' ';
	}
	i = -1;
	while (str[++i] != '\0')
		if (str[i] != ' ')
			fprintf(fo, "%c", str[i]);
	fclose(fi);
	fclose(fo);
	return 0;
}
