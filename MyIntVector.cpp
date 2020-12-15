//2016742039 ������
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include"MyIntVector.h"
using namespace std;
/*MyIntVector::MyIntVector() {//MyIntVector ���� �� member value�� �ʱ�ȭ �����ִ� constructor
	//preconditions : MyIntVector ���� �̸��� ���� �� Parameter�� ���� ����
	//postconditions : MyIntVector class type�� ���� �ʱ�ȭ �ż� �����
	data = new int[cap];
	cap = 0;
	used = 0;
}*/

MyIntVector::MyIntVector(int init_capacity) {
	data = new int[init_capacity];
	cap = init_capacity;
	used = 0;
}

MyIntVector::MyIntVector(const MyIntVector& v) {
	data = new int[v.cap];
	cap = v.cap;
	used = v.used;
	copy(v.data, v.data + used, data);
}
MyIntVector::~MyIntVector() {
	delete[] data;
}

MyIntVector& MyIntVector::operator =(const MyIntVector& v) {
	if (this == &v)
		return *this;
	if (cap != v.cap) {
		delete[] data;
		data = new int[v.cap];
		cap = v.cap;
	}
	used = v.used;
	copy(v.data, v.data + used, data);
	return *this;
}


void MyIntVector::operator+=(const MyIntVector& add) {
	if (used + add.used > cap)
		reserve(used + add.used);
	copy(add.data, add.data + add.used, data + used);
	used += add.used;
}

void MyIntVector::reserve(size_t newCap) {
	int* bigVector;
	if (newCap == cap)
		return;
	if (newCap < used)
		newCap = used;
	bigVector = new int[newCap];
	copy(data, data + used, bigVector);
	delete[] data;
	data = bigVector;
	cap = newCap;
}

int& MyIntVector::operator[](const int elem) {
	if (used <= elem|| elem < 0) {
		cout << "\n########ERROR########\n";
		cout << "�Էµ� ������ ���� �����̰ų� �ش� vector�� [" << elem << "]��°�� data�� �����ϴ�.\n"<<"���α׷��� �ߴ��մϴ�.";
		exit(1);
	}
	return data[elem];
}

MyIntVector& MyIntVector::operator +(const MyIntVector& input) {
	if (used != input.used) {
		cout << "�� vector�� ���� �迭�� ������ ���ƾ� �մϴ�.\n";
		cout << "�� ������ �� vector�� �迭�� ������ ���ƾ� ������ �� �ֽ��ϴ�\n";
		return *this;
	}

	for (size_t i = 0; i < used; i++) {
		data[i] = data[i] + input.data[i];
	}

	return *this;
}

MyIntVector& MyIntVector::operator -(const MyIntVector& input) {
	if (used != input.used) {
		cout << "�� vector�� ���� �迭�� ������ ���ƾ� �մϴ�.\n";
		cout << "�� ������ �� vector�� �迭�� ������ ���ƾ� ������ �� �ֽ��ϴ�\n";
		return *this;
	}

	for (size_t i = 0; i < used; i++) {
		data[i] = data[i] - input.data[i];
	}

	return *this;
}

int MyIntVector::operator*(const MyIntVector& input) {
	if (used != input.used) {
		cout << "�� vector�� ���� �迭�� ������ ���ƾ� �մϴ�.\n";
		cout << "�� ������ �� vector�� �迭�� ������ ���ƾ� ������ �� �ֽ��ϴ�\n";
		return 0;
	}
	int temp = 0;
	for (size_t i = 0; i < used; i++) {
		temp += (data[i] * input.data[i]);
	}
	return temp;
}

MyIntVector& MyIntVector::operator-() {
	if (used == 0) {
		cout << "vector�� data�� �����ϴ�.";
		return *this;
	}
	for (size_t i = 0; i < used; i++) {
		data[i] = data[i] * -1;
	}
	return *this;
}

bool MyIntVector::operator==(const MyIntVector& input) {                                                                                                                                                                                                                                                       
	int cnt = 0;
	if (used == input.used) {
		for (size_t i = 0; i < used; i++) {
			if (data[i] == input.data[i])
				cnt++;
		}
		if (used == cnt)
			return true;
		else
			return false;
	}
	else
		return false;
}

MyIntVector& MyIntVector::operator()(int value) {
	if (used == 0) {
		cout << "vector�� data�� �����ϴ�.";
		return *this;
	}
	for (size_t i = 0; i < used; i++) {
		data[i] = value;
	}
	return *this;
}

void MyIntVector::pop_back() {
	if (used == 0) {
		cout << "������ data�� �����ϴ�.";
		return;
	}
	used--;
}

void MyIntVector::push_back(const int& x) {
	if (used == cap)
		reserve(used + 1);
	data[used] = x;
	used++;
}

size_t MyIntVector::capacity()const {
	return cap;
}

size_t MyIntVector::size()const {
	return used;
}

bool MyIntVector::is_empty() const {
	if (used == 0)
		return true;
	else
		return false;
}

void MyIntVector::clear() {
	cap = DEFAULT_CAPACITY;
	used = 0;
	delete data;

	data = new int[cap];
}