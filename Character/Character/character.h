/* character.h */
#include <string>
using namespace std;

class Character
{
private:

	string nickname;
	string klass;
	int level;

public:

	Character(string onetwo)
	{
		cout << onetwo << endl;
	}
	Character(string nickname, string klass, int level) 
	{
		this->nickname = nickname;
		this->klass = klass;
		this->level = level;
	}
	void Disp()
	{
		cout << "Nickname: " << nickname << "\n"
			<< "Klass: " << klass << "\n"
			<< "Level: " << level << "\n" << endl;
	}
};

