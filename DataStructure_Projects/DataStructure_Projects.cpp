#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsDaynamicArray.h"
#include "clsMyQueueArr.h"
#include "clsMyStackArr.h"
#include "clsMystring.h"
#include "clsQueueLine.h"

using namespace std;

int main() {
    //Double Linked List
    clsDblLinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "\nthe linked list is empty!\n";
    else
        cout << "\nthe linked list is not empty!\n";

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    if (MydblLinkedList.IsEmpty())
        cout << "\nthe linked list is empty!\n";
    else
        cout << "\nthe linked list is not empty!\n";

    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    /* cout << "\nClear All node: ";
     MydblLinkedList.Clear();
     cout << "\nNuber of node is 0\n";*/


    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list: " << MydblLinkedList.Size();

    cout << "\n\nlinked list content after reverse:\n";
    MydblLinkedList.Reverse();
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N3;
    N3 = MydblLinkedList.GetNode(2);
    cout << "\n\nNode value is: " << N3->value << endl;

    cout << "\n\nItem(3) is: " << MydblLinkedList.GetItem(3) << endl;

    MydblLinkedList.UpdateItem(2, 499);
    cout << "\n\nAfter Updating item(2):\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(2, 501);
    cout << "\n\nAfter Adding item(2):\n";
    MydblLinkedList.PrintList();


    //Queue
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "\n\nMy Queue:\n";
    MyQueue.Print();

    cout << "\n\nQueue size : " << MyQueue.Size();
    cout << "\n\nQueue front: " << MyQueue.front();
    cout << "\n\nQueue back :" << MyQueue.back();

    MyQueue.pop();
    cout << "\n\nQueue after pop:";
    MyQueue.Print();

    cout << "\n\nQueue size : " << MyQueue.Size();


    //Extension #1
    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);

    //Extension #2
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();

    //Extension #3
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();

    //Extension #4
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();


    //Extension #5
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    //Extension #6
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    //Extension #7
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();








    //Stack
    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);

    cout << "\n\n\nMy Stack:\n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.top();
    cout << "\nStack Bottom: " << MyStack.bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    //Extension #1
    cout << "\n\n Item(2) : " << MyStack.GetItem(2);

    //Extension #2
    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    //Extension #3
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();

    //Extension #4
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();


    //Extension #5
    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();

    //Extension #6
    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();

    //Extension #7
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();




    //DaynamicArray
    clsDaynamicArray <short> MyDaynamicArray(5);

    MyDaynamicArray.SetItem(0, 5);
    MyDaynamicArray.SetItem(1, 10);
    MyDaynamicArray.SetItem(2, 15);
    MyDaynamicArray.SetItem(3, 20);
    MyDaynamicArray.SetItem(4, 25);
    cout << "\n\n\nMy Daynamic Array:\n";
    cout << "\nIs Emty? " << MyDaynamicArray.IsEmpty();
    cout << "\nArray size : " << MyDaynamicArray.Size();
    cout << "\nArray item: ";
    MyDaynamicArray.printList();

    //Extension 1
    MyDaynamicArray.Resize(2);
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    cout << "\nArray Items after resize to 2 : \n";
    MyDaynamicArray.printList();

    MyDaynamicArray.Resize(10);
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    cout << "\nArray Items after resize to 10 : \n";
    MyDaynamicArray.printList();

    MyDaynamicArray.Reverse();
    cout << "\n\nAfter Reverse: ";
    MyDaynamicArray.printList();


    cout << "\n\nGet Item 2: " << MyDaynamicArray.GetItem(2);

    MyDaynamicArray.DeleteAtItem(2);
    cout << "\nArray Items after deleting item(2): \n";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();

    MyDaynamicArray.DeleteFirstItem();
    cout << "\n\nArray Size: " << MyDaynamicArray.Size();
    cout << "\nArray Items after deleting LastItem: \n";
    MyDaynamicArray.printList();

    MyDaynamicArray.DeleteLastItem();
    cout << "\n\nArray Size: " << MyDaynamicArray.Size();
    cout << "\nArray Items after deleting LastItem: \n";
    MyDaynamicArray.printList();

    int Index = MyDaynamicArray.Find(30);
    if (Index == -1)
        cout << "\nItem was not Found :-(\n ";
    else
        cout << "\n30 is found at index : " << Index;

    MyDaynamicArray.DeleteItem(10);
    cout << "\n\nArray Items after deleting 10:";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();

    MyDaynamicArray.InserAt(2, 10);
    cout << "\n\nArray Items after Inser At index 2 value 10:";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();

    MyDaynamicArray.InserAtBeginng(400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();

    MyDaynamicArray.InserBefor(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();

    MyDaynamicArray.InserAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();


    MyDaynamicArray.InserAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDaynamicArray.Size() << "\n";
    MyDaynamicArray.printList();

    MyDaynamicArray.Clear();
    cout << "\n\nAfter Clear: ";
    MyDaynamicArray.printList();




    //QueueArray
    clsMyQueueArr <int> MyQueueArr;

    MyQueueArr.push(10);
    MyQueueArr.push(20);
    MyQueueArr.push(30);
    MyQueueArr.push(40);
    MyQueueArr.push(50);


    cout << "\n\n\nMy Queue Array: \n";
    MyQueueArr.Print();

    cout << "\nQueue Size: " << MyQueueArr.Size();
    cout << "\nQueue Front: " << MyQueueArr.front();
    cout << "\nQueue Back: " << MyQueueArr.back();

    MyQueueArr.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueueArr.Print();


    cout << "\n\n Item(2) : " << MyQueueArr.GetItem(2);


    MyQueueArr.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueueArr.Print();


    MyQueueArr.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueueArr.Print();


    MyQueueArr.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueueArr.Print();



    MyQueueArr.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueueArr.Print();


    MyQueueArr.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueueArr.Print();


    MyQueueArr.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueueArr.Print();






    //Stack Array
    clsMyStackArr <int> MyStackArr;
    MyStackArr.push(100);
    MyStackArr.push(200);
    MyStackArr.push(300);
    MyStackArr.push(400);
    MyStackArr.push(500);


    cout << "\n\n\nMy Stack Array: \n";
    MyStackArr.Print();

    cout << "\nQueue Size: " << MyStackArr.Size();
    cout << "\nQueue Front: " << MyStackArr.front();
    cout << "\nQueue Back: " << MyStackArr.back();

    MyStackArr.pop();

    cout << "\n\nQueue after pop() : \n";
    MyStack.Print();


    cout << "\n\n Item(2) : " << MyStackArr.GetItem(2);


    MyStackArr.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyStackArr.Print();


    MyStackArr.UpdateItem(2, 950);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyStackArr.Print();


    MyStackArr.InsertAfter(2, 1000);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyStackArr.Print();



    MyStackArr.InsertAtFront(900);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyStackArr.Print();


    MyStackArr.InsertAtBack(5000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyStackArr.Print();


    MyStackArr.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyStackArr.Print();






    //Undo/Redo
    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

    clsMystring S1;

    cout << "\nS1  = " << S1.Value << "\n";

    S1.Value = "Mohammed";

    cout << "S1  = " << S1.Value << "\n";

    S1.Value = "Mohammed2";

    cout << "S1  = " << S1.Value << "\n";

    S1.Value = "Mohammed3";

    cout << "S1  = " << S1.Value << "\n";

    cout << "\n\nUndo: ";
    cout << "\n__\n";

    S1.Undo();
    cout << "\nS1  after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.Value << "\n";

    cout << "\n\nRedo: ";
    cout << "\n__\n";

    S1.Redo();
    cout << "\nS1  after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.Value << "\n\n\n";




    cout << "\n\n\nMy Queue Line:\n";

    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubstrictionQueue("B0", 5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "Print info for Pay Bills queue:\n\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketLineRTL();
    PayBillsQueue.PrintTicketLineLTR();

    cout << "\nAll tickets info for Pay Bills queue:\n";
    PayBillsQueue.PrintAllTickets();

    cout << "\nPay Bills queue after serving one client:\n";
    PayBillsQueue.ServeNextClient();

    cout << "\n\n";

    SubstrictionQueue.IssueTicket();
    SubstrictionQueue.IssueTicket();
    SubstrictionQueue.IssueTicket();
    SubstrictionQueue.IssueTicket();
    SubstrictionQueue.IssueTicket();

    cout << "Print info for Subscription queue:\n";
    SubstrictionQueue.PrintInfo();

    SubstrictionQueue.PrintTicketLineRTL();
    SubstrictionQueue.PrintTicketLineLTR();

    cout << "\nAll tickets info for Subscription queue:\n";
    SubstrictionQueue.PrintAllTickets();

    cout << "\nSubscription queue after serving one client:\n";
    SubstrictionQueue.ServeNextClient();

    system("pause > 0");
    return 0;
}