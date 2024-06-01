#include <iostream>
#include <conio.h>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;
double calculateChange(double totalAmount, double paidAmount)
{
    return paidAmount - totalAmount;
}
int main()
{

    int order = 1;
    int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0;
    int sentinel=0;
    const double UnitPrice1= 500.00, UnitPrice2= 600,UnitPrice3= 1050, UnitPrice4= 250, UnitPrice5= 875, UnitPrice6= 499;
    double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0, AmountofSale6=0;
    float vatPercentage = 5;
    float vatAmount;
    float totalAmount;
    double totalAmount1;
    double paidAmount1;
    int Amount, BDT1000=0, BDT500=0, BDT100=0, BDT50=0, BDT20=0, BDT10=0, BDT5=0, BDT2=0, BDT1=0,count=0;



    cout << setw(70) << "|\"SHAMUNUR DINE\"|\n\n"<< endl;
    cout << setw(73) <<"=> ______ Menu ______ <=\n"<<endl;
    cout << setw(89) <<"=> Today, These packages are available at our restaurant.\n"<<endl;
    cout <<setw(80)<<"   \tFood                                       \tUnit Price\n\n"
         <<setw(80)<<"[1] Beef Birayani               ------------------>  500 Tk\n"
         <<setw(80)<<"[2] Beef Steak & Grill Potatoes ------------------>  600 Tk\n"
         <<setw(80)<<"[3] Salmon                      ------------------> 1050 Tk\n"
         <<setw(80)<<"[4] Chicken Birayani            ------------------>  250 Tk\n"
         <<setw(80)<<"[5] Lamb Meat & White Rice      ------------------>  875 Tk\n"
         <<setw(81)<<"[6] Kabuli Pulao & Lamb Cuiz    ------------------>  499 Tk\n\n";


    cout<<setw(49)<<"Please order : ";
    cin>>order;
    switch(order)
    {

    case 1:

        cout<<setw(49)<<"Enter the quantity of Beef Birayani? : ";
        cin>>num1;

        AmountofSale1 = (UnitPrice1 * num1);
        vatAmount = (AmountofSale1 * 5)/100;
        totalAmount = (vatAmount + AmountofSale1);

        break;




    case 2:
        cout<<setw(49)<<"Enter the quantity of Beef Steak? : ";
        cin>>num2;

        AmountofSale2= (UnitPrice2 * num2);
        vatAmount = (AmountofSale2 * 5)/100;
        totalAmount = (vatAmount + AmountofSale2);
        break;


    case 3:
        cout<<setw(49)<<"Enter the quantity of Salmon? : ";
        cin>>num3;

        AmountofSale3= (UnitPrice3 * num3);
        vatAmount = (AmountofSale3 * 5)/100;
        totalAmount = (vatAmount + AmountofSale3);
        break;



    case 4:
        cout<<setw(49)<<"Enter the quantity of Chicken Biryani? : ";
        cin>>num4;

        AmountofSale4= (UnitPrice4 * num4);
        vatAmount = (AmountofSale4 * 5)/100;
        totalAmount = (vatAmount + AmountofSale4);
        break;



    case 5:
        cout<<setw(49)<<"Enter the quantity of Lamb Meat & White Rice? : ";
        cin>>num5;


        AmountofSale5= (UnitPrice5 * num5);
        vatAmount = (AmountofSale5 * 5)/100;
        totalAmount = (vatAmount + AmountofSale5);
        break;

    case 6:
        cout<<setw(49)<<"Enter the quantity of Kabuli Pulao & Lamb Cuiz? : ";
        cin>>num6;


        AmountofSale6= (UnitPrice6 * num6);
        vatAmount = (AmountofSale6 * 5)/100;
        totalAmount = (vatAmount + AmountofSale6);
        break;


    default:
        cout<<"Error.. Please choose an item from our list\n";
    }




    cout<<setw(50)<<"You Have Ordered:\n\n";
    cout<<"|==================================================================================|\n";

    cout<<left<<setw(15)<<"|ITEM"<<right<<setw(20)<<"QUANTITY"<<right<<setw(25)<<"UNIT PRICE"<<right<<setw(25)<<"AMOUNT|\n";

    cout<<"|==================================================================================|";

    cout<<"\n Beef Birayani:\t\t\t\t"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl<<endl;

    cout<<" Beef Steak & Grill Potatoes:\t\t"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

    cout<<" Salmon:\t\t\t\t"<<setw(6)<<left<< num3 <<setw(16)<<right<< UnitPrice3 <<setw(20) <<right<< AmountofSale3<<endl<<endl;

    cout<<" Chicken Biryani:\t\t\t"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

    cout<<" Lamb Meat & White Rice:\t\t"<<setw(6)<<left<< num5 <<setw(16)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;

    cout<<" Kabuli Pulao & Lamb Cuiz:\t\t"<<setw(6)<<left<< num6 <<setw(16)<<right<< UnitPrice6 <<setw(20) <<right<< AmountofSale6<<endl<<endl;
    cout<<"|==================================================================================|\n\n\n";

    switch (order)
    {
    case 1:
        cout <<" Payment Details: "<<endl;
        cout <<" _____________________________________________________\n\n";
        cout <<" Food name   =\t\t\t\t Beef Birayani"<<endl;
        cout <<" Iteam       =" <<setw(40) <<right<<num1<<endl;
        cout <<" Subtotal    =" <<setw(40) <<right<< AmountofSale1 << endl;
        cout <<" Vat         =" <<setw(40) <<right<< vatAmount << endl;
        cout <<" _____________________________________________________\n";
        cout <<" Total Price =" <<setw(40) <<right<< totalAmount << endl << endl;
        break;
    case 2:
        cout <<" Payment Details: "<<endl;
        cout <<" _____________________________________________________\n\n";
        cout <<" Food name   =\t\t   Beef Steak & Grill Potatoes"<<endl;
        cout <<" Iteam       =" <<setw(40) <<right<<num2<<endl;
        cout <<" Subtotal    =" <<setw(40) <<right<< AmountofSale2 << endl;
        cout <<" Vat         =" <<setw(40) <<right<< vatAmount << endl;
        cout <<" _____________________________________________________\n";
        cout <<" Total Price =" <<setw(40) <<right<< totalAmount << endl << endl;
        break;
    case 3:
        cout <<" Payment Details: "<<endl;
        cout <<" _____________________________________________________\n\n";
        cout <<" Food name   =\t\t\t\t\tSalmon"<<endl;
        cout <<" Iteam       =" <<setw(40) <<right<<num3<<endl;
        cout <<" Subtotal    =" <<setw(40) <<right<< AmountofSale3 << endl;
        cout <<" Vat         =" <<setw(40) <<right<< vatAmount << endl;
        cout <<" _____________________________________________________\n";
        cout <<" Total Price =" <<setw(40) <<right<< totalAmount << endl << endl;
        break;
    case 4:
        cout <<" Payment Details: "<<endl;
        cout <<" _____________________________________________________\n\n";
        cout <<" Food name   =\t\t\t      Chicken Birayani"<<endl;
        cout <<" Iteam       =" <<setw(40) <<right<<num4<<endl;
        cout <<" Subtotal    =" <<setw(40) <<right<< AmountofSale4 << endl;
        cout <<" Vat         =" <<setw(40) <<right<< vatAmount << endl;
        cout <<" _____________________________________________________\n";
        cout <<" Total Price =" <<setw(40) <<right<< totalAmount << endl << endl;
        break;
    case 5:
        cout <<" Payment Details: "<<endl;
        cout <<" _____________________________________________________\n\n";
        cout <<" Food name   =\t\t\tLamb Meat & White Rice"<<endl;
        cout <<" Iteam       =" <<setw(40) <<right<<num5<<endl;
        cout <<" Subtotal    =" <<setw(40) <<right<< AmountofSale5 << endl;
        cout <<" Vat         =" <<setw(40) <<right<< vatAmount << endl;
        cout <<" _____________________________________________________\n";
        cout <<" Total Price =" <<setw(40) <<right<< totalAmount << endl << endl;
        break;
    case 6:
        cout <<" Payment Details: "<<endl;
        cout <<" _____________________________________________________\n\n";
        cout <<" Food name   =\t\t      Kabuli Pulao & Lamb Cuiz"<<endl;
        cout <<" Iteam       =" <<setw(40) <<right<<num6<<endl;
        cout <<" Subtotal    =" <<setw(40) <<right<< AmountofSale6 << endl;
        cout <<" Vat         =" <<setw(40) <<right<< vatAmount << endl;
        cout <<" _____________________________________________________\n";
        cout <<" Total Price =" <<setw(40) <<right<< totalAmount << endl <<endl;
        break;
    default:
    {
        cout <<".";
    }

    }
    cout << " PAY YOUR TOTAL BILL=> \n";
    cout <<" __________________________________________________________\n\n";
    cout << " Enter the amount, you will pay now : \t\tBDT-";
    cin >> paidAmount1;
    cout << " Enter the total amount: \t\t\tBDT-";
    cin >> totalAmount1;
    cout <<" __________________________________________________________\n";
    double change = calculateChange(totalAmount1, paidAmount1);

    if (change >= 0)
    {
        cout << " \n Change to be returned: \t\t\tBDT-" << fixed << setprecision(2) << change << "\n";
        cout << " ______________________________________________________________________________";
        cout << "\n Thank you sir, your payment is successful. Stay With us (Team- SHAMUNUR DINE)"<<endl;
        cout << " ______________________________________________________________________________\n\n";
    }
    else
    {
        cout << " Insufficient amount paid. Additional : BDT-" << fixed << setprecision(2) << -change << " is required.\n";
    }
    cout<<"\n\n Enter your return money that you have taken now : " ;
    cin>>Amount;

    while(Amount >= 1000)
    {
        BDT1000 = Amount / 1000 ;
        Amount = Amount % 1000;
        cout<<"\n Total Number Of 1000 BDT Notes : "<< BDT1000 ;
        break ;
    }
    while(Amount >= 500)
    {
        BDT500 = Amount / 500 ;
        Amount = Amount % 500;
        cout<<"\n Total Number Of 500 BDT Notes : "<< BDT500 ;
        break ;
    }
    while(Amount >= 100)
    {
        BDT100 = Amount / 100 ;
        Amount = Amount % 100;
        cout<<"\n Total Number Of 100 BDT Notes : "<< BDT100 ;
        break ;
    }
    while(Amount >= 50)
    {
        BDT50 = Amount / 50 ;
        Amount =Amount % 50;
        cout<<"\n Total Number Of 50 BDT Notes : "<< BDT50 ;
        break ;
    }
    while(Amount >= 20)
    {
        BDT20 = Amount / 20 ;
        Amount = Amount % 20;
        cout<<"\n Total Number Of 20 BDT Notes : "<<BDT20 ;
        break ;
    }
    while(Amount >= 10)
    {
        BDT10 = Amount / 10 ;
        Amount = Amount % 10;
        cout<<"\n Total Number Of 10 BDT Notes : "<< BDT10 ;
        break ;
    }
    while(Amount >= 5)
    {
        BDT5 = Amount / 5 ;
        Amount = Amount % 5;
        cout<<"\n Total Number Of 5 BDT Notes Or Coin : "<< BDT5 ;
        break ;
    }
    while(Amount >= 2)
    {
        BDT2 = Amount / 2 ;
        Amount = Amount % 2;
        cout<<"\n Total Number Of 2 BDT Notes Or Coin : "<< BDT2 ;
        break ;
    }
    while(Amount >= 1)
    {
        BDT1 = Amount / 1 ;
        Amount = Amount % 1;
        cout<<"\n Total Number Of 1 BDT Note Or Coin : "<< BDT1 ;
        break ;
    }
    count = BDT1000 + BDT500 + BDT100 + BDT50 + BDT20 + BDT10 + BDT5 + BDT2 + BDT1;
    cout<<"\n\n Total Number Of Notes Require :"<< count<<endl ;
    cout<<"\n\n Check your money"<<endl ;

    getch ();

}
