#include<iostream>
using namespace std;

class SBI
{
   int Accnumber = 1234565794;
   string Accname = "Prathmesh Pathari";
   double balance;

   public:
       // ACCOUNTNUMBER
    //    void setaccnumber (int Accnumber )
    //    {
    //        Accnumber = Accnumber;
    //    }
        int getaccnumber () const
       {
           return Accnumber;
       }

       //ACCNAME
    //     void setaccname (string Accname )
    //    {
    //        Accname = Accname;
    //    }
       string getaccname () const
       {
           return Accname;
       }

       //BALANCE
       void setbalance (double balance )
       {
           balance = balance;
       }

       double getbalance () const
       {
           return balance;
       }

       //DEPOSITE METHOD
       void deposit (double amount)
       {
           balance = balance + amount;
           cout << "Current balance =" << balance << endl;
       }

       void Withdraw ( double amount1)
       {
           if(balance > amount1)
           {
               cout << "Withdraw Amount=" << amount1 <<endl;
               balance = balance - amount1;
               cout << "Cyrrent balance =" << balance << endl;
           }
           else
           {
               cout << "Insufficient Balance" <<endl;
               cout << "Balance=" << balance <<endl;
           }
           
       }

       void bankdetails() const
       {
          cout << "Bank Account Number :" << Accnumber << " "<< "Account holdername :" << Accname 
          << " " << "Balance :"<< balance <<endl;
       }    
};

 int main()
       {
          int num;
          int amt;
          int amt1;
      do
      {
        SBI s1;
      cout << "Kindly Choose your option"  << endl;
      cout << "1. Deposit Money "  << endl;
      cout << "2. Withdraw Money "  << endl;
      cout << "3. Display Details "  << endl;
      cout << "4. Exit the Program "  << endl;
      cin >> num ;
      switch (num)
      {
      case 1: cout << "Enter amount" << endl;
              cin >> amt;
              s1.deposit(amt);
              break;

      case 2: cout << "Enter amount" << endl;
              cin >> amt1;
              s1.Withdraw(amt1);
              break;
    
      case 3: s1.bankdetails();
              break;

      case 4:  cout << " Program Ends "  << endl;
                cout << " THANK YOU "  << endl;
              break;    
      
      default: cerr << "Invalid Choice Option "  << endl;
          break;
      }
   
     } while (num != 0);
}