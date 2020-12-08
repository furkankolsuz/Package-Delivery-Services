/* ******************************************************* 
 * Filename		:	TwoDayPackage.h
 * Author		:	M Furkan KOLSUZ		
 * Date			:	25.12.2018
 * Description	:	TwoDayPackage Class Header
 * ******************************************************/

#ifndef TWODAYPACKAGE__H
#define TWODAYPACKAGE__H

#include "Package.h"
#include <string>

using namespace std;
class TwoDayPackage : public Package
{

public:
	TwoDayPackage(string sender_n, string sender_addr, string 
	sender_c, string sender_s, string sender_Z, string recipient_n, 
	string recipient_addr,string recipient_c,string recipient_s, 
	string recipient_Z,double wei, double cost, double delivery_fee);
	
	double gettwo_day_delivery_fee();
	void settwo_day_delivery_fee(double delivery_fee);
	double calculateCost();
		
	private:
	double two_day_delivery_fee;
};  

#endif

