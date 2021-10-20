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

	bool isEmpty() const;

private:
	/**
   *  \brief �������� ����� ��� �������� ����� �����.
   */
	class StackElement
	{
	public:
		/**
        *  \brief ����������� �� ���������.
        */
		StackElement();

		/**
		*  \brief ����������� � �����������.
		*  \param value ����� ��������.
		*/
		StackElement(int value);

		/**
		*  \brief ����������.
		*/
		~StackElement();

	private:
		int value;
		StackElement* next;
	};

	int size;

	StackElement* top;

	Stack(const Stack& rhs);

	Stack operator= (const Stack& rhs);
};

