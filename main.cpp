/* ******************************************************* 
 * Filename		:	main.cpp
 * Author		:	M Furkan KOLSUZ		
 * Date			:	26.12.2018
 * Description	:	Driver program for class Package
 * ******************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
 using namespace std;

int main()
{
	// instantiate a Package object
	Package Kargo1("Seyda Oguz", "Bagcilar", "Istanbul", 
	"Turkiye", "34056", "M Furkan KOLSUZ", "Odunpazari", "Eskisehir", "Turkiye", 
	"26455", 12.00, 1.50);
	// instantiate a TwoDayPackage object
	TwoDayPackage Kargo2("Ali Cabuk", "Batikent", "Ankara", 
	"Turkiye", "06154", "M Furkan KOLSUZ", "Batikent", "Eskisehir", "Turkiye", 
	"26455", 12.00, 1.50, 3.10);
	// instantiate a OvernightPackage object
	OvernightPackage Kargo3("Ahmet Hizli", "Levent", "Istanbul", 
	"Turkiye", "34054", "Haci Olmus", "Gebze", "Kocaeli", "Turkiye", 
	"41063", 12.00, 1.50, 5.00);

 
	cout << fixed << setprecision(2);
    cout << "_________________________________________\n\n";
    cout << "Standard Delivery\n";
    cout << "Sender        " << Kargo1.getsender_name()<< "\n";
    cout << "              " << Kargo1.getsender_address() << "\n";
    cout << "              " << Kargo1.getSendCity() << " " << 
	Kargo1.getsender_state() << " " << Kargo1.getsender_ZIP() << "\n";
    cout << "\n";
    cout << "Recipient     " << Kargo1.getrecipient_name()<< "\n";
    cout << "              " << Kargo1.getrecipient_address() << "\n";
    cout << "              " << Kargo1.getrecipient_city() << " " <<
	Kargo1.getrecipient_state() << " " << Kargo1.getrecipient_ZIP() << "\n";
    cout << "Cost          TL " <<Kargo1.calculateCost() <<"\n";
	cout << "#########################################\n";
 
    cout << "\n\n";
    cout << "_________________________________________\n\n";
    cout << "Two Day Delivery\n";
    cout << "Sender        " << Kargo2.getsender_name()<< "\n";
    cout << "              " << Kargo2.getsender_address() << "\n";
    cout << "              " << Kargo2.getSendCity() << " " << 
	Kargo2.getsender_state() << " " << Kargo2.getsender_ZIP() << "\n";
    cout << "\n";
    cout << "Recipient     " << Kargo2.getrecipient_name()<< "\n";
    cout << "              " << Kargo2.getsender_address() << "\n";
    cout << "              " << Kargo2.getrecipient_city() << " " << 
	Kargo2.getrecipient_state() << " " << Kargo2.getrecipient_ZIP() << "\n";
    cout << "Cost          TL " <<Kargo2.calculateCost()<<"\n";
	cout << "#########################################\n";
	
	cout << "\n\n";
	cout << "_________________________________________\n\n";
    cout << "Overnight Delivery\n";
    cout << "Sender        " << Kargo3.getsender_name()<< "\n";
    cout << "              " << Kargo3.getsender_address() << "\n";
    cout << "              " << Kargo3.getSendCity() << " " << 
	Kargo3.getsender_state() << " " << Kargo3.getsender_ZIP() << "\n";
    cout << "\n";
    cout << "Recipient     " << Kargo3.getrecipient_name()<< "\n";
    cout << "              " << Kargo3.getrecipient_address() << "\n";
    cout << "              " << Kargo3.getrecipient_city() << " " <<
	Kargo3.getrecipient_state() << " " << Kargo3.getrecipient_ZIP() << "\n";
    cout << "Cost          TL " <<Kargo3.calculateCost() <<"\n";
	cout << "#########################################\n";
 
	system("pause");
	return 0;
}


