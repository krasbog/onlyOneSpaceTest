#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <locale>


using namespace std;

int main(int nNumberOfArgs, char* pszArgs[])
{
	setlocale(LC_ALL, "Russian");
	char str_source_result[] = "   Дана   строка  текста. Написать    алгоритм удаления    повторяющихся   пробелов.   ";
	
	cout << "Исходная строка :" << endl
		<< str_source_result << endl;

	
	 char* iterator_result = str_source_result;
	 int space_counter = 0;
	 int len_str = 0;
	 
	 while (str_source_result[len_str])
	{
		
		if (str_source_result[len_str] != ' ')
		{
			

			*iterator_result = str_source_result[len_str];
			
			iterator_result++;
			space_counter = 0;

		}
		else
		{
			
			if ((space_counter == 0) && (len_str != 0))
			{
				

				*iterator_result = str_source_result[len_str];
				
				iterator_result++;

			}
			space_counter++;
			

		}
		len_str++;

	}

	 
	 if (str_source_result[len_str - 1] != ' ')
	 {
		 *iterator_result = '\0';
	 }
	 else 
	 {
		 iterator_result --;   *iterator_result = '\0';
	 }
	 

	cout << "Результирующая строка :" << endl
		<< str_source_result << endl;
	

		
	
	cout << "Нажмите Enter для продолжения..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}
