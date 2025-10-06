#pragma once
#include <iostream>
#include <queue>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

class clsQueueLine
{
private:
	string _prefix = "";
	queue<string> temp;
	short _ExpectedDuration = 0;
	short _TotalTickets = 0;

	class TicketInfo {
	public:
		queue <string> _ticket;
		short _servedClients = 0;
		short _watingClients = 0;
		short _number = 1;
	};
	TicketInfo tickets;
public:
	clsQueueLine(string prefix, short ExpectedDuration) {
		_prefix = prefix;
		_ExpectedDuration = ExpectedDuration;
		_TotalTickets = 0;
	}
	void Time() {
		time_t t = time(0);
		tm now;

		localtime_s(&now, &t);

		cout << setfill('0')
			<< setw(2) << now.tm_mday << "/"
			<< setw(2) << (now.tm_mon + 1) << "/"
			<< (now.tm_year + 1900) << "  "
			<< setw(2) << now.tm_hour << ":"
			<< setw(2) << now.tm_min << ":"
			<< setw(2) << now.tm_sec << endl;
	}
	string space() {
		string T = "\t\t\t";
		return T;
	}
	void IssueTicket() {
		string ticket = _prefix + to_string(tickets._number);
		tickets._ticket.push(ticket);
		tickets._number++;
		_TotalTickets++;
		tickets._watingClients++;
	}
	void PrintTicketLineRTL() {
		temp = tickets._ticket;
		cout << space() << "Tickets rigth to left : ";
		while (!temp.empty()) {
			cout << " " << temp.front() << "-->";
			temp.pop();
		}
		cout << endl;
	}

	void PrintTicketLineLTR() {
		if (tickets._ticket.empty()) {
			cout << space() << "No tickets to print.\n";
			return;
		}

		queue<string> tempQueue = tickets._ticket;
		stack <string> s;

		while (!tempQueue.empty()) {
			s.push(tempQueue.front());
			tempQueue.pop();
		}

		cout << space() << "Tickets left to rigth : ";
		while (!s.empty()) {
			cout << " " << s.top() << "<--";
			s.pop();
		}
		cout << endl;
	}
	void PrintInfo() {
		cout << space() << "----------------------------------\n";
		cout << space() << "Queue Info:\n";
		cout << space() << "----------------------------------\n";
		cout << space() << "Prefix:         " << _prefix << endl;
		cout << space() << "Total Tickets:  " << _TotalTickets << endl;
		cout << space() << "Served Clients: " << tickets._servedClients << endl;
		cout << space() << "Wating Client:  " << tickets._watingClients << endl;
		cout << space() << "----------------------------------\n";
	}

	void TicketsInfo() {
		short i = 0;
		temp = tickets._ticket;

		while (!temp.empty()) {
			short served = _ExpectedDuration * i;

			cout << space() << temp.front() << endl;
			cout << space(); Time();
			cout << space() << "waiting client : " << i << endl;
			cout << space() << "Serve time in:\n" << space() << served << "min" << endl;
			cout << space() << "------------------------" << endl;
			cout << space() << "------------------------" << endl;
			i++;
			temp.pop();
		}
	}
	void PrintAllTickets() {
		cout << space() << "---------Tickets----------\n";
		cout << space() << "--------------------------\n";
		TicketsInfo();
	}
	void ServeNextClient() {
		if (tickets._ticket.empty()) {
			cout << space() << "No clients in queue.\n";
			return;
		}
		tickets._servedClients++;
		tickets._watingClients--;

		cout << space() << "------------------------\n";
		cout << space() << "  Queue Info  " << endl;
		cout << space() << "------------------------\n";
		cout << space() << "prefix:        " << _prefix << endl;
		cout << space() << "Total Tickets: " << _TotalTickets << endl;

		cout << space() << "served client : " << tickets._servedClients << endl;
		cout << space() << "waiting client: " << tickets._watingClients << endl;
		cout << space() << "------------------------" << endl;
		cout << space() << "------------------------" << endl;

		tickets._ticket.pop();

	}
};

