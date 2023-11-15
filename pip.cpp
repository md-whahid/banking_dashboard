#include <iostream>

double showBalance(double balance);
double diposit(double balance);
double withdraw(double balance);

int main()
{
  int command = 0;   //>>> Choise commmand Input
  int balance = 0;   //>>> Bank balance
  int condition = 0; //>>> While loop Condition

  do
  {
    std::cout << "\n************** Options **************\n"; //>>>
    std::cout << "1. Show balance \n";                        //>>>>>>
    std::cout << "2. Diposite Money \n";                      //>>>>>>>>>
    std::cout << "3. Withdraw Money \n";                      //>>>>>>>>>
    std::cout << "4. Exit Form Account ";                     //>>>>>>
    std::cout << "\n*************************************\n"; //>>>

    std::cout << "Enter Your Choise: ";
    std::cin >> command;

    if (command == 1)
    {
      showBalance(balance);
    }
    else if (command == 2)
    {
      balance += diposit(balance);
    }
    else if (command == 3)
    {
      balance -= withdraw(balance);
    }
    else if (command == 4)
    {
      condition = 4;
    }
    else
    {
      std::cout << "::::::::::::::::::::::::::::::\n"
                << "Sorry, You enter worng number!\n"
                << "Please Enter 1 - 4\n"
                << "::::::::::::::::::::::::::::::\n";
    }
  } while (condition != 4);

  return 0;
}

double showBalance(double balance)
{
  std::cout << "\n::::::::::::::::::::::::::::::\n"
            << "Your Balance Is: $ " << balance << "\n"
            << "::::::::::::::::::::::::::::::\n";
}

double diposit(double balance)
{
  double ammount = 0;
  std::cout << "\n::::::::::::::::::::::::::::::\n"
            << "Enter Ammount: ";
  std::cin >> ammount;

  balance += ammount;
  std::cout << "Your Currrent Balance is: $ " << balance << "\n"
            << "::::::::::::::::::::::::::::::\n";
  return balance;
}

double withdraw(double balance)
{
  double ammount = 0;
  std::cout << "\n::::::::::::::::::::::::::::::\n"
            << "Enter Ammount: ";
  std::cin >> ammount;

  if (ammount > balance)
  {
    std::cout << "\n::::::::::::::::::::::::::::::\n";
    std::cout << "!!! Insufficient Balance !!!\n";
    std::cout << "Your Currrent Balance is: $ " << balance << "\n"
              << "::::::::::::::::::::::::::::::\n";
  }
  else
  {
    balance -= ammount;
    std::cout << "Your Currrent Balance is: $ " << balance << "\n"
              << "::::::::::::::::::::::::::::::\n";
  }

  return balance;
}