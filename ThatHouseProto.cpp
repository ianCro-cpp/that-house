#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct player{
	int life = 5;
	string inventory[5];
	int outdamage;
};
class Boss{
	private:
		int life;
		double outdamage;
		int luckRange;
	public:
		Boss();
		Boss(int l; double d, int r);
		Boss(Boss b);
		void setViv();
		void setDam();
		void setRang();
		void getViv();
		void getDam();
		void getRang();
		int giveDam();
		int acceptPain();
};
Boss::Boss(){
	life = 10;
	outdamage = 3;
	luckRange = 5;
}
Boss(int l; double d, int r){
	life = l;
	outdamage = d;
	luckRange = r;
}
void Boss::setViv(){
	life = l;
}
void Boss::setDam(){
	outdamage = d;
}
void Boss::setRang(){
	luckRange = r;
}
void Boss::getViv(){
	return life;
}
void Boss::getDam(){
	return outdamage;
}
void Boss::getRang(){
	return luckRange;
}
int title(int startup);
int play();
void win();
void death();
int title(int startup){
		cout<<"████████╗██╗  ██╗ █████╗ ████████╗    ██╗  ██╗ ██████╗ ██╗   ██╗███████╗███████╗\n";
		cout<<"╚══██╔══╝██║  ██║██╔══██╗╚══██╔══╝    ██║  ██║██╔═══██╗██║   ██║██╔════╝██╔════╝\n";
		cout<<"   ██║   ███████║███████║   ██║       ███████║██║   ██║██║   ██║███████╗█████╗  \n";
		cout<<"   ██║   ██╔══██║██╔══██║   ██║       ██╔══██║██║   ██║██║   ██║╚════██║██╔══╝  \n";
		cout<<"   ██║   ██║  ██║██║  ██║   ██║       ██║  ██║╚██████╔╝╚██████╔╝███████║███████╗\n";
		cout<<"   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝       ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚══════╝╚══════╝\n";
		cout<<setw(52)<<"--*|Press 1 to start|*--\n";
		cout<<"     ':.\n";
		cout<<"         []_____\n";
		cout<<"        /\\      \\\n";
		cout<<"    ___/  \\__/\\__\\__\n";
		cout<<"---/\\___\\ |''''''|__\\-- --- -- --- -- ------ -- ----- -- ----- -- ------ -- ---- \n";
		cout<<"   ||'''| |''||''|''|\n";
		cout<<setw(52)<<"--*|2017-Hawkeye|*--\n";
		cin>>startup;
	return startup;
}
int play(){
	int winchance = 0
	int roomChoice = 0;
	int actionChoice = 0;
	while(player.life > 0 || winchance != 1){
		cout<<setw(52)<<"Pick a room to enter.\n"<<endl<<endl;
		cout<<"Press 1 to Living Room\n";
		cout<<"Press 2 to Kitchen\n";
		cout<<"Press 3 to Basement\n";
		cout<<"Press 4 to go Upstairs\n";
		cin<<roomChoice;
		switch(roomChoice){
			case 1:
				while(actionChoice!=4 || player.life > 0){
					cout<<setw(52)<<"-------*|LIVING ROOM|*-------\n";
					cout<<"Press 1 to look through the furniture and carpet\n";
					cout<<"Press 2 to turn on the television\n";
					cout<<"Press 3 to look through photos\n";
					cout<<"Press 4 to Exit\n";
					cin>>actionChoice;
					switch(actionChoice){
						case 1:
							while(){
								cout<<"Your search through the furniture with only finding two quarters and a cigarette butt.\n"
								cout<<"You slide the carpet in fromt of the sofa onto the wall and find a rusty metal trapdoor. It feels easy to open, but someone added a sliding deadlock inside the trapdoor\n";
								cout<<"Press 1 to attempt to unlock the door\n";
								cout<<"Press 0 to leave the trapdoor\n";
							}
							break;
						case 2:
							cout<<""
							break;
						case 3:
							cout<<"You look through the photos on the centerpiece. Most of them show a mid 30s moustashed wack with his beautiful wife and kids. Something's a bit odd with that guy.\n"
							break;
						case 4:
							cout<<"Back to main room choice"<<endl;
							break;
						default: cout<<"Not one of the choices given. Try again.\n";
					}
				}
				break;
			case 2:
				while(actionChoice!=4 || player.life > 0){
					cout<<setw(52)<<"-------*|KITCHEN|*-------\n";
					cout<<"Press 1 to rummage through pantries\n";
					cout<<"Press 2 to look under the sink\n";
					cout<<"Press 3 to open the jars\n";
					cout<<"Press 4 to Exit\n";
					cin>>actionChoice;
					switch(actionChoice){
						case 1:
							
							break;
						case 2:
							
							break;
						case 3:
							
							break;
						case 4:
							cout<<"Back to main room choice"<<endl;
							break;
						default: cout<<"Not one of the choices given. Try again.\n";
					}
				}
				break;
			case 3:
				while(actionChoice!=4 || player.life > 0){
					cout<<setw(52)<<"-------*|BASEMENT|*-------\n";
					cout<<"Press 1 to scavenge through equipment\n";
					cout<<"Press 2 to open cellars\n";
					cout<<"Press 3 to play with antiques\n";
					cout<<"Press 4 to Exit\n";
					cin>>actionChoice;
					switch(actionChoice){
						case 1:
							cout<<"You collected a baseball bat"
							break;
						case 2:
							
							break;
						case 3:
							
							break;
						case 4:
							cout<<"Back to main room choice"<<endl;
							break;
						default: cout<<"Not one of the choices given. Try again.\n";
					}
				}
				break;
			case 4:
				while(actionChoice!=4 || player.life > 0){
					cout<<setw(52)<<"-------*|UPSTAIRS|*-------\n";
					cout<<"Press 1 to Attic\n";
					cout<<"Press 2 to Master Bedroom\n";
					cout<<"Press 3 to Childrens' Bedroom\n";
					cout<<"Press 4 to Exit\n";
					cin>>actionChoice;
					switch(actionChoice){
						case 1:
							Boss b1;
							cout<<"~~~~~~~*|You've encountered the MULTI-DIMENSIONAL SHAPESHIFTING FATHER|*~~~~~~~"<<end;
							break;
						case 2:
							Boss b2;
							cout<<"~~~~~~~*|You've encountered the GRANDMASTER|*~~~~~~~"<<end;
							break;
						case 3:
							Boss b3;
							cout<<"~~~~~~~*|You've encountered the MASTER'S SON|*~~~~~~~"<<end;
							break;
						case 4:
							cout<<"Back to main room choice"<<endl;
							break;
						default: cout<<"Not one of the choices given. Try again.\n";
					}
				}
				break;
				default: cout<<"Not one of the choices given. Try again.\n";
		}
	}
	if(winchance = 1){
		win();
	}
	else if(player.life == 0){
		death();
	}
	return 0;
}
void death(){
	cout<<setw(52)<<"Whoops! Looks like..."<<endl<<endl;
	cout<<setw(52)<<" ▄· ▄▌      ▄• ▄▌    ·▄▄▄▄  ▪  ▄▄▄ .·▄▄▄▄  \n";
	cout<<setw(52)<<"▐█▪██▌▪     █▪██▌    ██▪ ██ ██ ▀▄.▀·██▪ ██ \n";
	cout<<setw(52)<<"▐█▌▐█▪ ▄█▀▄ █▌▐█▌    ▐█· ▐█▌▐█·▐▀▀▪▄▐█· ▐█▌\n";
	cout<<setw(52)<<" ▐█▀·.▐█▌.▐▌▐█▄█▌    ██. ██ ▐█▌▐█▄▄▌██. ██ \n";
	cout<<setw(52)<<"  ▀ •  ▀█▄▀▪ ▀▀▀     ▀▀▀▀▀• ▀▀▀ ▀▀▀ ▀▀▀▀▀• \n"<<endl<<endl;
}
void win(){
	cout<<setw(52)<<"╔╦╗┬ ┬┌─┐  ╔═╗┌┐┌┌┬┐\n";
	cout<<setw(52)<<" ║ ├─┤├┤   ║╣ │││ ││\n";
	cout<<setw(52)<<" ╩ ┴ ┴└─┘  ╚═╝┘└┘─┴┘\n"<<endl<<endl;
	cout<<setw(52)<<"Congratulations! You win!";
}
int main() {
	int again = 0;
	while(again == 0){
		int s = 0;
		s = title(s);
		if(s == 1){
			play();
			cout<<"Press 0 to play again\n";
			cin>>again;
		}
		else again++;
	}
	return 0;
}