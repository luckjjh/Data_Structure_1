//2016742039 정정현
#pragma once
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;


class MyIntVector {
public:
	static const int DEFAULT_CAPACITY = 1;//상수 1로 정의한 DEFALUT CAPACITY
	//MyIntVector();
	MyIntVector(int init_capacity = DEFAULT_CAPACITY);//constructor
	//preconditions : MyIntVector 변수 선언시 int 값을 받아 cap지정 받는 int 없을 시 default capacity로 cap 초기화
	//postconditions : 입력받은 int 변수나 엽력을 받지 않은 경우 default capacity로 초기화된 cap을 갖는 MyIntVector class type 변수 선언됨

	MyIntVector(const MyIntVector& v);//copy constructor
	//preconditions : 입력받는 인자가 MyIntVector class type의 변수여야함
	//postconditions : x(y); 의 경우 MyIntVector y가 x에 복사됨

	~MyIntVector();//destructor
	//preconditions : MyIntVector class 의 member function
	//postconditions : MyIntVector 객체를 삭제함

	MyIntVector& operator =(const MyIntVector& v);//binary operator
	//preconditions : binary operator, parameter가 MyIntVector class type의 변수여야함 
	//postconditions : 오른쪽 vector가 왼쪽 vector에 복사되어 반환, 두 vector가 같으면 기존 값 반환

	void operator+=(const MyIntVector& add);//binary operator
	//preconditions : binary operator, parameter가 MyIntVector class type의 변수여야함
	//postconditions : l value에 r value가 붙여져서 반환

	void reserve(size_t newCap);//cap변경 함수
	//preconditions : newCap>=1, newCap보다 used가 크면 newCap의 크기가 used로 제한됨
	//postconditions : size_t type변수 newCap만큼 cap이 증가

	int &operator[](const int elem);
	//preconditions : used>elem>=0, elem의 값이 used보다 크거나 0보다 작으면 안된다.
	//postconditions : 해당 vector의 elem번째 data를 int type 변수로 출력

	MyIntVector& operator +(const MyIntVector& input);//binary operator
	//preconditions : 두 vector의 used 가 같아야함, 같지않으면 기존 vector 반환
	//postconditions : 각 vector의 원소들이 더해져서 MyIntVector type으로 반환

	MyIntVector& operator -(const MyIntVector& input);//binary operator
	//preconditions : 두 vector의 used 가 같아야함, 같지않으면 기존 vector 반환
	//postconditions : 각 vector의 원소들이 빼져서 MyIntVector type으로 반환

	int operator*(const MyIntVector& input);//binary operator
	//preconditions : 두 vector의 used 가 같아야함, 같지않으면 기존 vector 반환
	//postconditions : 각 vector의 원소를 각각 곱하고, 곱한 값들을 더해서 int 변수로 반환

	MyIntVector& operator -();//Unary operator
	//preconditions : Unary operator로 parameter를 따로 받지않고 MyIntVector 앞에 ( - )만 붙여서 사용
	//postconditions : 기존 MyIntVector의 data들에 ( - )를 곱해서 MyIntVector 반환

	bool operator==(const MyIntVector& input);//binary operator
	//preconditions : MyIntVector 두개를 양쪽에 입력
	//postconditions : 두 vector가 완전히 동일하면 true 반환, 동일하지 않으면 false반환      

	MyIntVector& operator()(int value);
	//preconditions : MyIntVector type 변수 뒤의 ()에 int value를 입력, vector가 비어있으면 안됨
	//postconditions : 입력받은 int value로 MyIntVector의 data 모두를 변경하고 반환

	void pop_back();//remove
	//preconditions : vector가 비어있으면 안됨
	//postconditions : 해당 vector의 맨 뒤 data를 삭제

	void push_back(const int& x);//insert
	//preconditions : int 변수를 입력받음
	//postconditions : 입력 받은 int  value를 MyIntVector data 맨뒤에 추가

	size_t capacity() const;
	//preconditions : MyIntVector의 member function, parameter를 받지 않음
	//postconditions : MyIntVector의 cap을 반환

	size_t size() const;//
	//preconditions : MyIntVector의 member function, parameter를 받지 않음
	//postconditions : MyIntVector의 used를 반환

	bool is_empty()const;
	//preconditions : MyIntVector의 member function, parameter를 받지 않음
	//postconditions : MyIntVector의 data가 비어있는 경우 true 반환, 비어있지 않은 경우 false반환

	void clear();
	//preconditions : MyIntVector의 member function, parameter를 받지 않음
	//postconditions : MyIntVector의 모든 값을 삭제

private:
	int* data;//data가 저장되는 vector
	size_t cap;//vector의 용량
	size_t used;//vector가 사용된 양
};