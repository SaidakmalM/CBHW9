/*
 * 
 * 9_1.c
 * � 䠩�� .txt ���� ��� ᫮�� �� ����� 100 ᨬ����� ������, ࠧ�������
 * ����� �஡����. ������ ⮫쪮 � ᨬ���� � ᫮�, ����� ���������
 * � ����� ᫮��� ⮫쪮 ���� ࠧ. �����⠩� �� �१ �஡�� � 䠩� .txt
 * � ���ᨪ�����᪮� ���浪�.
 * 
 */

#include <stdio.h>

int main()
{
	char in_name[] = "in.txt";
	char out_name[] = "out.txt";
	FILE *in_f = fopen(in_name, "r");
	FILE *out_f = fopen(out_name, "w");
	char word1[100], word2[100];
		fscanf(in_f, "%s%s", word1, word2);
	int char1[26] = {0}, char2[26] = {0};
	int count = -1;
		while (word1[++count] != '\0')
			++char1[word1[count] - 'a'];
		count = -1;
		while (word2[++count] != '\0')
			++char2[word2[count] - 'a'];
		for (int i = 0; i < 26; ++i)
			if (char1[i] == 1 && char2[i] == 1)
				fprintf(out_f, "%c", i + 97);
		fclose(in_f);
		fclose(out_f);
	return 0;
}
