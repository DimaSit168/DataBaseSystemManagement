#pragma once
#include <initializer_list>


/**
 *  \brief ����� ���� ��� �������� ����� �����.
 */
class Stack
{
public:
	/**
	*  \brief ����������� �� ���������.
	*/
	Stack();

	/**
	*  \brief �������� ������� �� ������������������.
	*/
	Stack(std::initializer_list<int> value);

	~Stack();

	/**
	*  \brief ��������� ������� � ����.
	*  \param value ����� ��������.
	*/
	void Push(const int value);

	/**
	*  \brief ������� ������� � ����.
	*  \return value ����� ��������.
	*/
	int Pop();

	/**
	*  \brief .
	*  \return .
	*/
	std::size_t GetSize() const;

	/**
 *  \brief �������� ����� ��� �������� ����� �����.
 */
	class StackElement
	{
	public:
		StackElement();

		StackElement(int value);

		~StackElement();

	private:
		int value;
		StackElement* next;
	};

private:
	std::size_t size;
	StackElement element;
};

