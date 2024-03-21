#include <iostream>

using namespace std;

class Overcoat {
public:
	string type;
	double price;
	Overcoat() {
		type = "empty";
		price = 0.0;
	}
	Overcoat(string utype, double uprice) {
		type = utype;
		price = uprice;
	}
	~Overcoat(){}

	bool operator==(Overcoat& overcoat) {
		return this->type == overcoat.type;
	}
	bool operator>(Overcoat& overcoat) {
		if (this->type == overcoat.type) {
			return this->price > overcoat.price;
		}
		else {
			cout << "wrong overcoat type";
			return false;
		}
	}
	Overcoat& operator=(Overcoat& overcoat) {
		this->type = overcoat.type;
		this->price = overcoat.price;
		return *this;
	}
};


class Flat {
public:
	double area;
	double price;
	Flat() {
		area = 0.0;
		price = 0.0;
	}
	Flat(double uarea, double uprice) {
		area = uarea;
		price = uprice;
	}
	~Flat() {}

	bool operator==(Flat& flat) {
		return this->area == flat.area;
	}
	bool operator>(Flat& flat) {
		return this->price > flat.price;
	}
	Flat& operator=(Flat& overcoat) {
		this->area = overcoat.area;
		this->price = overcoat.price;
		return *this;
	}
};

int main(){
	Overcoat ovc1("jacket", 100.00);
	Overcoat ovc2("jacket", 150.00);
	Overcoat ovc3("coat", 120.00);

	cout << ovc1.type;
	(ovc1.operator==(ovc2)) ? cout << " = " : cout << " != ";
	cout << ovc2.type << endl;

	cout << ovc1.type;
	(ovc1.operator==(ovc3)) ? cout << " = " : cout << " != ";
	cout << ovc3.type << endl;

	cout << ovc1.type << " " << ovc1.price << " | " << ovc2.type << " " << ovc2.price << " : ";
	(ovc1.operator>(ovc2)) ? cout << " > " : cout << " < ";
	cout << endl;

	cout << ovc1.type << " " << ovc1.price << " | " << ovc3.type << " " << ovc3.price << " : ";
	(ovc1.operator>(ovc3)) ? cout << " > " : cout << " < ";
	cout << endl;


	cout << "before =:" << endl;
	cout << "ovc2: " << ovc2.type << " " << ovc2.price << endl;
	cout << "ovc3: " << ovc3.type << " " << ovc3.price << endl;

	ovc2.operator=(ovc3);

	cout << "after =:" << endl;
	cout << "ovc2: " << ovc2.type << " " << ovc2.price << endl;
	cout << "ovc3: " << ovc3.type << " " << ovc3.price << endl;

	cout << endl << endl;

	Flat flat1(70.00, 55000.00);
	Flat flat2(80.00, 60000.00);
	Flat flat3(60.00, 49000.00);

	cout << flat1.area << "m^2";
	(flat1.operator==(flat2)) ? cout << " = " : cout << " != ";
	cout << flat2.area << "m^2" << endl;

	cout << flat1.price;
	(flat1.operator>(flat2)) ? cout << " = " : cout << " != ";
	cout << flat2.price << endl;

	cout << "before =:" << endl;
	cout << "flat2: " << flat2.area << "m^2" << " " << flat2.price << endl;
	cout << "flat3: " << flat3.area << "m^2" << " " << flat2.price << endl;

	flat2.operator=(flat3);

	cout << "after =:" << endl;
	cout << "flat2: " << flat2.area << "m^2" << " " << flat2.price << endl;
	cout << "flat3: " << flat3.area << "m^2" << " " << flat2.price << endl;

	return 0;
}
