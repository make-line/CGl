#include <stdio.h>

int main(void){
	int iteration = 0; //Чтобы зациклить выполнение программы
	double term = 0; //слогаемое

	while(iteration++ < 1000000){
		double varCheck = 0;
		double e = 0.0000001; //константа для вычисления (пока слогаемое больше цикл do работает)

		//fib values
		double fn[2] = {2,3}; //устанавливаем значения fib. на 3 проход(по варианту)
		double nextFib = 0; //сюда записывается следующее значение фиб-и

		//factorial
		double factorial = 1;

		//pow
		double pow = 4;
		double i = 2;
		double sqrtDif = 3;

		do{
			nextFib = fn[0] + fn[1];
			fn[0] = fn[1];
			fn[1] = nextFib;

			factorial = factorial * i;

			term = (nextFib * pow) / factorial;
			
			pow = pow * i-1;
			i++;
		}while (term > e);
	}
}