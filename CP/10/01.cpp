#include <iostream>
#include <string>

using namespace std;

	string words[] = {"first", "second", "third", "fourth", "fifth", "sixth",
	"seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"};
	string s2[] = {"and a Partridge in a Pear Tree", "Two Turtle Doves", "Three French Hens", "Four Calling Birds", "Five Golden Rings", "Six Geese a Laying",
	"Seven Swans a Swimming", "Eight Maids a Milking", "Nine Ladies Dancing", "Ten Lords a Leaping", "Eleven Pipers Piping", "12 Drummers Drumming"};

	void solve(int i) {
		int damn = i==1;
		cout << "On the " <<words[i-1]<< " day of Christmas\nmy true love sent to me:\n";
		while(i--)
			cout << (damn && i == 0 ? "A Partridge in a Pear Tree" : s2[i])  <<"\n";
	}
int main()
{
	
	int a,b,flag=1;
	while(cin >> a >>b) {
		while(a != b){
		  solve(a);
		  cout<<"\n";
		  a += a > b ? -1 : 1;	
		}
		solve(a);
		cout <<"----------\n";
	}
}
