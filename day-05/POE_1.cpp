#include <iostream>
#include <string>


using namespace std;
class Product
{
private:
    string name;
    string code;
    double price;
    int quantityInStock;

public:
    Product();
    Product(string cd,string nm, double pr, int qs);
    void setProduct(string cd,string nm, double pr, int qs);
    string getProductCode();
    string getName();
    double getPrice();
    int getQuantityInStock();
};

Product::Product()
{
    code = "";
    name = "";
    price = 0;
    quantityInStock = 0;
}
Product::Product(string cd,string nm, double pr, int qs)
{
    setProduct(cd,nm, pr,qs);
}
void Product::setProduct(string cd,string nm, double pr, int qs)
{
    code = cd;
    if (nm != " ")
        name = nm;
    else
        name = "invalid entry";

    if (pr < 0)
        price = 0.0;
    else
        price = pr;

    if (qs < 0)
        quantityInStock = 0;
    else
        quantityInStock = qs;


}
string Product::getProductCode()    {return code;}
string Product::getName()           {return name;}
double Product::getPrice()          {return price;}
int Product::getQuantityInStock()    {return quantityInStock;}

void getProductdata(Product &pd)
{
    string cd,nm,nm_;
    double pr;
    int qs;

    cout<<"Please enter Product code"<< endl;
    cin>> cd;

    cout<<"Please enter Product Name 1"<< endl;
    cin>> nm;

    cout<<"Please enter Product Name 2"<< endl;
    cin>> nm_;

    cout<<"Please enter Product Price"<< endl;
    cin>> pr;

    cout<<"Please enter Product Quantity"<< endl;
    cin>> qs;
    pd.setProduct(cd,nm,pr,qs);
}
void DisplayProduct(Product &pd)
{
    cout <<"Product Code : "<<pd.getProductCode()<< endl;
    cout <<"Product Name : "<<pd.getName()<< endl;
    cout <<"Product Price : "<<pd.getPrice()<< endl;
    cout <<"Product Quantity in Stock : "<<pd.getQuantityInStock()<< endl;
}
void prodCompare(Product &pd)
{
     string nm,nm_;

    if (nm.at(0)== nm_.at(0))
        cout <<"Two product has the same string length"<< endl;
    else
        cout <<"Two product does not have the same string length"<< endl;
}

int main()
{
    Product pd;


    getProductdata(pd);
    DisplayProduct(pd);
    prodCompare(pd);

    return 0;
}
