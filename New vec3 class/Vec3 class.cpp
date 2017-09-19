#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include "Vec3 class.h"
using namespace std;

int main() {

	NewVec3class<float> vec1(2, 5, 6);
	NewVec3class<float> vec2(5, 1, 8);
	NewVec3class<float> vec3 = vec1 + vec2;
	
	//OPERADOR +//
	cout << vec3.getx() << " " << vec3.gety() << " " << vec3.getz() << endl;

	//ASIGNACIÓN =//
	vec3 = vec2;
	cout << vec3.getx() << " " << vec3.gety() << " " << vec3.getz() << endl;

	//==//
	cout << (vec3 == vec2) << endl;

	//+=//
	vec3 += vec2;
	cout << vec3.getx() << " " << vec3.gety() << " " << vec3.getz() << endl;

	//-=//
	vec3 -= vec2;
	cout << vec3.getx() << " " << vec3.gety() << " " << vec3.getz() << endl;

	//zero()//
	
	
	//*float//
	


	system("pause");
	return 0;
}