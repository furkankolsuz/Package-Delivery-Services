/* ******************************************************* 
 * Filename		:	OvernightPackage.h
 * Author		:	M Furkan KOLSUZ		
 * Date			:	25.12.2018
 * Description	:	OvernightPackage Class Header
 * ******************************************************/

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"
#include <string>

using namespace std;

class OvernightPackage : public Package
{

public:
	OvernightPackage(string sender_n, string sender_addr, string sender_c, 
	string sender_s, string sender_Z, string recipient_n, string recipient_addr,
	string recipient_c,string recipient_s, string recipient_Z, double wei, 
	double cost, double delivery_fee);
	
	double calculateCost();
	double getovernight_delivery_fee();
	void setovernight_delivery_fee(double delivery_fee);

private:
	double overnight_delivery_fee;
	
};

#endif

