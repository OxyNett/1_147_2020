#include <iostream>
#include <conio.h>

using namespace std;

class TV
{
public:

	string channel;
	double quality;
	char answer;

	TV(string ch, int n_ch, double q)
	{
		channel = ch; num_channel = n_ch; quality = q;
	}
	TV(string ch, int n_ch)
	{
		channel = ch, num_channel = n_ch;
	}

	void setN_ch(int n_ch)
	{
		if (n_ch > 0 and n_ch < 50) num_channel = n_ch;
	}
	int getN_ch()
	{
		return num_channel;
	}

	void display()
	{
		cout << "Channel " << channel << "\n\nNumber of channel " << num_channel << "\n\n";
	}
	void turn_off()
	{
		cout << "Do you want to turn off TV? (y/n) ";
		answer = _getch();
		if (answer == 'y')
		{
			exit(0);
		}
		else if (answer == 'n')
		{
			cout << "\n\nStop watching TV man, it's too late\n\n";
		}
	}

private:

	int num_channel;
};

int main()
{

	int chose;

	cout << "Please enter number of channel, you can chose from: 1,12,35  ";
	cin >> chose;
	cout << "\n\n";

	if(chose == 12)
	{
		TV musical("MTV", 12, 440.12);
		cout << "Channel " << musical.channel << "\n\nNumber of channel " << musical.getN_ch() << "\n\nQuality of the channel " << musical.quality << "\n\n";
		musical.turn_off();
	}
	else if (chose == 1)
	{
		TV news("BBC", 1);
		news.display();
		news.turn_off();
	}
	else if (chose == 35)
	{
		TV secret("Secret channel", 35);
		secret.display();
		cout << "Oh.. sorry, actualy the number of this channel is ";
		secret.setN_ch(36);
		cout << secret.getN_ch() << "\n\n";
		secret.turn_off();
	}

	return 0;
}