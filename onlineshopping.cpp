#include<iostream>
using namespace std;
int main(){
	char startValue;
	char choiceAgain;
	float onlineShopping(void);//prototype
	startLevel:
	cout<<"Please s for start shopping: ";
	start:
	cin>>startValue;
	if(startValue=='s' || startValue=='S'){
	float totalAmount= onlineShopping();
	cout<<"Total bill Amount is: "<<totalAmount<<endl;
	shopAgain:
	cout<<"Do you want shopping again, y or n \n";
	cin>>choiceAgain;
	if(choiceAgain=='y'|| choiceAgain=='Y'){
	goto startLevel;	
	}else if(choiceAgain=='n'|| choiceAgain=='N'){
		cout<<"Thanks for shopping\n";
	}else{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto shopAgain;	
	}
	}
	else
	{
		cout<<"You have entered wrong option, please enter s:"<<endl;
		goto start;
	}

}

float onlineShopping(){
	char choice;
	char item;
	int quantity;
	float billAmount=0;
	itemlevel:
	cout<<"**********Welcome to Online shopping*************\n";
	cout<<"------------Please follow the instruction---------------\n";
	cout<<"(1) Please enter m to order mobile phones"<<endl;
	cout<<"(2) Please enter l to order laptops"<<endl;
	cout<<"(3) Please enter d to order desktops"<<endl;
	cout<<"(4) Please enter s to order speaker"<<endl;
	cout<<"(5) Please enter h to order headphones"<<endl;
	cin>>choice;
	//***********mobile**************
	if(choice=='m'|| choice=='M'){
		mobilelevel:
	cout<<"Mobile details:\n";
	cout<<"(1) Apple => price : 80000\n";
	cout<<"(2) Vivo  => price : 25000\n";
	cout<<"(3) Oppo  => price : 20000\n";
	cout<<"(4) Redmi => price : 18000\n";
	cout<<"(5) Realme => price : 17000\n";
	cout<<"(6) Samsung => price : 25000\n";	
	cout<<"Please enter your choice from the above given list(1-6):\n";
	cin>>item;
	if(item=='1'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*80000;	
	}
	else if(item=='2'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*25000;
	}
		else if(item=='3'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*20000;
	}
		else if(item=='4'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*18000;
	}
		else if(item=='5'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*17000;
	}
		else if(item=='6'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*25000;
	}
	else{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto mobilelevel;	
	}
	}
	
	
		//***********desktops**************
else	if(choice=='d'|| choice=='D'){
		Desktopslevel:
	cout<<"Desktops details:\n";
	cout<<"(1) Apple => price : 80000\n";
	cout<<"(2) Hp  => price : 45000\n";
	cout<<"(3) ASUS  => price : 81490\n";
	cout<<"(4) Lenovo => price : 37430\n";
	cout<<"(5) Smart station => price : 15799\n";
	cout<<"(6) Lenovo V520 => price : 34000\n";	
	cout<<"Please enter your choice from the above given list(1-6):\n";
	cin>>item;
	if(item=='1'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*80000;	
	}
	else if(item=='2'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*45000;
	}
		else if(item=='3'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*81490;
	}
		else if(item=='4'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*37430;
	}
		else if(item=='5'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*15799;
	}
		else if(item=='6'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*34000;
	}
	else{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto Desktopslevel;	
	}
	}
		//***********laptops**************
else	if(choice=='l'|| choice=='L'){
		laptopslevel:
	cout<<"Laptops details:\n";
	cout<<"(1) Apple => price : 80000\n";
	cout<<"(2) Hp  => price : 45000\n";
	cout<<"(3) Dell  => price : 80000\n";
	cout<<"(4) Lenovo => price : 120000\n";
	cout<<"(5) ASUS => price : 90000\n";
	cout<<"(6) Windows os => price : 40000\n";	
	cout<<"Please enter your choice from the above given list(1-6):";
	cin>>item;
	if(item=='1'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*80000;	
	}
	else if(item=='2'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*45000;
	}
		else if(item=='3'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*80000;
	}
		else if(item=='4'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*120000;
	}
		else if(item=='5'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*90000;
	}
		else if(item=='6'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*40000;
	}
	else{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto laptopslevel;	
	}
	}	
	
			//***********Speaker**************
else	if(choice=='s'|| choice=='S'){
		Speakerlevel:
	cout<<"Speaker details:\n";
	cout<<"(1) Sony HT-A5000 => price : 85990\n";
	cout<<"(2) Sony HT-A3000  => price : 83980\n";
	cout<<"(3) JBL PartyBox 110  => price : 31999\n";
	cout<<"(4) Mivi FortS24 => price : 1999\n";
	cout<<"(5) portronics Dash 12 => price : 12999\n";
	cout<<"(6) Mivi FortS16  => price : 899\n";	
	cout<<"Please enter your choice from the above given list(1-6):";
	cin>>item;
	if(item=='1'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*85990;	
	}
	else if(item=='2'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*83980;
	}
		else if(item=='3'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*31999;
	}
		else if(item=='4'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*1999;
	}
		else if(item=='5'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*12999;
	}
		else if(item=='6'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*899;
	}
	else{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto Speakerlevel;	
	}
	}
	
	
			//***********headphones**************
else	if(choice=='h'|| choice=='H'){
		headphoneslevel:
	cout<<"headphones details:\n";
	cout<<"(1) Zebronics Zeb-Storm => price : 399\n";
	cout<<"(2) sony playstation pulse 3D Bluetooth Headset  => price : 8950\n";
	cout<<"(3) Hammer Bash Max Bluetooth Headset  => price : 2499\n";
	cout<<"(4) GOVO GoBold 400 Bluetooth Headset => price : 1199\n";
	cout<<"(5) Logitech G435 Bluetooth Headset => price : 6995\n";
	cout<<"(6) Hammer Bash 2.0 Bluetooth Headset => price : 1789\n";	
	cout<<"Please enter your choice from the above given list(1-6):";
	cin>>item;
	if(item=='1'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*399;	
	}
	else if(item=='2'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*8950;
	}
		else if(item=='3'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*2499;
	}
		else if(item=='4'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*1199;
	}
		else if(item=='5'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*6995;
	}
		else if(item=='6'){
		cout<<"Enter quantity: ";
		cin>>quantity;
	billAmount=billAmount+quantity*1789;
	}
	else{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto headphoneslevel;	
	}
	}
	else
	{
	cout<<"You have entered wrong option, please type again:"<<endl;
		goto itemlevel;	
	}
	return billAmount;
}
