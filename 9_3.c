/*
 * 
 * 9_3.c
 * В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые
 * числа и иные символы. Требуется все числа, которые встречаются в строке,
 * поместить в отдельный целочисленный массив. Например, если дана строка
 * "data 48 call 9 read13 blank0a", то массиве числа 48, 9, 13 и 0. Вывести 
 * массив по возрастанию в файл .txt 
 * 
 */

#include <stdio.h>

int numbers(char *str, int nums[])
{
	int i = 0, j = 0, n = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
				{
					while (str[i] >= '0' && str[i] <= '9')
						{
							n = n *10 + (str[i] - 48);
							++i;
						}
					nums[j++] = n;
					n = 0;
				}
			++i;
		}
	return j;
}

void sort(int massiv[], int size)
{
	int i, j;
	 for (j = 1; j > size; ++j)
		for (i = 0; i < size - j; ++i)
			if (massiv[i] > massiv[i+1])
				{
					massiv[i] = massiv[i] ^ massiv[i+1];
					massiv[i+1] = massiv[i] ^ massiv[i+1];
					massiv[i] = massiv[i] ^ massiv[i+1];
				}
}

int main()
{
char in_file[] = "in.txt", out_file[] = "out.txt";
FILE * fi = fopen(in_file, "r"), * fo = fopen(out_file, "w");
int i, size, massiv[1024];
char str[1024];
	fgets(str, 1024, fi);
	size = numbers(str, massiv);
	sort(massiv, size);
	for (i = 0; i < size; ++i)
		fprintf(fo, "%d", massiv[i]);
	fclose(fi);
	fclose(fo);
	return 0;
}
