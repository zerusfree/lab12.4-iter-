#include<iostream>
#include<iomanip>

using namespace std;
typedef int Info;

struct Node
{
	Node* next;
	Info info;
};

void Insert(Node*& L, Info info)
{
	Node* tmp = new Node; 
	tmp->info = info;
	if (L != NULL)
	{
		Node* T = L;
		while (T->next != L)
			T = T->next; 
		T->next = tmp; 
	}
	else
	{
		L = tmp; 
	}
	tmp->next = L;
}

void Print(Node* L)
{
	if (L == NULL)
		return;
	Node* first = L;
	cout << setw(4) << L->info;
	while (L->next != first)
	{
		L = L->next;
		cout << setw(4) << L->info;
	}
	cout << endl;
}


int sumOfEvenElements(Node* head)
{
	int sum = 0;
	Node* curr = head;

	do
	{
		if (curr->info % 2 == 0) // перевіряємо, чи є значення парним
		{
			sum += curr->info; // додаємо значення до суми
		}
		curr = curr->next;
	} while (curr != head);

	return sum;
}

int main()
{
	Node* L = NULL;

	Insert(L, 23);
	Insert(L, 18);
	Insert(L, 45);
	Insert(L, 27);
	Insert(L, 34);
	Insert(L, 57);
	Insert(L, 64);

	cout << "List: ";
	Print(L);
	cout << endl;

	cout << "Sum of even elements: " << sumOfEvenElements(L) << endl;

	return 0;
}
