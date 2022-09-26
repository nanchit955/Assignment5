#include <iostream>
using namespace std;
class ID {
  public:
    void setData(int data) {
      id= data;
    }
    int getData() {
      return id;
    }
   
    private:
    int id;
};

class Name {
  public:
  string name="Hla Hla";
  void Ag(){
  cout<<"Information \n";
  }
};
class Password {
  public:
    void setData(int data) {
      password = data;
    }
    int getData() {
      return password;
    }
    private:
    int password;
};
class Amount {
public:
	void setData(int data){
    amount=data;
    }
    int getData(){
    return amount;
    }
private:
    int amount;
};

class Age {
public:
	void setData(int data){
    age=data;
    }
    int getData(){
    return age;
    }
private:
    int age;
};

class Location {
public:
  string name="Yangon";
};

int main() {
 ID d1;
 d1.setData(001);
 
 Name d2;
 d2.Ag();
 
 Password d3;
 d3.setData(12345);
 
 Amount d4;
 d4.setData(20000);
 
 Age d5;
 d5.setData(15);
 
 Location d6;
  
  cout << d1.getData()<<" ";
  cout << d2.name<<" ";
 cout << d3.getData()<<" ";
 cout<<d4.getData()<<" ";
 cout<<d5.getData()<<" ";
 cout<<d6.name;

  return 0;
}
