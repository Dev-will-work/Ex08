// Copyright 2020 Dev-will-work
#ifndef INCLUDE_MYSTRING_H
#define INCLUDE_MYSTRING_H
#include <string>
class MyString
{
private:
	char* string;
public:
	MyString(const char* str = nullptr); // -����������� � ����� ����������(���� �������� �� - ��������� nullptr).
	MyString(std::string); // -����������� � ����� ����������.
	MyString(const MyString&); // -����������� �����������.
	MyString(MyString&&); // -����������� ��������.
	~MyString(); // -����������.
	size_t length(); // -���������� ��������(����� ������).
	char* get(); // -����������� ��������� �� ������(��� char*).
	MyString operator+(); // -��������(������������ ���� �����).
	MyString operator-(); // -���������(�� ������ ������ ��������� ��� �������, �������������� �� ������ ������).
	MyString operator*(); // -��������� �� ����� �����(������ ����������� �������� ����� ���).
	MyString& operator=(const MyString&); // -���������� ������������.
	MyString& operator=(MyString); // -������������ ������������.
	MyString operator==(MyString); // -��������� �� ���������.
	MyString operator!=(MyString); // -��������� �� �����������.
	MyString operator>(MyString); // -���������������� ��������� .
	MyString operator<(MyString); // -���������������� ���������.
	MyString operator>=(MyString); // -���������������� ���������.
	MyString operator<=(MyString); // -���������������� ���������.
	MyString operator!(); // - � ��������� ���� �������� �������.
	char operator[](int); // - ������ � ������� �� �������.
	MyString operator()(MyString); // - ����� ���������.
	friend std::ostream& operator<<(std::ostream& out, MyString& str); // -������ �� ������.
	friend std::istream& operator>>(std::istream& in, MyString& str); // -������ � �����.
};
#endif  // INCLUDE_MYSTRING_H