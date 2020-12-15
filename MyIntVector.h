//2016742039 ������
#pragma once
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;


class MyIntVector {
public:
	static const int DEFAULT_CAPACITY = 1;//��� 1�� ������ DEFALUT CAPACITY
	//MyIntVector();
	MyIntVector(int init_capacity = DEFAULT_CAPACITY);//constructor
	//preconditions : MyIntVector ���� ����� int ���� �޾� cap���� �޴� int ���� �� default capacity�� cap �ʱ�ȭ
	//postconditions : �Է¹��� int ������ ������ ���� ���� ��� default capacity�� �ʱ�ȭ�� cap�� ���� MyIntVector class type ���� �����

	MyIntVector(const MyIntVector& v);//copy constructor
	//preconditions : �Է¹޴� ���ڰ� MyIntVector class type�� ����������
	//postconditions : x(y); �� ��� MyIntVector y�� x�� �����

	~MyIntVector();//destructor
	//preconditions : MyIntVector class �� member function
	//postconditions : MyIntVector ��ü�� ������

	MyIntVector& operator =(const MyIntVector& v);//binary operator
	//preconditions : binary operator, parameter�� MyIntVector class type�� ���������� 
	//postconditions : ������ vector�� ���� vector�� ����Ǿ� ��ȯ, �� vector�� ������ ���� �� ��ȯ

	void operator+=(const MyIntVector& add);//binary operator
	//preconditions : binary operator, parameter�� MyIntVector class type�� ����������
	//postconditions : l value�� r value�� �ٿ����� ��ȯ

	void reserve(size_t newCap);//cap���� �Լ�
	//preconditions : newCap>=1, newCap���� used�� ũ�� newCap�� ũ�Ⱑ used�� ���ѵ�
	//postconditions : size_t type���� newCap��ŭ cap�� ����

	int &operator[](const int elem);
	//preconditions : used>elem>=0, elem�� ���� used���� ũ�ų� 0���� ������ �ȵȴ�.
	//postconditions : �ش� vector�� elem��° data�� int type ������ ���

	MyIntVector& operator +(const MyIntVector& input);//binary operator
	//preconditions : �� vector�� used �� ���ƾ���, ���������� ���� vector ��ȯ
	//postconditions : �� vector�� ���ҵ��� �������� MyIntVector type���� ��ȯ

	MyIntVector& operator -(const MyIntVector& input);//binary operator
	//preconditions : �� vector�� used �� ���ƾ���, ���������� ���� vector ��ȯ
	//postconditions : �� vector�� ���ҵ��� ������ MyIntVector type���� ��ȯ

	int operator*(const MyIntVector& input);//binary operator
	//preconditions : �� vector�� used �� ���ƾ���, ���������� ���� vector ��ȯ
	//postconditions : �� vector�� ���Ҹ� ���� ���ϰ�, ���� ������ ���ؼ� int ������ ��ȯ

	MyIntVector& operator -();//Unary operator
	//preconditions : Unary operator�� parameter�� ���� �����ʰ� MyIntVector �տ� ( - )�� �ٿ��� ���
	//postconditions : ���� MyIntVector�� data�鿡 ( - )�� ���ؼ� MyIntVector ��ȯ

	bool operator==(const MyIntVector& input);//binary operator
	//preconditions : MyIntVector �ΰ��� ���ʿ� �Է�
	//postconditions : �� vector�� ������ �����ϸ� true ��ȯ, �������� ������ false��ȯ      

	MyIntVector& operator()(int value);
	//preconditions : MyIntVector type ���� ���� ()�� int value�� �Է�, vector�� ��������� �ȵ�
	//postconditions : �Է¹��� int value�� MyIntVector�� data ��θ� �����ϰ� ��ȯ

	void pop_back();//remove
	//preconditions : vector�� ��������� �ȵ�
	//postconditions : �ش� vector�� �� �� data�� ����

	void push_back(const int& x);//insert
	//preconditions : int ������ �Է¹���
	//postconditions : �Է� ���� int  value�� MyIntVector data �ǵڿ� �߰�

	size_t capacity() const;
	//preconditions : MyIntVector�� member function, parameter�� ���� ����
	//postconditions : MyIntVector�� cap�� ��ȯ

	size_t size() const;//
	//preconditions : MyIntVector�� member function, parameter�� ���� ����
	//postconditions : MyIntVector�� used�� ��ȯ

	bool is_empty()const;
	//preconditions : MyIntVector�� member function, parameter�� ���� ����
	//postconditions : MyIntVector�� data�� ����ִ� ��� true ��ȯ, ������� ���� ��� false��ȯ

	void clear();
	//preconditions : MyIntVector�� member function, parameter�� ���� ����
	//postconditions : MyIntVector�� ��� ���� ����

private:
	int* data;//data�� ����Ǵ� vector
	size_t cap;//vector�� �뷮
	size_t used;//vector�� ���� ��
};