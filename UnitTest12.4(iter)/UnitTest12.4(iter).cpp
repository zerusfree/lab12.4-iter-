#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest124iter
{
	TEST_CLASS(UnitTest124iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Node* head = nullptr;
			Node* node1 = new Node{ nullptr, 1 };
			Node* node2 = new Node{ nullptr, 2 };
			Node* node3 = new Node{ nullptr, 3 };
			Node* node4 = new Node{ nullptr, 4 };

			// Connect nodes
			head = node1;
			node1->next = node2;
			node2->next = node3;
			node3->next = node4;
			node4->next = head;

			// Act
			int result = sumOfEvenElements(head);

			// Assert
			Assert::AreEqual(result, 6);

			// Clean up
			delete node1;
			delete node2;
			delete node3;
			delete node4;
		}
	};
}
