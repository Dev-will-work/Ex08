// Copyright 2020 Dev-will-work
#ifndef INCLUDE_MYSTRING_H
#define INCLUDE_MYSTRING_H
#include <string>
class MyString
{
private:
	char* string = nullptr;
public:
	MyString(const char* str = nullptr); // -����������� � ����� ����������(���� �������� �� - ��������� nullptr).
	MyString(std::string); // -����������� � ����� ����������.
	MyString(const MyString& str); // -����������� �����������.
	MyString(MyString&& str) : string(str.string) { str.string = nullptr; }; // -����������� ��������.
	~MyString(); // -����������.
	size_t length(); // -���������� ��������(����� ������).
	char* get(); // -����������� ��������� �� ������(��� char*).
	MyString operator+(MyString); // -��������(������������ ���� �����).
	MyString operator-(MyString); // -���������(�� ������ ������ ��������� ��� �������, �������������� �� ������ ������).
	MyString operator*(int); // -��������� �� ����� �����(������ ����������� �������� ����� ���).
	MyString& operator=(const MyString&); // -���������� ������������.
	MyString& operator=(MyString&&); // -������������ ������������.
	bool operator==(MyString); // -��������� �� ���������.
	bool operator!=(MyString); // -��������� �� �����������.
	bool operator>(MyString); // -���������������� ��������� .
	bool operator<(MyString); // -���������������� ���������.
	bool operator>=(MyString); // -���������������� ���������.
	bool operator<=(MyString); // -���������������� ���������.
	MyString operator!(); // - � ��������� ���� �������� �������.
	char operator[](int); // - ������ � ������� �� �������.
	int operator()(MyString); // - ����� ���������.
	friend std::ostream& operator<<(std::ostream& out, MyString& str); // -������ �� ������.
	friend std::istream& operator>>(std::istream& in, MyString& str); // -������ � �����.
};
#endif  // INCLUDE_MYSTRING_H