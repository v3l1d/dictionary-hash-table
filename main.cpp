/*
 * main.cpp
 *
 *  Created on: 21 nov 2019
 *      Author: Alessandro
 */

#include <iostream>
#include <string>
#include "HashMap.h"

using namespace std;

int main(void) {
	HashMap<string, int> hashmap(10);
	hashmap.put("asd123", 2);
	hashmap.put("xxx123", 3);
	hashmap.put("H", 4);

	hashmap.remove("asd123");
	hashmap.remove("H");
	hashmap.remove("xxx123");
	int x = hashmap.getMapValue("H");
	int l = hashmap.getNelements();
	cout << l << endl;
	cout << x << endl;
}
