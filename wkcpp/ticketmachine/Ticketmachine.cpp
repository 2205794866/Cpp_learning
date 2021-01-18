#include "TicketMachine.h"

#include <iostream>
using namespace std;

TicketMachine::TicketMachine():PRICE(0)
{

}

TicketMachine::~TicketMachine()
{

}

void TicketMachine::showPrompt()
{
    cout << "somethine";
}
void TicketMachine::insertmoney(int money)
{
    balance+= money;
}

void TicketMachine::showBalance()
{
    cout << balance;
}