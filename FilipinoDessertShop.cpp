#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Restarunt{
public:
    void Menu();
    void Order(string userOrder);
    double Total(double userTotal){
    cost=cost+userTotal;

    return cost;
    }
    double Receipt(){
    return cost;
    }

private:
    double cost=0;
    const vector<string> dessertName ={"Plain-Baduya", "Sapin-Sapin", "Cassava-Cake", "Kitsinta", "Buko-Pandan-Cake","Panutsa", "Ube-Cake"};
    const vector<double> dessertPrice ={   6.50,           4.00,           8.00,         5.40,           7.00,          4.00,       8.20};

};

//Prints menu
void Restarunt::Menu(){
cout<<"___________________________________"<<endl;
cout<<"|Dessert                 | Prices |"<<endl;
cout<<"|Plain-Baduya (5 Pieces) | $6.50  |"<<endl; 
cout<<"|Sapin-Sapin             | $4.00  |"<<endl;
cout<<"|Cassava-Cake            | $8.00  |"<<endl;
cout<<"|Kitsinta     (4 Pirces) | $5.40  |"<<endl;
cout<<"|Buko-Pandan-Cake        | $7.00  |"<<endl;
cout<<"|Panutsa                 | $4.00  |"<<endl;
cout<<"|Ube-Cake                | $8.20  |"<<endl;
cout<<"-----------------------------------"<<endl;
}

void Restarunt::Order(string userOrder){
    for(int i=0;i<dessertName.size();i++){
        if(dessertName[i]==userOrder){
        cost=cost+dessertPrice[i];
        }//if loop
    }//for loop
}

int main(){
//UserVariables
string userInput;
string userOrder;
double userTotal=0.0;

//Restarunt Class
Restarunt studentOrder;

cout<<endl;
cout<<"Hello fellow customer welcome to the delicious Filipino Dessert Store "<<endl;

while(userInput!="done"){
    cout<<endl;
    cout<<"How may I help you?"<<endl;   
    cout<<"(Choose options between 'Done, Menu, Order')"<<endl;
    cout<<"(Type done to quit)"<<endl;
    cin>>userInput;
    cout<<endl;
    
    if(userInput=="done" || userInput=="Done"){
    userInput="done";
    }
    
    if(userInput=="menu" || userInput=="Menu"){
    cout<<"Here is the Menu"<<endl;
    studentOrder.Menu();
    }
    
    if(userInput=="order" || userInput=="Order"){
        while(userOrder!="done"){
        cout<<"What you would like to order?"<<endl;
        cout<<"Type 'done' to stop ordering"<<endl;
        cin>>userOrder;
        studentOrder.Order(userOrder);
        cout<<endl;
        }//while loop
    }//if loop
}//while loop

cout<<"Your total is $"<< studentOrder.Receipt()<<endl;
cout<<"How would you like to pay?"<<"|Cash|Credit|Card|"<<endl;
cin>>userInput;
cout<<"Payment accepted, would you like to tip? [Y/N]"<<endl;
cin>>userInput;

if(userInput=="Y" || userInput=="y" ){
cout<<"Thank you for the tip, ";
}
cout<<"Please come again";

return 0;
}







