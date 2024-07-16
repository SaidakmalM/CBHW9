/*
 * 
 * 9_2.c
 * � 䠩�� .txt ���� ᨬ���쭠� ��ப� �� ����� 1000 ᨬ�����. ����室���
 * �������� �� �㪢� "a" �� �㪢� "b" � �������, ��� ��������, ⠪ � 
 * �����. ������� ������� � 䠩� .txt 
 * 
 */

#include <stdio.h>

int main()
{
	int line_length;
	printf("������ ����� ��ப� � 䠩��: ");
	scanf("%d", &line_length);
	char * in_file = "in.txt", * out_file = "out.txt";
	char line[line_length];
	FILE * fio;
		fio = fopen(in_file, "r");
		fscanf (fio, "%[^\n]", line);
		fclose(fio);
	char c;
	int i = 0;
		while ((c = line[i]) != '\0')
		{
			if ((c == 'a') || (c == 'A'))
				line[i] += 1;
			else if ((c == 'b') || (c == 'B'))
				line[i] -= 1;
			i++;
		}
		fio = fopen(out_file, "w");
		fprintf(fio, "%s", line);
		fclose(fio);
	return 0;
}
