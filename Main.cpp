# include <iostream>
#include"First.h"

#define E 2.72 // Константа предпроцессора
#define forever for(unsigned long long loopindex = 0ULL;;loopindex++) // Бесконечный цикл с растущей переменной loopindex
#define sum(a, b) (a + b)
#define print_arr(arr, length) \
for (int i =0;i<length;i++)\
	std::cout << arr[i] << ' ';\
std::cout<<std::endl;

// Это однострочный комментарий, разбитый \
с помощью продления комментария

#define TEST 0

#if TEST == 1
void foo() {
	std::cout << "Hello world!";
}
#elif TEST == 2
void foo() {
	std::cout << "Bye world!\n";
}
#else
void foo() {}
#endif

#define FLAG
#ifndef  FLAG 
int _NUM;
#else
int _MUN;
#endif // FLAG 

#define var(v) std::cout << #v " = " << v << std::endl

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Константы и кострукции define
/*	std::cout << "E = " << E << std::endl;
	n = E * 2;
	std::cout << "n=" << n << std::endl;
	forever{
		if (loopindex > 10)
			break;
		std::cout << loopindex;
		std::cout << "Hello world";
	}
	std::cout << std::endl;

#undef E // Удаление объекта E
	//std::cout << E << std::endl; // Ошибка, т.к объект E удалён
#define E 3

	std::cout << "E = " << E << std::endl;*/

	// Макросы define
	/*n = 7;
	m = 15;
	std::cout << sum(n, m) << std::endl;

	int arr[3]{ 10,20,30 };
	print_arr(arr, 3);

#if TEST != 0
	foo();
#endif*/

	// Операторы препроцессора
	/*n = 15;
	m = 42;
	std::string str = "Hello wordl";
	var(n); //std::cout << "n" " = " << n << std::endl
	var(m);
	var(str); // std::cout << "str" " = " << str << std::endl*/

	// 
	std::cout << __LINE__ << std::endl; // 80
	std::cout << __LINE__ << std::endl; // 81
	std::cout << __DATE__ << std::endl; // дата сборка проекта
	std::cout << __FILE__ << std::endl; // полный путь к файлу

	return 0;
}