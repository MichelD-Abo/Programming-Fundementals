#include <iostream>
using namespace std;

int main()
{
	bool rest1, rest2, rest3, rest4, rest5, rest6,
		rest7, rest8, rest9, rest10, rest11, rest12,
		rest13, rest14, rest15, rest16, rest17, rest18,
		rest19, rest20, rest21, rest22, rest23, rest24,
		rest25, rest26, rest27, rest28, rest29, rest30;

	rest1 = (12 >= 12);
	rest2 = (12 > 7);
	rest3 = (8 < 6);
	rest4 = (8 == 8);
	rest5 = (12 <= 12);
	rest6 = (7 == 5);

	rest7 = !(12 >= 12);
	rest8 = !(12 < 7);
	rest9 = !(8 < 6);
	rest10 =!(8 == 8);
	rest11 =!(12 <= 12);
	rest12 =!(7 == 5);

	rest13 = (true && true);
	rest14 = (true && false);
	rest15 = (false || true);
	rest16 = (false ||false);
	rest17 = !(false);
	rest18 = !(true || false);

	rest19 = (7 == 7) && (7 > 5);
	rest20 = (7 == 7) && (7 < 5);
	rest21 = (7 == 7) || (7 < 5);
	rest22 = (7 < 7) || (7 > 5);
	rest23 = !(7 == 7) && (7 > 5);
	rest24 = (7 == 7) && !(7 < 5);

	rest25 = ((5 > 6) && (7 == 7)) || (true || false);
	rest26 = !((5 > 6) && (7 == 7)) || (true || false);
	rest27 = !((5 > 6) && (7 == 7)) || !(true || false);
	rest28 = !((5 > 6) || (7 == 7)) && !(true || false);
	rest29 = (((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3))) && true;
	rest30 = (((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3))) || true;

	cout << rest1 << endl 
		 << rest2 << endl
		 << rest3 << endl
		 << rest4 << endl
		 << rest5 << endl
		 << rest6 << endl << endl

		<< rest7 << endl
		<< rest8 << endl
		<< rest9 << endl
		<< rest10 << endl
		<< rest11 << endl
		<< rest12 << endl << endl

		<< rest13 << endl
		<< rest14 << endl
		<< rest15 << endl
		<< rest16 << endl
		<< rest17 << endl
		<< rest18 << endl << endl

		<< rest19 << endl
		<< rest20 << endl
		<< rest21 << endl
		<< rest22 << endl
		<< rest23 << endl
		<< rest24 << endl << endl

		<< rest25 << endl
		<< rest26 << endl
		<< rest27 << endl
		<< rest28 << endl
		<< rest29 << endl
		<< rest30 << endl << endl

		 ;

;
;
;
;
;
;
}