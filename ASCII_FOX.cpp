#include <iostream>
#include <string>
using namespace std;
class Fox {
private:
    string name;
public:
    Fox(string n) {
        this->name = n;
    }
    void  Picture() {
        string picture = R""""(
                                                                   ,-,
                                                             .-=;~ /
                                                          -~   '     ;.
                                                      .-~     '   .-~-~-._
                                                _.--~~:.             --.____88
                              ____.........--~~~. .' .  .        _..-------~~
                     _..--~~~~               .' .'             ,'
                 _.-~                        .       .      ,'
               .'                                    :.    ./
             .:     ,/                             ::.   ,'
           .:'     ,(            ;.                ::. ,-'
          .'     ./'..     . . /:::.__.... /:.o/
         /     ./'. . .)  . .,'               `88;?88|
       ,'  . .,/'.,-~ /.o8P'                  88P ?8b
    ,'' . .,/',-~    d888P'                    88'  88|
 .'~  . .,:oP'        ?88b              ..--- 88.--'8b.--..
:     ...' 88o ,------.88o ..._....=~- .    ~~         ~-.  .
`.;;;:='                ~~~                ~-    -       -   -
)"""";
        cout << picture << endl;
    }
};
int main() {
    Fox fox("Fox");
    fox.Picture();
    return 0;
}