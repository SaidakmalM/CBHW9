/*
 * 
 * 9_2.c
 * В файле .txt дана символьная строка не более 1000 символов. Необходимо
 * заменить все буквы "a" на букву "b" и наоборот, как заглавные, так и 
 * строчные. Результат записать в файл .txt 
 * 
 */

#include <stdio.h>

int main()
{
	int line_length;
	printf("Введите длину строки в файле: ");
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
