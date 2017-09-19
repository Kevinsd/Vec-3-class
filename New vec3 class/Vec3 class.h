#ifndef NEWVEC3CLASS_H
#define NEWVEC3CLASS_H

template <class TYPE>


class NewVec3class {

public:


	NewVec3class(TYPE x, TYPE y, TYPE z) : x(x), y(y), z(z) {};

	~NewVec3class() {};

	TYPE getx()const {
		return x;
	}
	TYPE gety()const {
		return y;
	}
	TYPE getz()const {
		return z;
	}


	NewVec3class operator+(const NewVec3class &Vector) {

		return NewVec3class(x + Vector.x ,y + Vector.y ,z + Vector.z) ;

	};

	NewVec3class operator=(const NewVec3class &Vector) {

		return NewVec3class(x = Vector.x, y = Vector.y, z = Vector.z);

	};

	bool operator ==(const NewVec3class &Vector) {
		
		return x == Vector.x && y == Vector.y && z == Vector.z;

	}

	NewVec3class operator+=(const NewVec3class &Vector) {

		return NewVec3class(x += Vector.x, y += Vector.y, z += Vector.z);

	};

	NewVec3class operator-=(const NewVec3class &Vector) {

		return NewVec3class(x -= Vector.x, y -= Vector.y, z -= Vector.z);

	};

	NewVec3class operatorzero(const NewVec3class &Vector) {

		return NewVec3class(x -= Vector.x, y -= Vector.y, z -= Vector.z);

	};





private:

	TYPE x;
	TYPE y;
	TYPE z;


};

























#endif