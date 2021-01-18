#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine
{
private:
    const int PRICE;
    int balance;
    int money;
public:
    TicketMachine(/* args */);
    ~TicketMachine();
    void showPrompt();
    void insertmoney(int money);
    void showBalance();
    void printTicket();
    void showToatal();
};

#endif
