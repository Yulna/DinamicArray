#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

int main(){

	Vector<int> v(200);
	


	v.pushback(1);
	v.pushback(2);
	v.pushback(3);
	v.pushback(4);
	v.pushback(5);
	v.pushback(6);
	v.pushfront(0);

	Vector<int> u(v);

	//v.pushback(7);
	//u.pushfront(65);
	int i, last;
	bool pop_back = v.pop_back(i);
	bool last_pop_back = v.pop_back(last);
	//Methods todo
	/*
	empty() DONE
	clean() DONE
	size()
	capacity()
	pop_back() DONE
	shirnk_to_fit() DONE

	at() -->method like operator[] without assert
	*/

	i = v[5];

	bool empty_v = v.empty();
	bool empty_u = u.empty();



	Vector<int> sortTest(6);
	sortTest.pushback(1);
	sortTest.pushback(8);
	sortTest.pushback(5);
	sortTest.pushback(3);
	sortTest.pushback(4);
	sortTest.pushback(2);
	int timesSwaped = sortTest.bubblesort();


	Vector<int> thousandsort(1001);
	for (int i = 0; i < 1000; i++){
		int push;
		push = rand();
		thousandsort.pushback(push);
	}

	int bignum = thousandsort.bubblesort();

	return 0;
}