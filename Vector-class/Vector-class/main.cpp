#include "Vector.h"

int main(){

	Vector<int> v;
	Vector<int> u(60);

	v.pushback(1);
	v.pushback(2);
	v.pushback(3);
	v.pushback(4);
	v.pushback(5);
	v.pushback(6);
	v.pushfront(0);

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

	bool empty_v = v.empty();
	bool empty_u = u.empty();

	return 0;
}