//exemplo 12.4.2
//definição da classe basapluscommissionemployee representa um empregado
//que recebe um salario base alem da comissão

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
using std::string;

class BasePlusCommissionEmployee
{
public:
  BasePlusCommissionEmployee( const string &, const string &,
      const string &, double = 0.0, double = 0.0, double = 0.0 );
  
  void setFirstName( const string & );
  string getFirstName() const;

  void setLastName( const string & );
  string getLastName() const;

  void setSocialSecurityNumber( const string & );
  string getSocialSecurityNumber() const;

  void setGrossSales( double );   
  double getGrossSales() const;

  void setCommissionRate( double ); 
  double getCommissionRate() const; 

  void setBaseSalary( double );
  double getBaseSalary() const;

  double earnings() const;
  void print() const;

protected:
  string firstName;
  string lastName;
  string socialSecurityNumber;
  double grossSales;
  double commissionRate;
  double baseSalary;
};

#endif