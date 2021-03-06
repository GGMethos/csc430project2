#include <iostream>
#include <string>

using namespace std;

class Employee {
  private:
    //ID (to prevent duplicate data)
    string id;
    string name;
    bool hasBenefits;
    string benefitDescription;
    double tax;
    double grossIncome;
    double netpay;
  public:
    void setid(string index);
    string getid();
    void setName(string);
    void getName();
    void getBenefits(string);
    void setBenefits();
    void setTaxes(double value);
    double getTaxes();
    void setGrossIncome(double);
    void getGrossIncome();
    void getNetPay();
    //function for alg change goes here
    //function for alg change goes here
    
    
    //readin function //done!
    friend std::istream& operator >> (std::istream& ins, Employee& index)
    {
        //ins >> id;
        ins >> name;
        ins >> benefitDescription;
        ins >> tax;
        ins >> grossIncome;
        ins >> netpay;
        return ins;
        //so now we can use it like an int or string (cin, fstream...)
    }
    
    //equal function (for extend function)
    void operator = (Employee& source)
    {
        name = source.getName();
        benefitDescription = source.getBenefits();
        tax = source.getTaxes();
        grossIncome = source.getGrossIncome();
        netpay = source.getNetPay();
    }
    
    //compare fucntion (for checking function)
    bool operator == (Employee& source)
    {
        /*
        if(id.compare(source.getid()) !=0 )
          return 0;
        */
        if(name.compare(source.getName()) !=0 )
          return 0;
        if(benefitDescription.compare(source.getBenefits()) != 0)
          return 0;
        if(tax != source.getTaxes())
          return 0;
        if(grossIncome != source.getGrossIncome())
          return 0;
        if(netpay != source.getNetPay())
          return 0;
          return 1;
    }
    
    //[IMPORTANT] those 3 functions cannot be written outsite
    // !!!I have not tested the code
};

void Employee::setTaxes(double value)
{
    tax = value;   
}

double Employee::getTaxes()
{
    return tax;
}

/*TuanNguyen: Do you guys write the program in c++? so if it is then the all the functions should be like this:
void setName(string index);
the array should be dynamically so it can be extended if we have some kind of very large data file
and if you guys also want the numberic checker I can also do that :">  */


/*void Employee::setName (char newName[]) {
  name = newName;
  }*/
  
  //for this one: the array should be in an other header file with a separated class for ezier entering or modifying]
  //I also sent you guys 3 files in dynamic folder as an example for dynamic array and the seperated class
  //
/*
//unit tested
//tested and functional
#include <iostream>
using namespace std;
class income
{       
private:
int grossincome;
public:
void setgross(int g){
grossincome=g;
}
int getgross(){
return grossincome;
}
};
int main()
{
income exp1;
exp1.setgross(80000);
cout << exp1.getgross()<< endl; 
return 0;
}
*/
