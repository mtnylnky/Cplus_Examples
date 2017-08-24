#include <iostream>
#include <fstream>
using namespace std;
main(){
	ofstream mainfile;//dosya komutunu tanımladık
	mainfile.open("asd.txt");//dosyayı açtık eğer yoksa oluşturduk
	mainfile<<"Merhaba";//içine ekleme yaptık
	mainfile.close();//dosyayı kapattık
}
