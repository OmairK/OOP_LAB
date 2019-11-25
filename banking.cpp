#include <iostream>
#include <fstream>
using namespace std;
void readName(string filename){
    ifstream file;
    file.open(filename, ios::in);
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
    file.close();
    
}

class Account{
    private:
        int id;
        float balance;
        string name;
        float amount;
        string ac_type;
    public:
        Account(){}
        Account(int customerid,string customer_name, float acc_blance,string type ){
            cout<<"Default constructor called "<<endl;
            customerid = id;
            customer_name = name;
            balance = acc_blance;
            ac_type = type;
        }
    int FindAccount(){
        return id;
        
    }
    float ShowBalance(){
        cout<<"Hi "<<name<<endl<<"Your balance is "<<balance<<endl;
    };
    float Deposit(float money){
        if(money < 0){
            return 0;
        }
        amount = money;
        balance = balance + amount;
        cout<<"Hi "<<name<<endl<<"Your new balance is "<<balance<<endl;

        return 0;
    };
    void WithdrawMoney(float money){

        amount = money;
        if (balance >= amount)
        {
            balance -= amount;
            cout<<"Hi "<<name<<endl<<"Your balance is debited by "<<amount<<endl<<"Your new balance is "<<balance<<endl;
        }
        else
        {
            cout<<"This request can not be processed"<<endl<<"Error: Insufficient funds"<<endl;
        }
    
    };

    
};

int main(){
    Account customer[50];
    int point = 0,i = 0;
    int id;
    float balance;
    string name,acc_type;
    int ids,amnt,acc_id;
    int amounts;
    int amountss;
    while(1)
    {
        int choice;
        cout<<"Enter `1` for new account creation"<<endl<<"Enter `2` for an account updates"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                
                cout<<"Enter the account holder's name"<<endl;
                cin>>name;
                cout<<"Enter the id "<<endl;
                cin>>id;
                cout<<"Enter the balance"<<endl;
                cin>>balance;
                cout<<"Enter the account type "<<endl;
                cin>>acc_type;
                customer[point] = Account(id,name,balance,acc_type);
                point = point + 1;
                break;
            case 2:
                
                cout<<"Enter the account number "<<endl;
                cin>>acc_id;
                cout<<point;
                for (i = 0; i < point; i++)
                {
                    if(customer[i].FindAccount() == acc_id ){
                        ids = i;
                        cout<<"I am here "<<ids<<endl;
                    }  
                }
                int choices;
                cout<<"Enter 1)For withdrawl \n 2) For Balance Enquiry \n 3) For Deposit "<<endl;
                cin>>choices;
                switch(choices){
                    case 1:
                        
                        cout<<"Enter the withdrawl amount"<<endl;
                        cin>>amounts;
                        customer[ids].WithdrawMoney(amounts);
                        break;
                    case 2:
                        customer[ids].ShowBalance();
                        break;
                    case 3:
                        
                        cout<<"Enter the deposit amount"<<endl;
                        cin>>amountss;
                        customer[ids].Deposit(amountss);
                        break;
                }
                
        }
        

    }
    readName("name.txt");
    return 0;

}